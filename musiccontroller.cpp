#include "musiccontroller.h"

#include "music_widget.h"

MusicController::MusicController(QObject *parent)
    : QObject{parent}
{

    m_player = new QMediaPlayer(this);
    m_audio = new QAudioOutput(this);
    m_player->setAudioOutput(m_audio);
    m_audio->setVolume(m_volume / 100.0);


    // 连接媒体信号到 controller 的信号（转发给 UI）
    //媒体信号->MusicController->UI
    connect(m_player, &QMediaPlayer::positionChanged, this, &MusicController::onMediaPositionChanged);
    connect(m_player, &QMediaPlayer::durationChanged, this, &MusicController::onMediaDurationChanged);

    connect(m_player, &QMediaPlayer::playbackStateChanged, this, &MusicController::onMediaStateChanged);
    connect(m_player, &QMediaPlayer::errorOccurred, this, &MusicController::onMediaErrorOccurred);

    connect(m_player,&QMediaPlayer::mediaStatusChanged,this,&MusicController::onMediaPlayerMediaStatusChanged);

}
MusicController::~MusicController()
{
    stop();
}

void MusicController::registerWidget(music_widget *w)
{


    if (!w) return;
    // 当 widget 发起播放请求时，controller.playSong() 被调用
    connect(w, &music_widget::songPlayRequested,
            this, &MusicController::playSong, Qt::AutoConnection);


    // controller 通知 widget 当前歌曲改变，widget 可以根据 song.id 高亮或取消高亮
    //广播,
    connect(this, &MusicController::currentSongChanged,
            w, &music_widget::onCurrentSongChanged, Qt::AutoConnection);



}



void MusicController::setPlayMode(MusicController::PlayMode m) { m_playMode = m; }

void MusicController::isPlay(bool yes)
{
    if(yes)
    {
        m_player->play();
    }
    else
    {
        m_player->stop();
    }
}


void MusicController::setVolume(int volume) {
    m_volume = qBound(0, volume, 100);
    if (m_audio) m_audio->setVolume(m_volume / 100.0);
    emit volumeChanged(m_volume);//通知UI修改音量条
}


void MusicController::setPlaylist(const QVector<Songstruct> &pl,const QString &widget_objName, int startIndex)
{
    m_playlist = pl;
    now_music_widget_objName=widget_objName;
    if (startIndex >= 0 && startIndex < m_playlist.size()) {
        startPlayingIndex(startIndex);
    }
}

void MusicController::access_UiCommandToStartMusic(bool yes)
{
    if(yes)
    {
        play();
    }
    else {
        pause();
    }
}


void MusicController::playSong(const Songstruct &song, const QString &widget_objName,bool isPlay)
{

    qDebug()<<"playSong(const Songstruct &song, const QString &widget_objName,bool isPlay)"<<Qt::endl<<
        widget_objName<<isPlay;

    if(isPlay)
    {
        // 若 song 在当前列表则切换 index，否则把它作为单独播放
        int idx = findIndexById(song.id);
        if (idx >= 0) {//如果该歌曲在播放列表里面,直接跳转到该歌曲
            startPlayingIndex(idx);
        } else {
            //歌曲不在播放列表里面,清空列表
            //临时把 song 设置为当前播放
            m_playlist.clear();
            m_playlist.append(song);
            startPlayingIndex(0,widget_objName);
        }
    }
    else
    {
        pause();
    }

}

void MusicController::addToQueue(const Songstruct &song)
{
    m_queue.enqueue(song);
}

void MusicController::play()
{
    if (m_player->playbackState() == QMediaPlayer::PlayingState) return;
    m_player->play();
}

void MusicController::pause()
{
    if (m_player->playbackState() == QMediaPlayer::PlayingState)
        m_player->pause();
}

void MusicController::stop()
{
    m_player->stop();
}

void MusicController::togglePlayPause()
{

    if (m_player->playbackState() == QMediaPlayer::PlayingState) pause();
    else play();
}


void MusicController::seek(qint64 positionMs)
{
    m_player->setPosition(positionMs);
}




void MusicController::playNext()
{
    qDebug()<<"MusicController::playNext()";
    // if (!m_queue.isEmpty()) {
    //     // Songstruct s = m_queue.dequeue();
    //     // playSong(s);
    //     return;
    // }
    // if (m_playlist.isEmpty()) return;

    switch (m_playMode) {
    case RepeatOne:
        startPlayingIndex(m_currentIndex);
        break;
    case Shuffle: {
        int next = QRandomGenerator::global()->bounded(m_playlist.size());
        startPlayingIndex(next);
        break;
    }
    case RepeatAll:
    case Sequential:
    default: {
        qDebug()<<"m_currentIndex"<<m_currentIndex;
        int nxt = m_currentIndex + 1;
        qDebug()<<"m_currentIndex"<<m_currentIndex;
        if (nxt >= m_playlist.size()) {
            if (m_playMode == RepeatAll) nxt = 0;
            else {
                stop();
                return;
            }
        }

        startPlayingIndex(nxt);
        break;
    }


    }
}




void MusicController::playPrevious()
{
    if (m_playlist.isEmpty()) return;
    int prev = m_currentIndex - 1;
    if (prev < 0) prev = (m_playMode == RepeatAll) ? (m_playlist.size() - 1) : 0;
    startPlayingIndex(prev);
}



void MusicController::startPlayingIndex(int index,const QString &widget_objName)
{
    //if(widget_objName==QString())return;


    if (index < 0 || index >= m_playlist.size()) return;
    m_currentIndex = index;
    const Songstruct &s = m_playlist[m_currentIndex];
    qDebug() << "Controller start play:" << s.title << s.filePath;
    m_player->setSource(QUrl::fromLocalFile(s.filePath));
    m_player->play();
    emit currentSongChanged(s,widget_objName);
}




int MusicController::findIndexById(const QString &id) const
{
    for (int i = 0; i < m_playlist.size(); ++i) {
        if (m_playlist[i].id == id) return i;
    }
    return -1;
}



// slots hooked to QMediaPlayer
void MusicController::onMediaPositionChanged(qint64 pos) { emit positionChanged(pos); }
void MusicController::onMediaDurationChanged(qint64 dur) { emit durationChanged(dur); }
void MusicController::onMediaStateChanged(QMediaPlayer::PlaybackState st) {

    emit playbackStateChanged(st);
    qDebug()<<"emit playbackStateChanged(st) st:"<<st;

    if(st==QMediaPlayer::PausedState)
    {
        emit sendPlayStateChangeTo_PlayerctrlWidge(false);
    }
    else if(st==QMediaPlayer::PlayingState)
    {
        emit sendPlayStateChangeTo_PlayerctrlWidge(true);
    }


}
void MusicController::onMediaErrorOccurred() {
    QString err = m_player->errorString();
    emit errorOccurred(err);
}

//MediaStatus (媒体状态)
void MusicController::onMediaPlayerMediaStatusChanged(QMediaPlayer::MediaStatus state)
{
    if(state==QMediaPlayer::EndOfMedia)//播放解释自动切歌
    {
        playNext();
    }
}
