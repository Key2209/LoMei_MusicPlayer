#pragma once
#include <QFrame>
#include <QListWidget>
#include <QVBoxLayout>
#include <QGraphicsDropShadowEffect>

class PlaylistPopup : public QFrame
{
    Q_OBJECT
public:
    explicit PlaylistPopup(QWidget *parent = nullptr);

    // 设置显示的歌单名称列表
    void setPlaylists(const QStringList &names);

signals:
    void playlistSelected(const QString &name); // 用户选择的歌单名

private:
    QListWidget *listWidget;
};
