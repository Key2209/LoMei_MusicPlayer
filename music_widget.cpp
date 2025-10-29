#include "music_widget.h"
#include "ui_music_widget.h"
#include "addmusicdialog.h"
#include "ui_addmusicdialog.h"

#include <QMessageBox>
#include <QPropertyAnimation>
#include <songwidget.h>
#include <QListWidget>
#include <QButtonGroup>
music_widget::music_widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::music_widget)
{
    ui->setupUi(this);
    buttonInit();

    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//关掉滑条
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //ui->stackedWidget_song_comment->currentWidget();

    buttonGroup=new QButtonGroup(this);
    buttonGroup->setExclusive(true);




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
    if(!(this->objectName()=="pushButton_download"))return;

    addmusicdialog* add=new addmusicdialog(this);

    connect(add,&addmusicdialog::sendPath,this,&music_widget::handleNewPath);

    add->exec();
}


void music_widget::on_pushButton_close_clicked()
{
    // QMessageBox *a=new QMessageBox();
    // a->warning(this,"nihao","nihao");
    emit exitRequested();//发出关闭程序信号
}

void music_widget::addSong(Songstruct song)
{
    if(song.filePath==nullptr||song.title==nullptr)return;


    playList.append(song);

    QListWidgetItem *item=new QListWidgetItem();
    item->setSizeHint(QSize(0,60));
    ui->listWidget->addItem(item);
    songwidget* widget=new songwidget;

    widget->setSongstruct(song);

    widget->setObjectName(song.id);//唯一id用于删除
    widget->setProperty("displayname",song.title);

    widget->setSongName(song.title);


    widget->setSingerName(song.artist);
    widget->setSongDuration(song.duration);
    widget->setCollection(song.album);
    widget->setImage(song.coverPath);

    buttonGroup->addButton(widget->getImagePushButton());
    ui->listWidget->setItemWidget(item,widget);

    //bool success =connect(widget,&songwidget::sendSongPlayRequested,this,&music_widget::receivedSongPlayRequested);

    bool success =connect(widget,&songwidget::sendSongPlayRequested,this,&music_widget::receivedSongListPlayRequested);


    qDebug()<<"bool success =connect(widget,&songwidget::sendSongPlayRequested,this,&music_widget::receivedSongPlayRequested);"
             <<Qt::endl<<"success:"<<success;
    update();



}

void music_widget::handleNewPath(const QStringList &path)
{
    qDebug() << "接收到新路径：" << path;

    for(const QString &list:path)
    {
        qDebug() << "发送路径："<<list;
        emit sendPathToAddSong(list,this);
    }

    pathList=path;


}

void music_widget::onCurrentSongChanged(const Songstruct &song, const QString &widget_objName)
{
    if(widget_objName!=objectName())return;

    songwidget *swidget=findChild<songwidget*>(song.id);

    if (swidget) {
        qDebug() << "找到子控件，ID:" << song.id << ", 类型:" << swidget->metaObject()->className();

        swidget->setPlayChecked(true);//播放

    } else {
        qWarning() << "未找到具有 ID 的子控件:" << song.id;
    }


}

void music_widget::receivedSongPlayRequested(const Songstruct &song,bool isPlay)
{
    currentPlayingSong=song;
    emit songPlayRequested(song,objectName(),isPlay);//收到下层的播放请求,转发消息给上层
    qDebug()<<"emit songPlayRequested 收到下层的播放请求,转发消息给上层";
    qDebug() << "Metadata Done:"<<Qt::endl
             << "ID: " << song.id
             << ", Title: " << song.title
             << ", Artist: " << song.artist
             << ", Album: " << song.album
             << ", Duration: " << song.duration
             << ", Path: " << song.filePath;
}

void music_widget::receivedSongListPlayRequested(const Songstruct &song)
{
    currentPlayingSong=song;

    int index=playList.indexOf(currentPlayingSong);
    qDebug()<<"playList.indexOf(currentPlayingSong)"<<index;
    emit songListPlayRequested(playList,objectName(),index);
    qDebug()<<"emit songPlayListRequested 收到下层的播放请求,转发消息给上层";
    qDebug() << "Metadata Done:"<<Qt::endl
             << "ID: " << song.id
             << ", Title: " << song.title
             << ", Artist: " << song.artist
             << ", Album: " << song.album
             << ", Duration: " << song.duration
             << ", Path: " << song.filePath;
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

    // 信号连接,切换歌单界面和评论界面
    connect(ui->pushButton_title_songName, &QPushButton::clicked, this, [=]() {
        setActiveButton(ui->pushButton_title_songName);
        ui->stackedWidget_song_comment->setCurrentIndex(0);

    });
    connect(ui->pushButton_title_comment, &QPushButton::clicked, this, [=]() {
        setActiveButton(ui->pushButton_title_comment);
        ui->stackedWidget_song_comment->setCurrentIndex(1);
    });

    // 初始选中状态
    setActiveButton(ui->pushButton_title_songName);





    ui->lineEdit_search->setPlaceholderText("  搜索歌单");
}

