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
    void registerWidget(music_widget *musicWidget);//注册歌单
    void registerPlayerBar(playerControlWidget *bar);//注册底部控制栏

    QMediaPlayer* getMediaPlayer(){return m_player;}

public slots:

    void playSong(const Songstruct &song, const QString &widget_objName,bool isPlay);//接收某个歌单的某首歌

    //接收某个歌单的某首歌,并接收整个歌单作为播放列表
    void setPlaylist(const QVector<Songstruct> &pl,const QString &widget_objName ,int startIndex = 0);
    void access_UiCommandToStartMusic(bool yes);//开始/暂停音乐





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




signals:

    //通知歌单歌曲 播放/暂停
    void currentSongChanged(const Songstruct &song,bool isPlay,const QString &widget_objName);

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
    void startPlayingIndex(int index);
    int findIndexById(const QString &id) const;

    //播放所需的类
    QMediaPlayer *m_player = nullptr;
    QAudioOutput *m_audio = nullptr;


    QVector<Songstruct> m_playlist;//当前歌单
    int m_currentIndex = -1;//播放歌曲的索引
    Songstruct currentSong;//当前播放的歌曲信息
    QString current_music_widget_objName=QString();//当前歌单对应的widget的控件名
    PlayMode m_playMode = Sequential;
    int m_volume = 80;


    QQueue<Songstruct> m_queue;
    QPointer<playerControlWidget> m_playerControlWidget;   // 使用 QPointer 防止悬空指针
};

#endif // MUSICCONTROLLER_H
