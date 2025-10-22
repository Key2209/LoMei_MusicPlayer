#ifndef MUSICMANAGE_H
#define MUSICMANAGE_H


#include <QWidget>
#include <QVector>
#include <QDir>
#include <QMediaPlayer>
#include <QString>
#include <QAudioOutput>
class MusicManage
{
public:
    MusicManage();
    void addMusicByPath(QStringList pathList);//传入音乐路径搜索并添加到playList
private:
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutPut;
    QVector<QUrl> playList;
};

#endif // MUSICMANAGE_H
