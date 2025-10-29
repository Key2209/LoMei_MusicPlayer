#ifndef SONGWIDGET_H
#define SONGWIDGET_H

#include "dataStruct.h"

#include <QPushButton>
#include <QWidget>

namespace Ui {
class songwidget;
}

class songwidget : public QWidget
{
    Q_OBJECT


signals:
    void widget_hovered(bool ishovered);


    void sendSongPlayRequested(Songstruct song,bool isPlay);
public:
    explicit songwidget(QWidget *parent = nullptr);
    ~songwidget();


    void setSongName(const QString &name);
    void setSingerName(const QString &name);
    void setCollection(const QString &name);
    void setSongDuration(const QString &name);
    void setImage(const QString &path);
    void setSongstruct(Songstruct song);//设置该widget对应的音乐信息



    void setPlayChecked(bool yes);
    QPushButton* getImagePushButton();

protected:
    void enterEvent(QEnterEvent  *event) override;
    void leaveEvent(QEvent *event) override;


private:
    Ui::songwidget *ui;
    void updateAppearance();
    bool m_hovered=false;
    Songstruct mysong;
};

#endif // SONGWIDGET_H
