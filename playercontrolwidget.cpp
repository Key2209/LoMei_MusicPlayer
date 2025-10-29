#include "mytoolclass.h"
#include "playercontrolwidget.h"
#include "ui_playercontrolwidget.h"

#include <QFile>
#include <QPainterPath>
#include <QPropertyAnimation>
#include <QGraphicsDropShadowEffect>


playerControlWidget::playerControlWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::playerControlWidget)
{
    ui->setupUi(this);

    UI_Init();

    connect(ui->slider_progress,&QSlider::sliderPressed,this,[=]()
            {
        m_isSeeking=true;
    });
    connect(ui->slider_progress, &QSlider::sliderReleased, this, [=](){

        int value=ui->slider_progress->value();
        emit seekRequested(static_cast<qint64>(value));
        m_isSeeking=false;
    });
    VolumePopupInit();
}

playerControlWidget::~playerControlWidget()
{
    delete ui;
}

void playerControlWidget::setCurrentSong(Songstruct song)
{
    currentSong=song;

    setSongName(song.title);
    setSingerName(song.artist);
    setTotalDuration(song.duration);
    duration_ms= duration_string_to_ms(song.duration);

}

void playerControlWidget::setPosition(qint64 position)
{
    //ui->slider_progress->setSliderPosition(position);
    QString MMSS=duration_ms_to_string(position);
    setNowDuration(MMSS);
    if(m_isSeeking)return;
    ui->slider_progress->setValue(position);

}

void playerControlWidget::setDuration(qint64 duration)
{

    ui->slider_progress->setRange(0,duration);

}



void playerControlWidget::UI_Init()
{
    setAttribute(Qt::WA_StyledBackground, true);
    setAutoFillBackground(true);
    setStyleSheet(
        "#widget_bottom {"
        "   background-color: rgb(255, 255, 255);"
        "   border-top: 1px solid rgb(200,200,200);"
        "   border-radius: 4px;"

        "}"
        );



    //设置pushbutton可点击切换
    ui->pushButton_play->setCheckable(true);
    ui->pushButton_play_next->setCheckable(true);
    ui->pushButton_play_prev->setCheckable(true);
    ui->pushButton_volume->setCheckable(true);
    ui->pushButton_playOrder->setCheckable(true);
    // 设置鼠标为“手掌”形状
    ui->pushButton_play->setCursor(Qt::PointingHandCursor);
    ui->pushButton_play_next->setCursor(Qt::PointingHandCursor);
    ui->pushButton_play_prev->setCursor(Qt::PointingHandCursor);
    ui->pushButton_volume->setCursor(Qt::PointingHandCursor);
    ui->pushButton_playOrder->setCursor(Qt::PointingHandCursor);


}

