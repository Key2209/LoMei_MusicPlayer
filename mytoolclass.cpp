#include "mytoolclass.h"

#include <QFile>
#include <QPropertyAnimation>

MyToolClass::MyToolClass() {}

void MyToolClass::setQssStyle(QWidget *widget, const QString &path)
{
    QFile *styleFile;
    styleFile  = new QFile(path, widget); //获取资源文件的对象
    styleFile->open(QFile::ReadOnly);//只读模式
    QString styleSheet = QString(styleFile->readAll());//读出的数据转成字符串
    widget->setStyleSheet(styleSheet);
    styleFile->close();//最后关闭这个文件
}

void MyToolClass::addClickAnimation(QWidget* widget,QPushButton *btn)
{

    if (!btn) return;

    // 保证按钮有 icon 且初始 iconSize 已设置
    QSize normalSize = btn->iconSize();
    if (normalSize.isEmpty()) {
        // 若未设置，使用按钮实际大小的 60% 作为默认图标大小
        normalSize = QSize(btn->width() * 0.6, btn->height() * 0.6);
        btn->setIconSize(normalSize);
    }

    // 目标缩小到 90%（可调）
    QSize smallSize(qMax(1, int(normalSize.width() * 0.9)),
                    qMax(1, int(normalSize.height() * 0.9)));

    // 按下：缩小（使用动画）,将传进的widget绑定为上下文，这个连接会随着widget的销毁而销毁
    QObject::connect(btn, &QPushButton::pressed, widget, [btn, normalSize, smallSize]() {
        QPropertyAnimation *a = new QPropertyAnimation(btn, "iconSize");
        a->setDuration(80);
        a->setStartValue(normalSize);
        a->setEndValue(smallSize);
        a->setEasingCurve(QEasingCurve::OutQuad);
        a->start(QAbstractAnimation::DeleteWhenStopped);
    });

    // 释放：恢复并带一点回弹感
    QObject::connect(btn, &QPushButton::released, widget, [btn, normalSize, smallSize]() {
        // 先直接从 small -> normal，带轻微回弹曲线
        QPropertyAnimation *a = new QPropertyAnimation(btn, "iconSize");
        a->setDuration(160);
        a->setStartValue(smallSize);
        a->setEndValue(normalSize);
        a->setEasingCurve(QEasingCurve::OutBack);
        a->start(QAbstractAnimation::DeleteWhenStopped);
    });

    // 如果需要在点击期间鼠标移出仍恢复（可选）
    QObject::connect(btn, &QPushButton::clicked, widget, [btn, normalSize]() {
        // 确保 clicked 后图标为 normalSize（防万一）
        btn->setIconSize(normalSize);
    });


}
