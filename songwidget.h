#ifndef SONGWIDGET_H
#define SONGWIDGET_H

#include <QWidget>

namespace Ui {
class songwidget;
}

class songwidget : public QWidget
{
    Q_OBJECT


signals:
    void widget_hovered(bool ishovered);


public:
    explicit songwidget(QWidget *parent = nullptr);
    ~songwidget();




protected:
    void enterEvent(QEnterEvent  *event) override;
    void leaveEvent(QEvent *event) override;


private:
    Ui::songwidget *ui;
    void updateAppearance();
    bool m_hovered=false;
};

#endif // SONGWIDGET_H
