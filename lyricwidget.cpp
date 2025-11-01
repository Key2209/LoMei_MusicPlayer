#include "lyricwidget.h"
#include <QLabel>
#include <QGraphicsBlurEffect>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QPainter>
#include <QScrollBar>
#include <QFile>
#include <QPixmap>
#include <QDebug>

// -------------------- LineLabel 实现 --------------------
LineLabel::LineLabel(const QString &txt, QWidget *parent)
    : QWidget(parent), m_text(txt)
{
    // 基础字体（你可以换成更漂亮的字体文件）
    QFont f("Microsoft YaHei", 18);
    f.setStyleStrategy(QFont::PreferAntialias);
    m_baseFont = f;
    setMinimumHeight(36);
    setAttribute(Qt::WA_TransparentForMouseEvents);
}

QSize LineLabel::sizeHint() const
{
    QFontMetrics fm(m_baseFont);
    int h = fm.height() * m_scale + 8;
    int w = fm.horizontalAdvance(m_text) * m_scale + 20;
    return QSize(w, qMax(28, h));
}

void LineLabel::paintEvent(QPaintEvent * /*event*/)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);
    p.setRenderHint(QPainter::TextAntialiasing);

    // 逻辑：先绘制普通颜色（灰色），然后 clip 一个矩形区域，绘制高亮颜色（绿色）
    QFont f = m_baseFont;
    f.setPointSizeF(f.pointSizeF() * m_scale);
    p.setFont(f);
    QFontMetrics fm(f);

    // 文本绘制位置（水平居中，垂直居中）
    int tw = fm.horizontalAdvance(m_text);
    int x = (width() - tw) / 2;
    int y = (height() + fm.ascent() - fm.descent()) / 2;

    // 1) 绘制灰色底色文本
    p.setPen(QColor("#cfcfcf"));
    p.drawText(x, y, m_text);

    // 2) 遮罩区域（progress 表示高亮比例）
    if (m_progress > 0.0001) {
        int fillW = int(tw * m_progress + 0.5);
        // 使用 clip 矩形再绘制高亮文字
        p.save();
        p.setClipRect(x, 0, fillW, height());
        p.setPen(QColor("#1db954")); // 高亮颜色（QQ 风格绿）
        p.drawText(x, y, m_text);
        p.restore();
    }
}

// -------------------- LyricWidget 实现 --------------------

LyricWidget::LyricWidget(QWidget *parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_StyledBackground);
    setStyleSheet("background: rgba(255,255,255,255);");
    // setStyleSheet("background: transparent;");
    // 背景 label（放最底层；setBackgroundImage 会创建并放入）
    m_bgLabel = new QLabel(this);
    m_bgLabel->setScaledContents(true);
    m_bgLabel->hide();

    // 半透明暗化遮罩（使歌词更醒目）
    m_maskLabel = new QLabel(this);
    m_maskLabel->setStyleSheet("background: rgba(25,25,25,25);");
    m_maskLabel->hide();

    // scroll area + container
    m_scroll = new QScrollArea(this);
    m_scroll->setFrameShape(QFrame::NoFrame);
    m_scroll->setWidgetResizable(true);
    m_scroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_scroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    m_scroll->setStyleSheet("background: transparent;");

    m_container = new QWidget();
    m_vbox = new QVBoxLayout(m_container);
    m_vbox->setSpacing(6);
    m_vbox->setContentsMargins(20, 40, 20, 40); // 上下留白让居中更好看
    m_vbox->setAlignment(Qt::AlignVCenter);

    m_scroll->setWidget(m_container);

    QVBoxLayout *main = new QVBoxLayout(this);
    main->addWidget(m_scroll);
    main->setContentsMargins(0, 0, 0, 0);
    setLayout(main);

    // 默认不绑定 player；由外部 bindMediaPlayer 或手动调用 updatePosition()
}

LyricWidget::~LyricWidget()
{
    clearLines();
}

// 在 resize 时更新背景/遮罩 geometry
void LyricWidget::resizeEvent(QResizeEvent *ev)
{
    QWidget::resizeEvent(ev);
    if (m_bgLabel) {
        m_bgLabel->setGeometry(rect());
    }
    if (m_maskLabel) {
        m_maskLabel->setGeometry(rect());
    }
}

