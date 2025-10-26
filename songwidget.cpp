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

    // ui->pushButton_more->setType(3);
    // ui->pushButton_like->setIcons(QPixmap(":/player/images/player/more1.png"),
    //                               QPixmap(":/player/images/player/more1.png"),
    //                               QPixmap(":/player/images/player/more1.png")
    //                               );


    updateAppearance();
}

songwidget::~songwidget()
{
    delete ui;
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
