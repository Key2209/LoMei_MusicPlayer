#ifndef LEFTWIDGET_H
#define LEFTWIDGET_H

#include <PageButton.h>
#include <QButtonGroup>
#include <QWidget>

namespace Ui {
class leftwidget;
}

class leftwidget : public QWidget
{
    Q_OBJECT

signals:
    void switch_playList(PageButton *button);
    void new_playList(PageButton *button);
public:
    explicit leftwidget(QWidget *parent = nullptr);
    ~leftwidget();
    QButtonGroup *buttonGroup;


    QVector<PageButton*> getPlaylists() const { return playlists; }

private slots:
    void on_btnAddPlaylist_clicked();

private:
    Ui::leftwidget *ui;

    bool isCreatingList=false;//判断是否正在创建歌单,避免出现多个lineEdit

    bool eventFilter(QObject *watched,QEvent *event);

    QVector<PageButton*> playlists; //歌单按钮列表


};

#endif // LEFTWIDGET_H