// set background image (cover), apply blur + opacity
void LyricWidget::setBackgroundImage(const QString &imgPath)
{
    QPixmap pix(imgPath);
    if (pix.isNull()) return;

    // 放到 bgLabel
    m_bgLabel->setPixmap(pix.scaled(size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    m_bgLabel->setGeometry(rect());
    m_bgLabel->show();

    // 模糊效果
    auto *blur = new QGraphicsBlurEffect(m_bgLabel);
    blur->setBlurRadius(28);
    m_bgLabel->setGraphicsEffect(blur);

    // mask to darken
    m_maskLabel->setStyleSheet("background: rgba(10,10,10,160);");
    m_maskLabel->setGeometry(rect());
    m_maskLabel->show();
}

void LyricWidget::setMaskOpacity(int alpha)
{
    alpha = qBound(0, alpha, 255);
    m_maskLabel->setStyleSheet(QString("background: rgba(10,10,10,%1);").arg(alpha));
    m_maskLabel->show();
}

void LyricWidget::setLyricManager(LyricManager *mgr)
{
    if (!mgr) return;
    m_mgr = mgr;
    clearLines();

    QStringList texts = m_mgr->allTexts();
    QFont baseFont("Microsoft YaHei", 20);
    for (int i = 0; i < texts.size(); ++i) {
        LineLabel *lbl = new LineLabel(texts[i], m_container);
        lbl->setBaseFont(baseFont);
        lbl->setMinimumHeight(36);
        lbl->setProgress(0.0);
        lbl->setScale(1.0);
        m_vbox->addWidget(lbl);
        m_lineWidgets.append(lbl);
    }
    m_container->adjustSize();
    m_currentIndex = -1;
}

// 绑定 player：连接 positionChanged 信号，相应更新歌词
void LyricWidget::bindMediaPlayer(QMediaPlayer *player)
{
    if (!player) return;
    if (m_player) {
        disconnect(m_player, nullptr, this, nullptr);
    }
    m_player = player;
    connect(m_player, &QMediaPlayer::positionChanged, this, [this](qint64 pos){
        updatePosition(pos);
    });
}

// 清理所有行的 widget
void LyricWidget::clearLines()
{
    for (LineLabel *w : m_lineWidgets) {
        if (w) { w->deleteLater(); }
    }
    m_lineWidgets.clear();
}

// 将给定时间（毫秒）映射到行，并更新行进度 & 动画（逐行填充）
void LyricWidget::updatePosition(qint64 positionMs)
{
    if (!m_mgr) return;
    int idx = m_mgr->indexForTime(positionMs);
    if (idx < 0) {
        // 未到第一句
        // reset first lines progress
        if (!m_lineWidgets.isEmpty()) {
            for (int i = 0; i < m_lineWidgets.size(); ++i) {
                m_lineWidgets[i]->setProgress(0.0);
                // scale reset
                m_lineWidgets[i]->setScale(1.0);
            }
            m_currentIndex = -1;
        }
        return;
    }

    // 计算行内 progress：从该行的开始时间到下一行的开始时间
    qint64 startMs = m_mgr->timeForIndex(idx);
    qint64 nextMs = (idx + 1 < m_mgr->lineCount()) ? m_mgr->timeForIndex(idx + 1) : (startMs + 4000); // 若最后一行，默认4s长度
    qreal progress = 0.0;
    if (nextMs > startMs) progress = double(positionMs - startMs) / double(nextMs - startMs);
    progress = qBound<qreal>(0.0, progress, 1.0);

    // 只有当前行需要填充并放大，其它行进度为0并缩回
    if (idx != m_currentIndex) {
        // previous -> shrink & reset progress
        if (m_currentIndex >= 0 && m_currentIndex < m_lineWidgets.size()) {
            LineLabel *prev = m_lineWidgets[m_currentIndex];
            // animate scale back to 1.0
            QPropertyAnimation *a = new QPropertyAnimation(prev, "scale");
            a->setDuration(220);
            a->setStartValue(prev->scale());
            a->setEndValue(1.0);
            a->setEasingCurve(QEasingCurve::OutCubic);
            a->start(QAbstractAnimation::DeleteWhenStopped);
            // reset color via progress=0 (paint logic uses progress to draw highlight)
            prev->setProgress(0.0);
        }

        // new current -> animate scale up
        if (idx >= 0 && idx < m_lineWidgets.size()) {
            LineLabel *cur = m_lineWidgets[idx];
            QPropertyAnimation *a2 = new QPropertyAnimation(cur, "scale");
            a2->setDuration(320);
            a2->setStartValue(cur->scale());
            a2->setEndValue(1.28); // 放大系数，可调
            a2->setEasingCurve(QEasingCurve::OutBack);
            a2->start(QAbstractAnimation::DeleteWhenStopped);

            // ensure this line is visible at center (smooth scrolling)
            ensureCenterLine(idx);
        }

        m_currentIndex = idx;
    }

    // set progress for current line; others zero
    for (int i = 0; i < m_lineWidgets.size(); ++i) {
        if (i == idx) m_lineWidgets[i]->setProgress(progress);
        else m_lineWidgets[i]->setProgress(0.0);
    }
}

// 确保 idx 行滚动到 scroll 的中间位置（使用动画）
void LyricWidget::ensureCenterLine(int idx)
{
    if (!m_scroll || idx < 0 || idx >= m_lineWidgets.size()) return;
    QWidget *w = m_lineWidgets[idx];
    int target = w->y() - (m_scroll->viewport()->height() / 2) + (w->height() / 2);
    QPropertyAnimation *anim = new QPropertyAnimation(m_scroll->verticalScrollBar(), "value");
    anim->setDuration(300);
    anim->setStartValue(m_scroll->verticalScrollBar()->value());
    anim->setEndValue(target);
    anim->setEasingCurve(QEasingCurve::OutCubic);
    anim->start(QAbstractAnimation::DeleteWhenStopped);
}
