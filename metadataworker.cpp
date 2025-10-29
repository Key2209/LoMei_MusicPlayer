#include "metadataworker.h"
#include <QMediaPlayer>
#include <QMediaMetaData>
#include <QEventLoop>
#include <QTimer>
#include <QImage>
#include <QPixmap>
#include <QDebug>
#include <QUrl>
#include <QPixmap>


MetadataWorker::MetadataWorker(QObject *parent)
    : QObject{parent}
{

}

//一首一首处理,完成后发回主线程
void MetadataWorker::processSong(const Songstruct &songIn,music_widget *widget)
{
    // 本地可修改副本
    Songstruct s = songIn;

    // 在 worker 线程中创建本地 QMediaPlayer 对象
    // 注意: QMediaPlayer 在 worker 线程中运行可能仍依赖主线程的 event loop
    // 更好的做法是使用 QMediaMetaDataReader/TagLib等纯文件I/O库，避免 QMediaPlayer
    // 但如果必须使用 QMediaPlayer，则继续当前逻辑。
    QMediaPlayer player;
    player.setSource(QUrl::fromLocalFile(s.filePath));

    // ===================================================
    // 使用 QEventLoop 阻塞等待元数据
    // ===================================================

    QEventLoop loop;
    QTimer timeoutTimer;
    timeoutTimer.setSingleShot(true);
    const int TIMEOUT_MS = 3000; // 增加超时时间，确保有足够时间加载
    timeoutTimer.start(TIMEOUT_MS);

    // 用于标记是否成功获取到元数据和时长
    bool metadata_fetched = false;

    // 1. 媒体状态变化处理 (用于获取元数据)
    QObject::connect(&player, &QMediaPlayer::mediaStatusChanged, &loop, [&](QMediaPlayer::MediaStatus status){
        if (status == QMediaPlayer::LoadedMedia || status == QMediaPlayer::BufferedMedia) {

            // 确保只执行一次元数据读取
            if (!metadata_fetched) {
                // 获取 metaData
                QMediaMetaData md = player.metaData();

                if (!md.isEmpty()) {
                    // Title
                    QVariant vTitle = md.value(QMediaMetaData::Title);
                    if (vTitle.isValid() && !vTitle.toString().isEmpty())
                        s.title = vTitle.toString();

                    // Artist (可能是 QString 或 QStringList)
                    QVariant vArtist = md.value(QMediaMetaData::ContributingArtist);
                    if (vArtist.isValid()) {
                        // 【修正弃用警告：使用 typeId() 和 QMetaType::QStringList】
                        if (vArtist.typeId() == QMetaType::QStringList)
                            s.artist = vArtist.toStringList().join(", ");
                        else
                            s.artist = vArtist.toString();
                    }

                    // Album
                    QVariant vAlbum = md.value(QMediaMetaData::AlbumTitle);
                    if (vAlbum.isValid()) s.album = vAlbum.toString();

                    // Cover (逻辑不变，但注意 QPixmap/QImage的线程安全性)
                    QVariant vCover = md.value(QMediaMetaData::CoverArtImage);
                    if (vCover.isValid()) {
                        // 由于 QMediaPlayer 可能会返回 QImage 或 QByteArray
                        if (vCover.canConvert<QImage>()) {
                            QImage img = vCover.value<QImage>();
                            if (!img.isNull())
                                s.coverThumb = QPixmap::fromImage(img).scaled(64,64, Qt::KeepAspectRatio, Qt::SmoothTransformation);
                        } else if (vCover.canConvert<QByteArray>()) {
                            QByteArray arr = vCover.toByteArray();
                            QImage img;
                            img.loadFromData(arr);
                            if (!img.isNull())
                                s.coverThumb = QPixmap::fromImage(img).scaled(64,64, Qt::KeepAspectRatio, Qt::SmoothTransformation);
                        }
                    }
                }

                metadata_fetched = true;

                // 由于 durationChanged 可能在 mediaStatusChanged 之后触发，
                // 我们在另一个 connect 中处理 duration，这里只读取元数据。
            }

            // 如果 duration 已经可用 (即 durationChanged 已经触发过)，则退出
            if (player.duration() > 0) {
                loop.quit();
            }
        }
    });

    // 2. 时长变化处理 (确保获取到正确的时长)
    QObject::connect(&player, &QMediaPlayer::durationChanged, &loop, [&](qint64 dur){
        if (dur > 0) {
            // duration（毫秒 -> MM:SS）
            int totalSec = int(dur / 1000);
            int mm = totalSec / 60;
            int ss = totalSec % 60;
            s.duration = QString("%1:%2").arg(mm, 2, 10, QLatin1Char('0'))
                             .arg(ss, 2, 10, QLatin1Char('0'));

            // 如果元数据也获取了，就可以退出了
            if (metadata_fetched) {
                loop.quit();
            }
        }
    });


    // 3. 超时保护：到时退出 loop
    QObject::connect(&timeoutTimer, &QTimer::timeout, &loop, &QEventLoop::quit);

    // 触发加载
    // 某些 Qt 后端在调用 play() 之前不会开始元数据解析。
    // 由于此 worker 不在主线程，player.play() 可能会依赖此 QEventLoop 运行。
    player.play();

    // 等待 Loaded/durationChanged 或 timeout
    // 阻塞 worker 线程直到获取到数据或超时
    loop.exec();

    // 停止播放（如果开始了）
    player.stop();

    // 打印调试信息
    qDebug() << "Metadata Done:"
             << "ID: " << s.id
             << ", Title: " << s.title
             << ", Artist: " << s.artist
             << ", Album: " << s.album
             << ", Duration: " << s.duration
             << ", Path: " << s.filePath;


    // 发回主线程
    emit metadataReady(s,widget);

}


