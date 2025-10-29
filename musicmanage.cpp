#include "musicmanage.h"

#include <QFileDialog>
#include <QDialog>
#include <QDebug>
#include <QMetaObject>
#include <QDirIterator>      // 用于递归遍历目录
#include <QFileInfo>         // 用于获取文件信息（如文件名、路径、后缀）
#include <QDir>              // 用于目录操作
#include <QUuid>             // 用于生成唯一的 ID (UUID)
#include <QtConcurrent> // 用于在后台线程执行耗时操作 (异步扫描)
#include <QRegularExpression>

MusicManage::MusicManage(QObject *parent)
    : QObject(parent)
{
    // 启动 MetadataWorker 线程
    m_worker = new MetadataWorker;
    m_workerThread = new QThread(this);

    m_worker->moveToThread(m_workerThread);//将"MetadataWorker"移动到线程
    connect(m_workerThread, &QThread::finished, m_worker, &QObject::deleteLater);//线程结束删除m_worker

    //绑定主线程请求 -> worker 处理
    /*MusicManage类的扫描歌曲方法scanDirectoryAsync扫描完成后会
     * emit requestMetadata(s);
     * 请求"m_worker = new MetadataWorker;"的槽processSong解析s的信息
    */
    connect(this, &MusicManage::requestMetadata,
            m_worker, &MetadataWorker::processSong, Qt::QueuedConnection);




    // worker 完成 -> 主线程接收
    /*"m_worker = new MetadataWorker;"的槽processSong完成解析后
     * 发出信号metadataReady,通知this发出metadataReady信号(主线程接收)
     *
    */
    connect(m_worker, &MetadataWorker::metadataReady,
            this, &MusicManage::metadataReady, Qt::QueuedConnection);

    //启动线程
    m_workerThread->start();
}

MusicManage::~MusicManage()
{
    if (m_workerThread) {
        m_workerThread->quit();
        m_workerThread->wait();
    }
}



QVector<Songstruct> MusicManage::scanDirectory(const QString &path,music_widget *widget)
{
    emit scanStarted(path);

    QVector<Songstruct> result;


    QDirIterator it(path,m_audioExtensions,QDir::Files,QDirIterator::Subdirectories);
    int scanned = 0;
    while (it.hasNext()) {
        QString file = it.next();
        ++scanned;

        QFileInfo fi(file);
        Songstruct s;
        s.id = QUuid::createUuid().toString(QUuid::WithoutBraces);// 生成一个唯一的 ID，并移除大括号 (QUuid::WithoutBraces)
        s.filePath = file;

        // 默认 title 使用文件名（后续可用 metaData 覆盖）
        s.title = fi.completeBaseName();

        // 尝试查找歌词与封面（同目录或同名）
        s.lyricPath = findLyricForFile(file);
        s.coverPath = findCoverForFile(file);

        // 若需要，可读取 metadata（异步或延迟）
        // 这里不阻塞读取媒体头，留给播放器去读取或另开线程

        result.append(s);
        emit songFound(s);
        emit scanProgress(scanned, result.size());
    }
    emit scanFinished(result);
    return result;
}

void MusicManage::scanDirectoryAsync(const QString &path,music_widget *widget)
{
    qDebug()<<"成功转发"<<path;


    // 在后台线程运行 scanDirectory 并在完成后发出 finish（QtConcurrent）
    (void)QtConcurrent::run([this, path,widget]() {
        QVector<Songstruct> songs = scanDirectory(path,widget);

        // scanDirectory 已经发出 scanFinished；如果你想只在主线程处理结果，可 use invokeMethod
        QMetaObject::invokeMethod(this, [this, songs,widget]() {
            // 已经在 scanDirectory 中发出过 scanFinished，但如果需要在主线程确保 UI 更新，这里也可以发出
            emit scanFinished(songs);

            // 扫描完后，对每首歌发起异步 metadata 请求
            for (const Songstruct &s : songs) {
                emit requestMetadata(s,widget);
            }
        }, Qt::QueuedConnection);
    });
}



QString MusicManage::findLyricForFile(const QString &audioPath)
{
    QFileInfo fi(audioPath);//audioPath:一个文件的路径,获取文件信息
    QString base = fi.completeBaseName();// 获取不带后缀的主文件名
    QDir dir = fi.dir();// 获取音频文件所在的目录

    // 1. 同名 lrc / txt
    QStringList candidates = { base + ".lrc", base + ".txt" };
    for (const QString &c : candidates) {
        QString p = dir.filePath(c);//路径+文件名=dir+c
        if (QFile::exists(p)) return p;
    }

    // 2. 目录里通用歌词名（例如 lyrics.lrc, song.lrc）
    // QStringList dirCandidates = { "lyrics.lrc", "lyrics.txt", "song.lrc" };
    // for (const QString &c : dirCandidates) {
    //     QString p = dir.filePath(c);
    //     if (QFile::exists(p)) return p;
    // }

    return QString(); // 未找到
}

QString MusicManage::findCoverForFile(const QString &audioPath)
{
    QFileInfo fi(audioPath);
    QDir dir = fi.dir();
    QString base = fi.completeBaseName();

    // 1. 同名图片
    QStringList imageExt = { ".jpg", ".png", ".jpeg" };
    for (const QString &ext : imageExt) {
        QString p = dir.filePath(base + ext);
        if (QFile::exists(p)) return p;
    }

    // 2. 目录内常见的封面文件名
    // QStringList common = { "cover.jpg", "cover.png", "folder.jpg", "folder.png", "front.jpg", "album.jpg" };
    // for (const QString &c : common) {
    //     QString p = dir.filePath(c);
    //     if (QFile::exists(p)) return p;
    // }

    // 3. 没有则返回空（UI 可使用默认封面）
    return QString();
}


