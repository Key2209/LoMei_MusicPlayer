#ifndef MUSIC_WIDGET_H
#define MUSIC_WIDGET_H

#include <QWidget>

namespace Ui {
class music_widget;
}

class music_widget : public QWidget
{
    Q_OBJECT

public:
    explicit music_widget(QWidget *parent = nullptr);
    ~music_widget();

private:
    Ui::music_widget *ui;
};

#endif // MUSIC_WIDGET_H
