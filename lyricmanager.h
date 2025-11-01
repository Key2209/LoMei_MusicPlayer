#pragma once
#include <QObject>
#include <QVector>
#include <QString>

/*
 LyricManager
  - 解析 LRC（常见格式 [mm:ss.xx]text）
  - 返回按时间排序的行数组
  - 提供按时间查找当前行索引的 API
*/
struct LRCLine {
    qint64 timeMs = 0; // 行开始时间，毫秒
    QString text;
};

class LyricManager : public QObject {
    Q_OBJECT
public:
    explicit LyricManager(QObject *parent = nullptr);

    // 载入 LRC 文件（文件路径），返回是否成功
    bool loadFromFile(const QString &filePath);

    // 载入 LRC 文本（字符串），便于调试/直接内嵌示例
    bool loadFromString(const QString &lrcText);

    // 获取所有行文本（按时间）
    QStringList allTexts() const;

    // 根据播放器位置（毫秒）返回当前行索引（-1 表示无）
    int indexForTime(qint64 positionMs) const;

    // 获取指定行开始时间（毫秒）
    qint64 timeForIndex(int idx) const;

    // 总行数
    int lineCount() const { return m_lines.size(); }

private:
    QVector<LRCLine> m_lines;
};
