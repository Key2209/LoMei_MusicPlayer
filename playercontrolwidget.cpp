#include "mytoolclass.h"
#include "playercontrolwidget.h"
#include "ui_playercontrolwidget.h"

#include <QFile>
#include <QPainterPath>
#include <QPropertyAnimation>

playerControlWidget::playerControlWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::playerControlWidget)
{
    ui->setupUi(this);

    UI_Init();

}

playerControlWidget::~playerControlWidget()
{
    delete ui;
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
