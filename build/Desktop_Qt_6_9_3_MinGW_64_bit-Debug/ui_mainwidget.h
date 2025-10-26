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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "leftwidget.h"
#include "music_widget.h"
#include "playercontrolwidget.h"
#include "topwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_realwindow;
    QGridLayout *gridLayout_3;
    leftwidget *left_widget;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    topWidget *top_window;
    QStackedWidget *stackedWidget_music;
    music_widget *pushButton_like;
    music_widget *page_download;
    playerControlWidget *ctlr_music_widget;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(1050, 700);
        MainWidget->setMinimumSize(QSize(1050, 700));
        MainWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 246, 246);\n"
"background-color: rgb(170, 0, 0);\n"
"\n"
"\n"
"background-color: #F0F0F0;\n"
"border-radius:12px;"));
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(496, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(495, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 320, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 321, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        widget_realwindow = new QWidget(MainWidget);
        widget_realwindow->setObjectName("widget_realwindow");
        widget_realwindow->setStyleSheet(QString::fromUtf8("background-color: #F0F0F0;\n"
"border-radius:12px;"));
        gridLayout_3 = new QGridLayout(widget_realwindow);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        left_widget = new leftwidget(widget_realwindow);
        left_widget->setObjectName("left_widget");
        left_widget->setMinimumSize(QSize(240, 0));
        left_widget->setMaximumSize(QSize(240, 16777215));
        left_widget->setStyleSheet(QString::fromUtf8("border:none;"));

        gridLayout_3->addWidget(left_widget, 0, 0, 1, 1);

        widget_4 = new QWidget(widget_realwindow);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 70));
        widget_4->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"background-color: transparent;\n"
""));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        top_window = new topWidget(widget_4);
        top_window->setObjectName("top_window");
        top_window->setMinimumSize(QSize(0, 50));
        top_window->setMaximumSize(QSize(16777215, 50));
        top_window->setStyleSheet(QString::fromUtf8("/* \351\222\210\345\257\271\346\217\220\345\215\207\347\232\204\346\216\247\344\273\266\345\256\236\344\276\213 */\n"
"QWidget#top_window { /* \345\201\207\350\256\276\344\275\240\345\234\250 Designer \344\270\255\350\256\276\347\275\256\344\272\206 Object Name \344\270\272 topBar */\n"
"    background-color: #F6F6F6;\n"
"    border-radius: 8px;\n"
"}"));

        gridLayout_2->addWidget(top_window, 0, 0, 1, 1);

        stackedWidget_music = new QStackedWidget(widget_4);
        stackedWidget_music->setObjectName("stackedWidget_music");
        stackedWidget_music->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;\n"
"border-radius:8px;"));
        pushButton_like = new music_widget();
        pushButton_like->setObjectName("pushButton_like");
        pushButton_like->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;"));
        stackedWidget_music->addWidget(pushButton_like);
        page_download = new music_widget();
        page_download->setObjectName("page_download");
        stackedWidget_music->addWidget(page_download);

        gridLayout_2->addWidget(stackedWidget_music, 1, 0, 1, 1);

        ctlr_music_widget = new playerControlWidget(widget_4);
        ctlr_music_widget->setObjectName("ctlr_music_widget");
        ctlr_music_widget->setMinimumSize(QSize(0, 91));
        ctlr_music_widget->setMaximumSize(QSize(16777215, 91));
        ctlr_music_widget->setStyleSheet(QString::fromUtf8("background-color: #F6F6F6;\n"
"border-radius:8px;"));

        gridLayout_2->addWidget(ctlr_music_widget, 2, 0, 1, 1);


        gridLayout_3->addWidget(widget_4, 0, 1, 1, 1);


        gridLayout->addWidget(widget_realwindow, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 500);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 500);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(MainWidget);

        stackedWidget_music->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