void playerControlWidget::setSongName(QString name)
{
    if(name==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(14);             // 设置字号
    font.setBold(true);                // 加粗
    //font.setItalic(false);             // 斜体
    ui->label_songName->setFont(font);
    ui->label_songName->setText(name);
}

void playerControlWidget::setSingerName(QString name)
{
    if(name==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(11);             // 设置字号
    //font.setBold(true);                // 加粗
    //font.setItalic(false);             // 斜体
    ui->label_singerName->setFont(font);
    ui->label_singerName->setText("-"+name);
}

void playerControlWidget::setNowDuration(QString nowtime)
{
    if(nowtime==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(9);             // 设置字号
    //font.setBold(true);                // 加粗
    //font.setItalic(false);             // 斜体
    ui->label_nowtime->setFont(font);
    ui->label_nowtime->setText(nowtime);
}

void playerControlWidget::setTotalDuration(QString totaltime)
{
    if(totaltime==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(9);             // 设置字号
    //font.setBold(true);                // 加粗
    //font.setItalic(false);             // 斜体
    ui->label_totaltime->setFont(font);
    ui->label_totaltime->setText(totaltime);

}

void playerControlWidget::setImage(const QString &path)
{

    if(path==nullptr)return;
    QPixmap pix;
    bool success=pix.load(path);

    if(success)//没有图片用默认
    {
        ui->label_songImage->setScaledContents(true);
        ui->label_songImage->setPixmap(pix);
    }
}

QString playerControlWidget::duration_ms_to_string(qint64 duration)
{
    if (duration < 0) {
        duration = 0;
    }

    // 2. 计算分钟和秒
    // 总秒数
    qint64 totalSeconds = duration / 1000;

    // 分钟 (M)
    qint64 minutes = totalSeconds / 60;

    // 剩余秒数 (SS)
    qint64 seconds = totalSeconds % 60;

    QString result= QString("%1:%2").arg(minutes,2,10,QChar('0')).arg(seconds,2,10,QChar('0'));
    return  result;
}

qint64 playerControlWidget::duration_string_to_ms(QString duration)
{
    QStringList parts = duration.split(':');
    if(parts.size()!=2)return -1;
    bool m,s;
    int minutes=parts[0].toInt(&m);
    int seconds=parts[1].toInt(&s);
    if(m&&s)
    {
        qint64 result= (static_cast<qint64>(minutes) * 60 * 1000) +
                        (static_cast<qint64>(seconds) * 1000);


        return  result ;
    }
    else{
        qDebug()<<"歌曲时间错误";
        return -1;
    }
}

void playerControlWidget::VolumePopupInit()
{
    popup = new VolumePopup(this);
    popup->hide();
    connect(popup,&VolumePopup::volumeChanged,this,&playerControlWidget::SendVolumeRequested);

}

void playerControlWidget::on_pushButton_volume_clicked()
{
    if (popup->isVisible()) {
        popup->hide();
        return;
    }

    // 计算弹出位置（按钮正上方）
    QPoint pos = ui->pushButton_volume->mapToGlobal(QPoint(ui->pushButton_volume->width() / 2, 0));
    popup->move(pos.x() - popup->width()/2, pos.y() - 1.1*popup->height());

    //popup->move(ui->pushButton_volume->x()- popup->width()/2, ui->pushButton_volume->x()-popup->height());
    popup->show();
}

void playerControlWidget::on_pushButton_play_next_clicked()
{
    emit nextClicked();
    qDebug()<<"nextClicked();";
}


void playerControlWidget::on_pushButton_play_prev_clicked()
{
    emit prevClicked();
    qDebug()<<"prevClicked();";
}


void playerControlWidget::on_pushButton_play_clicked()
{
    if(ui->pushButton_play->isChecked())
    {
        emit startMusic(true);//点击了播放图案,发送播放信号
        qDebug()<<"startMusic(true);";
    }
    else
    {
        emit startMusic(false);
        qDebug()<<"startMusic(false);";

    }
}

void playerControlWidget::SendVolumeRequested(int value)
{
    emit volumeRequested(value);
}

void playerControlWidget::ReceivePlayStateChange(bool isPlay)
{
    if(isPlay)
    {
        ui->pushButton_play->setChecked(true);
    }
    else
    {
        ui->pushButton_play->setChecked(false);
    }
}











/////////////音量条
/////////////音量条
VolumePopup::VolumePopup(QWidget *parent)
    : QWidget(parent)
{
    // -----------------------------
    // 基础设置
    // -----------------------------
    setWindowFlags(Qt::Popup | Qt::FramelessWindowHint);  // 弹出类型，无边框
    setAttribute(Qt::WA_TranslucentBackground);          // 背景透明，使用paintEvent绘制白底圆角
    setFixedSize(70, 200);                               // 整个popup窗口大小

    // -----------------------------
    // 滑条与标签
    // -----------------------------
    slider = new QSlider(Qt::Vertical, this);
    slider->setRange(0, 100);
    slider->setValue(50);
    //slider->setInvertedAppearance(false); // ✅ 最下面是0，最上面是100
    slider->setFixedWidth(20);           // 整个滑条的宽度
    slider->setFixedHeight(140);         // 滑条的高度（你可以修改这个数值改变滑条高度）

    label = new QLabel("50%", this);
    label->setAlignment(Qt::AlignCenter);
    label->setStyleSheet("color: #00CC65; font-weight: bold; font-size: 14px;");

    // 布局
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(15, 15, 15, 15);
    layout->setSpacing(10);
    layout->addWidget(slider, 1, Qt::AlignCenter);
    layout->addWidget(label);

    // 滑条值变化时更新标签和发射信号
    connect(slider, &QSlider::valueChanged, this, [=](int value){
        label->setText(QString::number(value) + "%");
        emit volumeChanged(value);
    });

    // -----------------------------
    // 滑条样式
    // -----------------------------
    initStyle();

    // -----------------------------
    // popup淡入动画
    // -----------------------------
    fadeAnim = new QPropertyAnimation(this, "windowOpacity", this);
    fadeAnim->setDuration(150);

    // 背景圆角设置（整个窗口）
    setStyleSheet(R"(
        background-color:#FFFFFF;  /* 白色背景 */
        border-radius:10px;        /* 窗口圆角 */
    )");
}

void VolumePopup::initStyle()
{
    slider->setFixedWidth(20);   // 滑条整体宽度
    slider->setFixedHeight(140); // 滑条高度
    slider->setInvertedAppearance(false);   // 保持滑块位置从0到100从下到上
    slider->setInvertedControls(false);     // 鼠标操作正常

    slider->setStyleSheet(R"(
    QSlider {
        background: transparent;  /* 背景透明，用paintEvent画 */
    }
    QSlider::groove:vertical {
        background: #FFFFFF;       /* 滑槽白色 */
        border: 1px solid #E0E0E0;
        border-radius: 6px;
        width: 6px;                /* 滑槽宽度 */
        margin: 4px 0;  /* ✅ 顶部和底部各留 8px 空间给滑块 */
    }
    QSlider::handle:vertical {
        background: #00CC65;       /* 滑块颜色 */
        border: none;
        height: 16px;              /* 滑块高度，可改 */
        width: 16px;               /* 滑块宽度，可改 */
        margin: -5px -5px;         /* 滑块超出滑槽的偏移，让它居中 */
        border-radius: 8px;        /* 滑块圆角 */
    }
QSlider::sub-page:vertical {
        /* 当 0 在底部时，sub-page 是底部到滑块的区域 */
        /* 保持滑槽的背景色 (例如白色或透明) */
        background: transparent;
        border-radius: 6px;
    }

    QSlider::add-page:vertical {
        /* add-page 是滑块到最大值 (顶部) 的区域 */
        /* 设置为已填充颜色 */
        background: #00CC65;
        border-radius: 6px;
    }
)");

}






void VolumePopup::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

    // 画白色圆角矩形背景
    p.setBrush(Qt::white);
    p.setPen(Qt::NoPen);
    p.drawRoundedRect(rect(), 4, 4); // 10像素圆角，可修改
}

void VolumePopup::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    fadeAnim->stop();
    fadeAnim->setStartValue(0.0);
    fadeAnim->setEndValue(1.0);
    fadeAnim->start();
}

void VolumePopup::hideEvent(QHideEvent *event)
{
    QWidget::hideEvent(event);
    setWindowOpacity(1.0);
}










