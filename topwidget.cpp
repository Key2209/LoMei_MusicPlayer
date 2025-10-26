#include "topwidget.h"
#include "ui_topwidget.h"
topWidget::topWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::topWidget)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_StyledBackground, true);//强制QSS绘制,不然会导致背景颜色很奇怪,具体原理还不懂



    ui->lineEdit->setPlaceholderText("  搜索音乐");

}

topWidget::~topWidget()
{
    delete ui;
}

void topWidget::updateMaxIcon(bool isMaximized)
{
    if(isMaximized)
    {

        QString style=R"(
    QPushButton
    {
    border-image: url(:/player/images/player/Maximize3.png);
    qproperty-cursor: pointinghand; /* 鼠标悬停变手掌 */
    border: none; /* 确保没有边框，否则 border-image 可能会受到影响 */
    background-color: transparent; /* 保持透明背景色 */
    }

    QPushButton:hover,
    QPushButton:pressed
    {
    border-image: url(:/player/images/player/Maximize4.png);
    }
            )";

        ui->pushButton_max->setStyleSheet(style);
    }
    else
    {
        QString style=R"(

    QPushButton {
    border-image: url(:/player/images/player/Maximize1.png);
    qproperty-cursor: pointinghand; /* 鼠标悬停变手掌 */
    border: none; /* 确保没有边框，否则 border-image 可能会受到影响 */
    background-color: transparent; /* 保持透明背景色 */
}

QPushButton:hover,
QPushButton:pressed {
border-image: url(:/player/images/player/Maximize2.png);
}
            )";

        ui->pushButton_max->setStyleSheet(style);
    }
}


//窗口信号
void topWidget::on_pushButton_close_clicked()
{
    emit exitRequested();
}
void topWidget::on_pushButton_max_clicked()
{
    emit maxRequested();
}
void topWidget::on_pushButton_min_clicked()
{
    emit minRequested();
}
void topWidget::on_pushButton_ahead_clicked()
{
    emit goAheadRequested();
}
void topWidget::on_pushButton_back_clicked()
{
    emit goBackRequested();
}

