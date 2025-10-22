/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "playercontrolwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    playerControlWidget *widget_bottom;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QLabel *label_songImage;
    QPushButton *pushButton_3;
    QPushButton *pushButton_edit;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(1050, 700);
        MainWidget->setMinimumSize(QSize(1050, 700));
        MainWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 246, 246);"));
        widget_bottom = new playerControlWidget(MainWidget);
        widget_bottom->setObjectName("widget_bottom");
        widget_bottom->setGeometry(QRect(230, 590, 811, 91));
        widget_bottom->setMinimumSize(QSize(0, 91));
        widget_bottom->setMaximumSize(QSize(16777215, 91));
        widget_bottom->setStyleSheet(QString::fromUtf8("color: rgb(253, 253, 253);\n"
"background-color: rgb(255, 251, 251);\n"
"border-radius:8px;"));
        pushButton = new QPushButton(MainWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 150, 81, 24));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(MainWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(820, 250, 161, 71));
        checkBox = new QCheckBox(MainWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(560, 220, 41, 51));
        checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        checkBox->setChecked(true);
        label_songImage = new QLabel(MainWidget);
        label_songImage->setObjectName("label_songImage");
        label_songImage->setGeometry(QRect(200, 180, 130, 130));
        label_songImage->setMinimumSize(QSize(130, 130));
        label_songImage->setMaximumSize(QSize(130, 130));
        label_songImage->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 12px;"));
        label_songImage->setPixmap(QPixmap(QString::fromUtf8(":/player/images/player/pretty_crazy.jpg")));
        label_songImage->setScaledContents(true);
        pushButton_3 = new QPushButton(MainWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(400, 100, 90, 30));
        pushButton_3->setMinimumSize(QSize(90, 30));
        pushButton_3->setMaximumSize(QSize(90, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #E3E3E3;\n"
"    color: black;\n"
"    border-radius: 12px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    padding-left: 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D4D4D4;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #D4D4D4;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/player/images/player/play_button.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon);
        pushButton_edit = new QPushButton(MainWidget);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setGeometry(QRect(530, 110, 90, 30));
        pushButton_edit->setMinimumSize(QSize(90, 30));
        pushButton_edit->setMaximumSize(QSize(90, 30));
        pushButton_edit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #E3E3E3;\n"
"    color: black;\n"
"    border-radius: 12px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    padding-left: 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D4D4D4;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #D4D4D4;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/player/images/player/edit_button1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_edit->setIcon(icon1);

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWidget", "\346\267\273\345\212\240\351\237\263\344\271\220", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWidget", "PushButton", nullptr));
        checkBox->setText(QString());
        label_songImage->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWidget", "\346\222\255\346\224\276", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("MainWidget", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
