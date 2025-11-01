#pragma once
#include <QWidget>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QMediaPlayer>
#include <QTimer>
#include "lyricmanager.h"
#include <QLabel>
///
/// LineLabel: 自定义绘制的行控件
/// - 支持 progress（0..1）属性： 在绘制时先绘制普通颜色，再采用 clip 绘制高亮颜色覆盖前景的一部分
/// - 支持 scale 属性：用于动态放大当前行
///
class LineLabel : public QWidget {
    Q_OBJECT
    Q_PROPERTY(qreal progress READ progress WRITE setProgress)
    Q_PROPERTY(qreal scale READ scale WRITE setScale)
public:
    explicit LineLabel(const QString &txt = QString(), QWidget *parent = nullptr);

    void setText(const QString &txt) { m_text = txt; update(); }
    QString text() const { return m_text; }

    qreal progress() const { return m_progress; }
    void setProgress(qreal p) { m_progress = qBound<qreal>(0.0, p, 1.0); update(); }

    qreal scale() const { return m_scale; }
    void setScale(qreal s) { m_scale = s; updateGeometry(); update(); }

    void setBaseFont(const QFont &f) { m_baseFont = f; updateGeometry(); update(); }

    QSize sizeHint() const override;

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QString m_text;
    qreal m_progress = 0.0;
    qreal m_scale = 1.0;
    QFont m_baseFont;
};

///
/// LyricWidget: 显示整首歌的歌词面板
/// - 支持背景封面模糊
/// - 接收 LyricManager 的数据
/// - bindMediaPlayer 可以绑定 QMediaPlayer 实时同步 positionChanged 信号
///
class LyricWidget : public QWidget {
    Q_OBJECT
public:
    explicit LyricWidget(QWidget *parent = nullptr);
    ~LyricWidget() override;

    // 从 LyricManager 加载文本并显示
    void setLyricManager(LyricManager *mgr);

    // 绑定 QMediaPlayer（可选）：会自动读 positionChanged
    void bindMediaPlayer(QMediaPlayer *player);

    // 手动更新当前时间（毫秒). 如果你直接用 player 的 positionChanged，这个由信号驱动。
    void updatePosition(qint64 positionMs);





protected:


private:
    LyricManager *m_mgr = nullptr;
    QMediaPlayer *m_player = nullptr;

    // UI
    QLabel *m_bgLabel = nullptr;       // 背景图片（在底层）
    QScrollArea *m_scroll = nullptr;
    QWidget *m_container = nullptr;
    QVBoxLayout *m_vbox = nullptr;

    QVector<LineLabel*> m_lineWidgets;
    int m_currentIndex = -1;

    // helper
    void clearLines();
    void ensureCenterLine(int idx);
    void animateLineChange(int newIdx, qreal progress);
};
