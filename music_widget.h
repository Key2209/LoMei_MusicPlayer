#ifndef MUSIC_WIDGET_H
#define MUSIC_WIDGET_H

#include <PageButton.h>
#include <QFrame>
#include <QPushButton>
#include <QWidget>

namespace Ui {
class music_widget;
}

class music_widget : public QWidget
{
    Q_OBJECT


signals:
    void exitRequested();//关闭按钮，发出信号关闭程序

public:
    explicit music_widget(QWidget *parent = nullptr);
    ~music_widget();


public slots:
    // void createPlaylist(PageButton *button);
    // void switchPlaylist(PageButton *button);

private slots:
    void on_pushButton_title_play_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_close_clicked();

private:
    Ui::music_widget *ui;
    void setActiveButton(QPushButton *activeBtn);
    void buttonInit();
};

#endif // MUSIC_WIDGET_H
