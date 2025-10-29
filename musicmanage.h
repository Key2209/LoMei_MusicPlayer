#ifndef MUSICMANAGE_H
#define MUSICMANAGE_H


#include <QWidget>
#include <QVector>
#include <QDir>
#include <QMediaPlayer>
#include <QString>
#include <QAudioOutput>
#include <songwidget.h>
#include "dataStruct.h"
#include "metadataworker.h"
#include "music_widget.h"
/*
主要有两个功能:
1.通过地址搜索歌曲,得到路径string,并且获取歌曲信息:歌手,专辑等
2.传入播放列表,控制音乐播放暂停等
*/





class MusicManage: public QObject
{
    Q_OBJECT
public:
    explicit MusicManage(QObject *parent = nullptr);
    ~MusicManage();
    void addMusicByPath(const QStringList &pathList);//传入音乐路径搜索并添加到playList

    QVector<Songstruct> scanDirectory(const QString &path,music_widget *widget);//扫描歌曲,并返回歌曲列表


    void scanDirectoryAsync(const QString &path,music_widget *widget);



signals:
    void scanStarted(const QString &path);
    void scanProgress(int scanned, int totalFoundSoFar);
    void songFound(const Songstruct &song);   // 每发现一首歌即可发出（UI 可即时添加）
    void scanFinished(const QVector<Songstruct> &allSongs);


    void requestMetadata(const Songstruct &song,music_widget *widget);  // 新增：发给 worker
    void metadataReady(const Songstruct &song,music_widget *widget);    // 新增：worker 返回结果
private:
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutPut;
    QVector<QUrl> playList;

    MetadataWorker *m_worker = nullptr;
    QThread *m_workerThread = nullptr;


    // 辅助函数
    QString findLyricForFile(const QString &audioPath);
    QString findCoverForFile(const QString &audioPath);
    QVector<QString> m_audioExtensions= { "*.mp3", "*.flac", "*.wav", "*.m4a", "*.aac", "*.ogg" };


};

#endif // MUSICMANAGE_H
