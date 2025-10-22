#ifndef MYSLIDER_H
#define MYSLIDER_H

#include <QSlider>
#include <QMouseEvent>
#include <QStyle>
#include <QStyleOptionSlider>
#include <QPainter>





class mySlider : public QSlider
{

    Q_OBJECT
public:
    mySlider(QWidget *parent);
    void paintEvent(QPaintEvent *event) override;    // override重写绘制事件
    void mousePressEvent(QMouseEvent *event) override; // 重写鼠标点击事件

};

#endif // MYSLIDER_H