// void MetadataWorker::processSong(const Songstruct &songIn)
// {
//     // 本地可修改副本
//     Songstruct s = songIn;

//     // 在 worker 线程中创建本地 QMediaPlayer 对象
//     QMediaPlayer player;
//     player.setSource(QUrl::fromLocalFile(s.filePath));

//     // 等待事件循环（Loaded 或 timeout）
//     QEventLoop loop;
//     QTimer timeoutTimer;
//     timeoutTimer.setSingleShot(true);
//     timeoutTimer.start(2000); // 最多等 2000ms

//     // 当媒体状态变为 LoadedMedia / BufferedMedia，尝试读取 metadata/duration
//     QObject::connect(&player, &QMediaPlayer::mediaStatusChanged, &loop, [&](QMediaPlayer::MediaStatus status){
//         if (status == QMediaPlayer::LoadedMedia || status == QMediaPlayer::BufferedMedia) {
//             // 获取 metaData（Qt6 返回 QMediaMetaData）
//             QMediaMetaData md = player.metaData();

//             //使用 isEmpty() 来判断是否为空
//             if (!md.isEmpty()) {
//                 // Title
//                 QVariant vTitle = md.value(QMediaMetaData::Title);
//                 if (vTitle.isValid()) s.title = vTitle.toString();

//                 // Artist (可能是 QString 或 QStringList)
//                 QVariant vArtist = md.value(QMediaMetaData::ContributingArtist);
//                 if (vArtist.isValid()) {
//                     if (vArtist.type() == QVariant::StringList)
//                         s.artist = vArtist.toStringList().join(", ");
//                     else
//                         s.artist = vArtist.toString();
//                 }

//                 // Album
//                 QVariant vAlbum = md.value(QMediaMetaData::AlbumTitle);
//                 if (vAlbum.isValid()) s.album = vAlbum.toString();

//                 // Cover: CoverArtImage 可能是 QImage/QPixmap/QByteArray
//                 QVariant vCover = md.value(QMediaMetaData::CoverArtImage);
//                 if (vCover.isValid()) {
//                     if (vCover.canConvert<QImage>()) {
//                         QImage img = vCover.value<QImage>();
//                         if (!img.isNull())
//                             s.coverThumb = QPixmap::fromImage(img).scaled(64,64, Qt::KeepAspectRatio, Qt::SmoothTransformation);
//                     } else if (vCover.canConvert<QPixmap>()) {
//                         QPixmap px = vCover.value<QPixmap>();
//                         if (!px.isNull())
//                             s.coverThumb = px.scaled(64,64, Qt::KeepAspectRatio, Qt::SmoothTransformation);
//                     } else if (vCover.canConvert<QByteArray>()) {
//                         QByteArray arr = vCover.toByteArray();
//                         QImage img;
//                         img.loadFromData(arr);
//                         if (!img.isNull())
//                             s.coverThumb = QPixmap::fromImage(img).scaled(64,64, Qt::KeepAspectRatio, Qt::SmoothTransformation);
//                     }
//                 }
//             }

//             // duration（毫秒 -> MM:SS）
//             qint64 dur = player.duration();
//             if (dur > 0) {
//                 int totalSec = int(dur / 1000);
//                 int mm = totalSec / 60;
//                 int ss = totalSec % 60;
//                 s.duration = QString("%1:%2").arg(mm, 2, 10, QLatin1Char('0'))
//                                  .arg(ss, 2, 10, QLatin1Char('0'));
//             }

//             loop.quit();
//         }
//     });

//     // 超时保护：到时退出 loop
//     QObject::connect(&timeoutTimer, &QTimer::timeout, &loop, &QEventLoop::quit);

//     // 触发加载（某些后端需要 play 才解析元数据）
//     player.play();

//     // 等待 Loaded 或 timeout
//     loop.exec();

//     // 停止播放（如果开始了）
//     player.stop();
//     qDebug() << "Song("
//           << "ID: " << s.id
//           << ", Title: " << s.title
//           << ", Path: " << s.filePath
//           << ", LyricPath: " << s.lyricPath
//           << ", CoverPath: " << s.coverPath
//           << ")";
//     // 发回主线程
//     emit metadataReady(s);

// }
