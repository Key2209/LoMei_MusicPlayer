/********************************************************************************
** Form generated from reading UI file 'songwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGWIDGET_H
#define UI_SONGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pagebutton.h"

QT_BEGIN_NAMESPACE

class Ui_songwidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QLabel *label_image;
    PageButton *pushButton_image;
    QVBoxLayout *verticalLayout;
    QLabel *song;
    QLabel *singer;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    PageButton *pushButton_like;
    QPushButton *pushButton_add;
    QPushButton *pushButton_more;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_collection;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_duration;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *songwidget)
    {
        if (songwidget->objectName().isEmpty())
            songwidget->setObjectName("songwidget");
        songwidget->resize(1092, 67);
        songwidget->setStyleSheet(QString::fromUtf8("background-color:#F1F1F1;\n"
"border-radius: 8px;"));
        gridLayout = new QGridLayout(songwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(songwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(45, 45));
        widget->setMaximumSize(QSize(45, 45));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-color: transparent;"));
        label_image = new QLabel(widget);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(0, 0, 45, 45));
        label_image->setMinimumSize(QSize(45, 45));
        label_image->setMaximumSize(QSize(45, 45));
        label_image->setStyleSheet(QString::fromUtf8("border-radius:12px;"));
        label_image->setPixmap(QPixmap(QString::fromUtf8(":/player/images/player/pretty_crazy.jpg")));
        label_image->setScaledContents(true);
        pushButton_image = new PageButton(widget);
        pushButton_image->setObjectName("pushButton_image");
        pushButton_image->setGeometry(QRect(0, 0, 45, 45));
        pushButton_image->setMinimumSize(QSize(45, 45));
        pushButton_image->setMaximumSize(QSize(45, 45));
        pushButton_image->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"PageButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"\n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"PageButton:hover\n"
" {  \n"
"	border-image: url(:/player/images/player/play_button.png); \n"
"}"));

        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        song = new QLabel(songwidget);
        song->setObjectName("song");
        song->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #787878;"));

        verticalLayout->addWidget(song);

        singer = new QLabel(songwidget);
        singer->setObjectName("singer");
        singer->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #787878;"));

        verticalLayout->addWidget(singer);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_like = new PageButton(songwidget);
        pushButton_like->setObjectName("pushButton_like");
        pushButton_like->setMinimumSize(QSize(30, 30));
        pushButton_like->setMaximumSize(QSize(30, 30));
        pushButton_like->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_2->addWidget(pushButton_like);

        pushButton_add = new QPushButton(songwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setMinimumSize(QSize(30, 30));
        pushButton_add->setMaximumSize(QSize(30, 30));
        pushButton_add->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/add.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {  \n"
"	border-image: url(:/player/images/player/add1.png); \n"
"}"));
        pushButton_add->setIconSize(QSize(128, 128));

        horizontalLayout_2->addWidget(pushButton_add);

        pushButton_more = new QPushButton(songwidget);
        pushButton_more->setObjectName("pushButton_more");
        pushButton_more->setMinimumSize(QSize(30, 30));
        pushButton_more->setMaximumSize(QSize(30, 30));
        pushButton_more->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/more1.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {  \n"
"	border-image: url(:/player/images/player/more2.png); \n"
"}"));

        horizontalLayout_2->addWidget(pushButton_more);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_collection = new QLabel(songwidget);
        label_collection->setObjectName("label_collection");
        label_collection->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #787878;"));

        horizontalLayout_3->addWidget(label_collection);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_duration = new QLabel(songwidget);
        label_duration->setObjectName("label_duration");
        label_duration->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #787878;"));

        horizontalLayout_3->addWidget(label_duration);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 10);
        horizontalLayout_3->setStretch(1, 100);
        horizontalLayout_3->setStretch(2, 100);
        horizontalLayout_3->setStretch(3, 10);
        horizontalLayout_3->setStretch(4, 150);
        horizontalLayout_3->setStretch(5, 50);
        horizontalLayout_3->setStretch(6, 10);
        horizontalLayout_3->setStretch(7, 30);

        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        retranslateUi(songwidget);

        QMetaObject::connectSlotsByName(songwidget);
    } // setupUi

    void retranslateUi(QWidget *songwidget)
    {
        songwidget->setWindowTitle(QCoreApplication::translate("songwidget", "Form", nullptr));
        label_image->setText(QString());
        pushButton_image->setText(QString());
        song->setText(QCoreApplication::translate("songwidget", "<html><head/><body><p><span style=\" font-weight:700;\">\345\244\251\344\271\213\351\252\204\345\245\263</span></p></body></html>", nullptr));
        singer->setText(QCoreApplication::translate("songwidget", "<html><head/><body><p>\345\256\271\347\245\226\345\204\277</p></body></html>", nullptr));
        pushButton_like->setText(QString());
        pushButton_add->setText(QString());
        pushButton_more->setText(QString());
        label_collection->setText(QCoreApplication::translate("songwidget", "<html><head/><body><p>PRETTY CRAZY JOEY YUNG CONCERT TOUR \345\256\271\347\245\226\345\204\277\346\274\224\345\224\261\344\274\232</p></body></html>", nullptr));
        label_duration->setText(QCoreApplication::translate("songwidget", "<html><head/><body><p>04:45</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class songwidget: public Ui_songwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGWIDGET_H
