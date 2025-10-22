#ifndef MYTOOLCLASS_H
#define MYTOOLCLASS_H



#include <QPushButton>
#include <QString>
#include <QWidget>
#include <QPushButton>
#include <QPropertyAnimation>
#include <QSize>
#include <QWidget>
#include <QObject>      // ⬅️ 必须要有这个
#include <QEasingCurve> // 动画缓动函数
#include <algorithm>    // 为了用 qMax


class MyToolClass
{
public:
    MyToolClass();

    // 静态成员函数 无需实例化即可使用

    //通过qss文件设置样式
    static void setQssStyle(QWidget *widget,const QString &path);
    static void addClickAnimation(QWidget* widget,QPushButton *btn);

};






#endif // MYTOOLCLASS_H
