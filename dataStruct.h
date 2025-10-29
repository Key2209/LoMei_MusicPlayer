#ifndef DATASTRUCT_H
#define DATASTRUCT_H


#include <QWidget>
#include <QString>
typedef struct Songstruct
{
    QString id;           // 唯一 id（例如 UUID）
    QString filePath;     // 音频文件完整路径
    QString title;        // 显示名（优先 metadata, 没有则用文件名）
    QString artist;       // 歌手（如果能读取）
    QString album;        // 专辑
    QString duration;   // "MM:SS" 格式
    QString lyricPath;    // 对应的歌词文件路径 (.lrc, .txt)
    QString coverPath;    // 本地封面图片路径（jpg/png）
    QPixmap coverThumb;   // 可选：缓存缩略图
}Songstruct;
//这样 Songstruct 才能通过信号槽（跨线程）以 queued connection 传递
Q_DECLARE_METATYPE(Songstruct)

inline bool operator==(const Songstruct& lhs, const Songstruct& rhs)
{
    // 如果 id 是唯一的，只比较 id 即可。
    return lhs.id == rhs.id;

    // 如果 id 不唯一或不确定，可以比较文件路径（但要确保路径是规范化的）
    // return lhs.filePath == rhs.filePath;
}

#endif // DATASTRUCT_H
