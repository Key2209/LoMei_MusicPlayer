#ifndef MUSIC_WIDGET_H
#define MUSIC_WIDGET_H

#include "dataStruct.h"
#include "leftwidget.h"
#include "songwidget.h"

#include <PageButton.h>
#include <QFrame>
#include <QPushButton>
#include <QWidget>

namespace Ui {
class music_widget;
}

class music_widget : public QWidget
{
    Q_OBJECT


signals:
    void exitRequested();//关闭按钮，发出信号关闭程序

    void sendPathToAddSong(const QString &path,music_widget *widget);//添加songwidget

    void songPlayRequested(const Songstruct &song, const QString &widget_objName,bool isPlay); // 当某个 songwidget 想播放某首歌时发出

    void songListPlayRequested(const QVector<Songstruct> &songplaylist,const QString &widget_objName,int startIndex);//点击播放歌单中的其中一首歌,会将整个歌单添加到播放列表

    void Play_or_PauseRequested(bool isplay);

    void SendToMainUI_ShowPlaylistPopupRequested(songwidget* swidget);

public:
    explicit music_widget(QWidget *parent = nullptr);
    ~music_widget();


    void setLeftWidget(leftwidget *widget){m_leftwidget=widget;}


    void setPlaylistName(const QString &name);//设置歌单名字
    void setPlaylistIntroduction(const QString &Introduction);//设置歌单简介
    void setPlaylistCover(const QPixmap &pixmap);//设置歌单封面
    QVector<Songstruct> playList;//歌单 歌曲songstruct列表
    QStringList pathList;//歌单 歌曲路径列表
    Songstruct currentPlayingSong;

public slots:
    // void createPlaylist(PageButton *button);
    // void switchPlaylist(PageButton *button);

    void addSong(Songstruct song);//根据歌曲结构体 添加songwidget
    void handleNewPath(const QStringList &path);//根据歌曲路径请求 工具类解析歌曲专辑等
    void onCurrentSongChanged(const Songstruct &song,bool isPlay,const QString &widget_objName=QString());



    void receivedSongPlayRequested(const Songstruct &song,bool isPlay);//收到其中一个songwidget的播放/暂停请求后,转发消息
    void receivedSongListPlayRequested(const Songstruct &song);//收到其中一个songwidget的播放/暂停请求后,转发消息,包括整个歌单

    void setUiPlay_or_Pause(bool isPlay);


    void onShowPlaylistPopupRequested(songwidget* swidget);
private slots:
    void on_pushButton_title_play_clicked();//歌单顶部信息栏各按钮
    void on_pushButton_add_clicked();
    void on_pushButton_close_clicked();



private:
    Ui::music_widget *ui;
    void setActiveButton(QPushButton *activeBtn);//歌单/评论界面
    void buttonInit();

    QButtonGroup *
        buttonGroup = nullptr;
    QTimer *mytimer=nullptr;
    QAbstractButton* lastChecked = nullptr;//上一次点击按钮，用于选中后取消，播放/暂停

    leftwidget* m_leftwidget=nullptr;
};

#endif // MUSIC_WIDGET_H
