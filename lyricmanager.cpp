#include "lyricmanager.h"
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include <algorithm>
#include <QTextCodec>

LyricManager::LyricManager(QObject *parent) : QObject(parent) {}

// Load from file
bool LyricManager::loadFromFile(const QString &filePath)
{
    // QFile f(filePath);
    // if (!f.open(QIODevice::ReadOnly | QIODevice::Text)) return false;
    // QString content = QString::fromUtf8(f.readAll());
    // f.close();
    // return loadFromString(content);


    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly))
        return false;

    QByteArray data = file.readAll();

    // 自动检测编码：UTF-8 优先，否则使用 GBK
    QTextCodec *codec = QTextCodec::codecForUtfText(data, QTextCodec::codecForName("GBK"));
    QString text = codec->toUnicode(data);
    file.close();
    return loadFromString(text);

}

// Load from raw LRC text
bool LyricManager::loadFromString(const QString &lrcText)
{
    m_lines.clear();

    // 支持多种小数位写法，例 [01:23.45] 或 [01:23.4]
    QRegularExpression re(R"(\[(\d{1,2}):(\d{2})(?:\.(\d{1,3}))?\](.*))");

    QStringList lines = lrcText.split('\n', Qt::SkipEmptyParts);
    for (QString raw : lines) {
        raw = raw.trimmed();
        QRegularExpressionMatch match = re.match(raw);
        if (match.hasMatch()) {
            int mm = match.captured(1).toInt();
            int ss = match.captured(2).toInt();
            QString msStr = match.captured(3);
            int ms = 0;
            if (!msStr.isEmpty()) {
                // Normalize to milliseconds (if two digits like 45 -> 450ms or 450? here treat '45' as 450)
                if (msStr.length() == 1) ms = msStr.toInt() * 100;
                else if (msStr.length() == 2) ms = msStr.toInt() * 10;
                else ms = msStr.left(3).toInt();
            }
            QString text = match.captured(4).trimmed();
            LRCLine l;
            l.timeMs = (mm * 60 + ss) * 1000 + ms;
            l.text = text;
            m_lines.append(l);
        }
    }

    // sort by time
    std::sort(m_lines.begin(), m_lines.end(), [](const LRCLine &a, const LRCLine &b){
        return a.timeMs < b.timeMs;
    });

    return !m_lines.isEmpty();
}

QStringList LyricManager::allTexts() const
{
    QStringList list;
    for (const auto &l : m_lines) list << l.text;
    return list;
}

int LyricManager::indexForTime(qint64 positionMs) const
{
    if (m_lines.isEmpty()) return -1;
    // binary search for efficiency
    int lo = 0, hi = m_lines.size() - 1, ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (positionMs >= m_lines[mid].timeMs) {
            ans = mid;
            lo = mid + 1;
        } else hi = mid - 1;
    }
    return ans;
}

qint64 LyricManager::timeForIndex(int idx) const
{
    if (idx < 0 || idx >= m_lines.size()) return 0;
    return m_lines[idx].timeMs;
}
