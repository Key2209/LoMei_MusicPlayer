#ifndef SONGWIDGET_H
#define SONGWIDGET_H

#include "dataStruct.h"

#include <QPushButton>
#include <QWidget>
#include "pagebutton.h"
namespace Ui {
class songwidget;
}

class songwidget : public QWidget
{
    Q_OBJECT


signals:
    void widget_hovered(bool ishovered);


    void sendSongPlayRequested(Songstruct song,bool isPlay);
    void requestlikeList(songwidget *self,bool like);


    void requestShowPlaylistPopup(songwidget *self);//添加歌曲到某个歌单
public:
    explicit songwidget(QWidget *parent = nullptr);
    ~songwidget();


    void setSongName(const QString &name);
    void setSingerName(const QString &name);
    void setCollection(const QString &name);
    void setSongDuration(const QString &name);
    void setImage(const QString &path);
    void setSongstruct(Songstruct song);//设置该widget对应的音乐信息

    void setLike(bool like);
    bool getLike();

    void setPlayChecked(bool yes);
    PageButton* getImagePushButton();
    Songstruct mysong;

    QPushButton* getAddButton();
    void refreshVisual();
protected:
    void enterEvent(QEnterEvent  *event) override;
    void leaveEvent(QEvent *event) override;


private slots:
    void on_pushButton_add_clicked();

private:
    Ui::songwidget *ui;
    void updateAppearance();
    bool m_hovered=false;

    bool isLike=false;

    bool m_signalBlocked = false;

};

#endif // SONGWIDGET_H
