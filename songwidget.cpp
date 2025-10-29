#include "songwidget.h"
#include "ui_songwidget.h"

#include <QGraphicsOpacityEffect>

songwidget::songwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::songwidget)
{
    ui->setupUi(this);
    ui->pushButton_image->setType(2);
    ui->pushButton_image->setIcons(QPixmap(":/player/images/player/play_button_white.png"),
                                   QPixmap(":/player/images/player/play_button_green.png"),
                                   QPixmap(":/player/images/player/play_button_green.png")
                                   );
    ui->pushButton_like->setType(3);
    ui->pushButton_like->setIcons(QPixmap(":/player/images/player/like.png"),
                                   QPixmap(":/player/images/player/like1.png"),
                                   QPixmap(":/player/images/player/likelike.png")
                                   );
    updateAppearance();

    // 连接到 toggled 信号。当按钮的选中状态发生变化时，lambda 就会被执行。
    connect(ui->pushButton_image, &QPushButton::toggled, this, [=](bool checked)
            {
                if (checked) {
                    // 按钮被选中/按下（播放）
                    qDebug() << "播放按钮被按下 (Checked)";
                    emit sendSongPlayRequested(mysong,true);
                } else {
                    // 按钮被取消选中（暂停）
                    qDebug() << "播放按钮被释放 (Unchecked)";
                    emit sendSongPlayRequested(mysong,false);
                }
            });


}

songwidget::~songwidget()
{
    delete ui;
}


void songwidget::setSongName(const QString &name)
{
    if(name==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(12);             // 设置字号
    font.setBold(true);                // 加粗
    //font.setItalic(false);             // 斜体
    ui->song->setFont(font);
    ui->song->setText(name);
}
void songwidget::setSingerName(const QString &name)
{
    if(name==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(9);             // 设置字号
    //font.setBold(true);                // 加粗
    font.setItalic(false);             // 斜体
    ui->singer->setFont(font);
    ui->singer->setText(name);
}
void songwidget::setCollection(const QString &name)
{
    if(name==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(9);             // 设置字号
    //font.setBold(true);                // 加粗
    font.setItalic(false);             // 斜体
    ui->label_collection->setFont(font);
    ui->label_collection->setText(name);
}
void songwidget::setSongDuration(const QString &name)
{
    if(name==nullptr)return;
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(9);             // 设置字号
    //font.setBold(true);                // 加粗
    font.setItalic(false);             // 斜体
    ui->label_duration->setFont(font);
    ui->label_duration->setText(name);
}

void songwidget::setImage(const QString &path)
{
    if(path==nullptr)return;
    QPixmap pix;
    bool success=pix.load(path);

    if(success)//没有图片用默认
    {
        ui->label_image->setScaledContents(true);
        ui->label_image->setPixmap(pix);
    }

}

void songwidget::setSongstruct(Songstruct song)
{
    mysong=song;
}

void songwidget::getLike()
{

}

void songwidget::setPlayChecked(bool yes)
{
    if(yes)
    {
        ui->pushButton_image->setChecked(true);
    }
    else
    {
        ui->pushButton_image->setChecked(false);
    }
}

QPushButton* songwidget::getImagePushButton()
{
    return ui->pushButton_image;
}

void songwidget::enterEvent(QEnterEvent *event)
{
    m_hovered=true;
    updateAppearance();
    QWidget::enterEvent(event);
}

void songwidget::leaveEvent(QEvent *event)
{
    m_hovered=false;
    updateAppearance();
    QWidget::leaveEvent(event);
}

void songwidget::updateAppearance()
{

    if(ui->pushButton_image->getChecked())//歌曲正在播放
    {

        setStyleSheet(R"(
        background-color:#DEDEDE;
        border:none;
        )");
        ui->pushButton_image->setIcon(QIcon());//去掉停止图标



        return;
    }

    if(m_hovered)
    {
        //鼠标触碰到 显示播放/暂停图标
        ui->pushButton_image->opacityEffect->setOpacity(0.9); // 透明度 0~1
        ui->pushButton_image->setGraphicsEffect(ui->pushButton_image->opacityEffect);
        setStyleSheet(R"(
        background-color:#EFEFEF;
        border:none;
)");

    }
    else
    {
        ui->pushButton_image->opacityEffect->setOpacity(0); // 透明度 0~1
        ui->pushButton_image->setGraphicsEffect(ui->pushButton_image->opacityEffect);
        setStyleSheet(R"(
        background-color:#F6F6F6;
        border:none;
)");


    }
}
