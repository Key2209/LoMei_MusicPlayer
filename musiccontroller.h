#ifndef MUSICCONTROLLER_H
#define MUSICCONTROLLER_H
#include <QObject>
#include <QVector>
#include <QQueue>
#include <QRandomGenerator>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QPointer>
#include "dataStruct.h"



class music_widget; // 前向声明
class playerControlWidget;    // 前向声明



class MusicController : public QObject
{
    Q_OBJECT
public:
    explicit MusicController(QObject *parent = nullptr);
    ~MusicController() override;

    enum PlayMode { Sequential, RepeatOne, RepeatAll, Shuffle };
    Q_ENUM(PlayMode)

    // 注册接口（把 UI 注册到 controller）
    void registerWidget(music_widget *w);
    void registerPlayerBar(playerControlWidget *bar);
public slots:

    void playSong(const Songstruct &song, const QString &widget_objName,bool isPlay);//接收某个歌单的某首歌
    void setPlaylist(const QVector<Songstruct> &pl,const QString &widget_objName ,int startIndex = 0);//接收某个歌单的某首歌,并接收整个歌单作为播放列表

    void access_UiCommandToStartMusic(bool yes);


    void addToQueue(const Songstruct &song);
    void play();
    void pause();
    void stop();
    void togglePlayPause();
    void playNext();
    void playPrevious();
    void seek(qint64 positionMs);
    void setVolume(int volume); // 0-100
    void setPlayMode(PlayMode m);

    void isPlay(bool yes);


signals:

    void currentSongChanged(const Songstruct &song,const QString &widget_objName);
    void playbackStateChanged(QMediaPlayer::PlaybackState state);
    void positionChanged(qint64 position);
    void durationChanged(qint64 duration);
    void volumeChanged(int volume);
    void errorOccurred(const QString &err);
    void sendPlayStateChangeTo_PlayerctrlWidge(bool isPlay);


private slots:
    void onMediaPositionChanged(qint64 pos);
    void onMediaDurationChanged(qint64 dur);

    void onMediaErrorOccurred();
    void onMediaStateChanged(QMediaPlayer::PlaybackState st);//播放状态改变
    void onMediaPlayerMediaStatusChanged(QMediaPlayer::MediaStatus state);//媒体状态改变

private:
    void startPlayingIndex(int index,const QString &widget_objName = QString());
    int findIndexById(const QString &id) const;

    //播放所需的类
    QMediaPlayer *m_player = nullptr;
    QAudioOutput *m_audio = nullptr;

    //bool isPlay_UI=false;//ui中是否播放，用于判断自动切歌，弃用

    QVector<Songstruct> m_playlist;//当前歌单
    int m_currentIndex = -1;//播放歌曲的索引

    QQueue<Songstruct> m_queue;
    PlayMode m_playMode = Sequential;
    int m_volume = 80;

    QString now_music_widget_objName=QString();//当前歌单对应的widget的控件名

    QPointer<playerControlWidget> m_playerControlWidget;   // 使用 QPointer 防止悬空指针
};

#endif // MUSICCONTROLLER_H
