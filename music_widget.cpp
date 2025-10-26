#include "music_widget.h"
#include "ui_music_widget.h"
#include "addmusicdialog.h"
#include "ui_addmusicdialog.h"

#include <QMessageBox>
#include <QPropertyAnimation>
#include <songwidget.h>
#include <QListWidget>
music_widget::music_widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::music_widget)
{
    ui->setupUi(this);
    buttonInit();

    //ui->stackedWidget_song_comment->currentWidget();

    QListWidgetItem *item=new QListWidgetItem();
    item->setSizeHint(QSize(0,60));
    ui->listWidget->addItem(item);


    songwidget* widget=new songwidget;

    ui->listWidget->setItemWidget(item,widget);
}

music_widget::~music_widget()
{
    delete ui;
}

void music_widget::setPlaylistName(const QString &name)
{
    QFont font;
    font.setFamily("Microsoft YaHei"); // 设置字体族
    font.setPointSize(16);             // 设置字号
    font.setBold(true);                // 加粗
    font.setItalic(false);             // 斜体
    ui->label_Playlist->setFont(font);


    ui->label_Playlist->setText(name);



}

void music_widget::setPlaylistIntroduction(const QString &Introduction)
{
    ui->label_Introduction->setText(Introduction);
}

void music_widget::setPlaylistCover(const QPixmap &pixmap)
{
    ui->label_songImage->setPixmap(pixmap);
}





void music_widget::on_pushButton_title_play_clicked()
{

}


void music_widget::on_pushButton_add_clicked()
{
    qDebug()<<"add!";
    addmusicdialog* add=new addmusicdialog(this);
    add->exec();
}


void music_widget::on_pushButton_close_clicked()
{
    // QMessageBox *a=new QMessageBox();
    // a->warning(this,"nihao","nihao");
    emit exitRequested();//发出关闭程序信号
}

void music_widget::setActiveButton(QPushButton *activeBtn)
{
    QList<QPushButton*> btns = { ui->pushButton_title_songName, ui->pushButton_title_comment };

    for (auto btn : btns)
    {
        if (btn == activeBtn)
        {
            btn->setStyleSheet(
                "QPushButton {"
                " color: rgb(0,180,90);"
                " font-weight: bold;"
                " border: none;"

                " background: transparent;"
                " font-size: 16px;"

                "}"
                "QPushButton:hover {"
                "color:#00CC65;"
                    "}"
                );
        }
        else
        {
            btn->setStyleSheet(
                "QPushButton {"
                " color: black;"
                " font-weight: normal;"
                " border: none;"

                " background: transparent;"
                " font-size: 16px;"

                "}"
                "QPushButton:hover {"
                "color:#00CC65;"
                "}"
                );
        }
    }

}

void music_widget::buttonInit()
{
    QString normalStyle = R"(

QPushButton {
            border: none;
            color:black;
            background-color: transparent;
            font-size: 16px;

        }
    QPushButton:hover {
    color:#00CC65;
        }

)";

    ui->pushButton_title_comment->setStyleSheet(normalStyle);
    ui->pushButton_title_songName->setStyleSheet(normalStyle);

    // 信号连接
    connect(ui->pushButton_title_songName, &QPushButton::clicked, this, [=]() { setActiveButton(ui->pushButton_title_songName);
        ui->stackedWidget_song_comment->setCurrentIndex(0);

    });
    connect(ui->pushButton_title_comment, &QPushButton::clicked, this, [=]() { setActiveButton(ui->pushButton_title_comment);
        ui->stackedWidget_song_comment->setCurrentIndex(1);
    });

    // 初始选中状态
    setActiveButton(ui->pushButton_title_songName);





    ui->lineEdit_search->setPlaceholderText("  搜索歌单");
}

