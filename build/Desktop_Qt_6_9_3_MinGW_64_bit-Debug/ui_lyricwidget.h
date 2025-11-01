/********************************************************************************
** Form generated from reading UI file 'lyricwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRICWIDGET_H
#define UI_LYRICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LyricWidget
{
public:
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *LyricWidget)
    {
        if (LyricWidget->objectName().isEmpty())
            LyricWidget->setObjectName("LyricWidget");
        LyricWidget->resize(755, 484);
        LyricWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(LyricWidget);
        gridLayout_2->setObjectName("gridLayout_2");

        retranslateUi(LyricWidget);

        QMetaObject::connectSlotsByName(LyricWidget);
    } // setupUi

    void retranslateUi(QWidget *LyricWidget)
    {
        LyricWidget->setWindowTitle(QCoreApplication::translate("LyricWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LyricWidget: public Ui_LyricWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICWIDGET_H
