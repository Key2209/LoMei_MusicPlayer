#ifndef PLAYERCONTROLWIDGET_H
#define PLAYERCONTROLWIDGET_H

#include <QWidget>

namespace Ui {
class playerControlWidget;
}

class playerControlWidget : public QWidget
{
    Q_OBJECT

public:
    explicit playerControlWidget(QWidget *parent = nullptr);
    ~playerControlWidget();

private:
    Ui::playerControlWidget *ui;
    void UI_Init();
};

#endif // PLAYERCONTROLWIDGET_H
