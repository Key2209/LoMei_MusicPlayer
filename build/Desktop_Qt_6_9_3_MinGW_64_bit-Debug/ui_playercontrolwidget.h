/********************************************************************************
** Form generated from reading UI file 'playercontrolwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERCONTROLWIDGET_H
#define UI_PLAYERCONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myslider.h"

QT_BEGIN_NAMESPACE

class Ui_playerControlWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_songImage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_songName;
    QLabel *label_singerName;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_play_prev_2;
    QPushButton *pushButton_play_prev_3;
    QPushButton *pushButton_play_prev_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_playOrder;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_play_prev;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_play;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_play_next;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_volume;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    mySlider *slider_progress;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_play_3;
    QPushButton *pushButton_play_2;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *playerControlWidget)
    {
        if (playerControlWidget->objectName().isEmpty())
            playerControlWidget->setObjectName("playerControlWidget");
        playerControlWidget->resize(1256, 134);
        playerControlWidget->setStyleSheet(QString::fromUtf8("color: rgb(253, 253, 253);\n"
"background-color: rgb(255, 251, 251);\n"
"border-radius:8px;\n"
""));
        gridLayout = new QGridLayout(playerControlWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, -1, 0, -1);
        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(9, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_songImage = new QLabel(playerControlWidget);
        label_songImage->setObjectName("label_songImage");
        label_songImage->setMinimumSize(QSize(70, 70));
        label_songImage->setMaximumSize(QSize(70, 70));
        label_songImage->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 12px;"));
        label_songImage->setPixmap(QPixmap(QString::fromUtf8(":/player/images/player/pretty_crazy.jpg")));
        label_songImage->setScaledContents(true);

        horizontalLayout_5->addWidget(label_songImage);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_songName = new QLabel(playerControlWidget);
        label_songName->setObjectName("label_songName");
        label_songName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: transparent;"));

        horizontalLayout_4->addWidget(label_songName);

        label_singerName = new QLabel(playerControlWidget);
        label_singerName->setObjectName("label_singerName");
        label_singerName->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);\n"
"background: transparent;"));

        horizontalLayout_4->addWidget(label_singerName);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_play_prev_2 = new QPushButton(playerControlWidget);
        pushButton_play_prev_2->setObjectName("pushButton_play_prev_2");
        pushButton_play_prev_2->setMinimumSize(QSize(30, 30));
        pushButton_play_prev_2->setMaximumSize(QSize(30, 30));
        pushButton_play_prev_2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play_prev_2->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/like.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
" {  \n"
"	border-image: url(:/player/images/player/like1.png); \n"
"}"));

        horizontalLayout_3->addWidget(pushButton_play_prev_2);

        pushButton_play_prev_3 = new QPushButton(playerControlWidget);
        pushButton_play_prev_3->setObjectName("pushButton_play_prev_3");
        pushButton_play_prev_3->setMinimumSize(QSize(30, 30));
        pushButton_play_prev_3->setMaximumSize(QSize(30, 30));
        pushButton_play_prev_3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play_prev_3->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/comment.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/comment_press.png); \n"
"}"));

        horizontalLayout_3->addWidget(pushButton_play_prev_3);

        pushButton_play_prev_4 = new QPushButton(playerControlWidget);
        pushButton_play_prev_4->setObjectName("pushButton_play_prev_4");
        pushButton_play_prev_4->setMinimumSize(QSize(30, 30));
        pushButton_play_prev_4->setMaximumSize(QSize(30, 30));
        pushButton_play_prev_4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play_prev_4->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/more1.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/more2.png); \n"
"}"));

        horizontalLayout_3->addWidget(pushButton_play_prev_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 100);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        verticalLayout_4->setStretch(0, 100);
        verticalLayout_4->setStretch(1, 100);
        verticalLayout_4->setStretch(2, 1);

        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_playOrder = new QPushButton(playerControlWidget);
        pushButton_playOrder->setObjectName("pushButton_playOrder");
        pushButton_playOrder->setMinimumSize(QSize(30, 30));
        pushButton_playOrder->setMaximumSize(QSize(30, 30));
        pushButton_playOrder->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/shuffle.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_playOrder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_play_prev = new QPushButton(playerControlWidget);
        pushButton_play_prev->setObjectName("pushButton_play_prev");
        pushButton_play_prev->setMinimumSize(QSize(30, 30));
        pushButton_play_prev->setMaximumSize(QSize(30, 30));
        pushButton_play_prev->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play_prev->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/btn_playPrev_100.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    border-image: url(:/player/images/player/btn_playPrev_50.png); \n"
"}"));

        horizontalLayout->addWidget(pushButton_play_prev);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_play = new QPushButton(playerControlWidget);
        pushButton_play->setObjectName("pushButton_play");
        pushButton_play->setMinimumSize(QSize(35, 35));
        pushButton_play->setMaximumSize(QSize(35, 35));
        pushButton_play->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/btn_pausing.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"QPushButton:checked {\n"
"border-image: url(:/player/images/player/btn_playing.png);\n"
"}"));

        horizontalLayout->addWidget(pushButton_play);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_play_next = new QPushButton(playerControlWidget);
        pushButton_play_next->setObjectName("pushButton_play_next");
        pushButton_play_next->setMinimumSize(QSize(30, 30));
        pushButton_play_next->setMaximumSize(QSize(30, 30));
        pushButton_play_next->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play_next->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/btn_playNext_100.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    border-image: url(:/player/images/player/btn_playNext_50.png);\n"
"cursor: pointinghand; \n"
"}"));

        horizontalLayout->addWidget(pushButton_play_next);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_volume = new QPushButton(playerControlWidget);
        pushButton_volume->setObjectName("pushButton_volume");
        pushButton_volume->setMinimumSize(QSize(30, 30));
        pushButton_volume->setMaximumSize(QSize(30, 30));
        pushButton_volume->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/volume.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_volume);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 10);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 10);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 10);
        horizontalLayout->setStretch(8, 1);
        horizontalLayout->setStretch(9, 10);
        horizontalLayout->setStretch(10, 10);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(playerControlWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);\n"
"background: transparent;"));

        horizontalLayout_2->addWidget(label);

        slider_progress = new mySlider(playerControlWidget);
        slider_progress->setObjectName("slider_progress");
        slider_progress->setStyleSheet(QString::fromUtf8("        QSlider::groove:horizontal {\n"
"            height: 6px;               /* \350\277\233\345\272\246\346\235\241\351\253\230\345\272\246 */\n"
"            /*background: #c0c0c0;       \350\203\214\346\231\257\350\211\262 */\n"
"            border-radius: 3px;        /* \345\234\206\350\247\222 */\n"
"background: transparent;\n"
"        }\n"
"        QSlider::handle:horizontal {\n"
"    width: 14px;                   /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 14px;                  /* \346\273\221\345\235\227\351\253\230\345\272\246\357\274\214\344\277\235\346\214\201\347\255\211\344\272\216\345\256\275\345\272\246 */\n"
"    margin: -4px 0;                /* \350\256\251\346\273\221\345\235\227\345\261\205\344\270\255\345\234\250\346\247\275\344\270\212 */\n"
"    border-radius: 7px;            /* \345\215\212\345\256\275/\345\215\212\351\253\230 => \345\234\206\345\275\242 */\n"
"    background: #000000;           /* \346\273\221\345\235\227\351\242\234\350\211\262 */\n"
""
                        "    border: 2px solid #999999;     /* \346\273\221\345\235\227\350\276\271\346\241\206 */\n"
"        }\n"
"        QSlider::sub-page:horizontal {\n"
"            background: #000000;       /* \345\267\262\346\222\255\346\224\276\351\203\250\345\210\206\351\242\234\350\211\262 */\n"
"            border-radius: 3px;\n"
"        }\n"
"        QSlider::add-page:horizontal {\n"
"            background: #DEDEDE;       /* \346\234\252\346\222\255\346\224\276\351\203\250\345\210\206\351\242\234\350\211\262 */\n"
"            border-radius: 3px;\n"
"        }\n"
"        QSlider::handle:horizontal:hover {\n"
"    background: #3d9eff;\n"
"    border: 2px solid #3d9eff;\n"
"        }\n"
"background: transparent;"));
        slider_progress->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(slider_progress);

        label_2 = new QLabel(playerControlWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);\n"
"background: transparent;"));

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 100);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        verticalLayout->setStretch(0, 100);
        verticalLayout->setStretch(1, 50);
        verticalLayout->setStretch(2, 50);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_play_3 = new QPushButton(playerControlWidget);
        pushButton_play_3->setObjectName("pushButton_play_3");
        pushButton_play_3->setMinimumSize(QSize(40, 40));
        pushButton_play_3->setMaximumSize(QSize(40, 40));
        pushButton_play_3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play_3->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/MV.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"QPushButton:hover {\n"
"border-image: url(:/player/images/player/MV_press.png);\n"
"}"));

        horizontalLayout_8->addWidget(pushButton_play_3);

        pushButton_play_2 = new QPushButton(playerControlWidget);
        pushButton_play_2->setObjectName("pushButton_play_2");
        pushButton_play_2->setMinimumSize(QSize(30, 30));
        pushButton_play_2->setMaximumSize(QSize(30, 30));
        pushButton_play_2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_play_2->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/playList.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"QPushButton:hover {\n"
"border-image: url(:/player/images/player/playList_press.png);\n"
"}"));

        horizontalLayout_8->addWidget(pushButton_play_2);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_10);

        verticalLayout_5->setStretch(0, 140);
        verticalLayout_5->setStretch(1, 60);
        verticalLayout_5->setStretch(2, 80);

        horizontalLayout_6->addLayout(verticalLayout_5);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);

        horizontalLayout_6->setStretch(0, 30);
        horizontalLayout_6->setStretch(1, 30);
        horizontalLayout_6->setStretch(2, 100);
        horizontalLayout_6->setStretch(3, 30);
        horizontalLayout_6->setStretch(4, 1);
        horizontalLayout_6->setStretch(5, 1);

        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 100);
        verticalLayout_3->setStretch(2, 1);

        horizontalLayout_7->addLayout(verticalLayout_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 100);
        horizontalLayout_7->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(9, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 100);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 100);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(playerControlWidget);

        QMetaObject::connectSlotsByName(playerControlWidget);
    } // setupUi

    void retranslateUi(QWidget *playerControlWidget)
    {
        playerControlWidget->setWindowTitle(QCoreApplication::translate("playerControlWidget", "Form", nullptr));
        label_songImage->setText(QString());
        label_songName->setText(QCoreApplication::translate("playerControlWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\345\244\251\351\252\204\344\271\213\345\245\263</span></p></body></html>", nullptr));
        label_singerName->setText(QCoreApplication::translate("playerControlWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700;\">-</span><span style=\" font-size:11pt;\"> \345\256\271\347\245\226\345\204\277</span></p></body></html>", nullptr));
        pushButton_play_prev_2->setText(QString());
        pushButton_play_prev_3->setText(QString());
        pushButton_play_prev_4->setText(QString());
        pushButton_playOrder->setText(QString());
        pushButton_play_prev->setText(QString());
        pushButton_play->setText(QString());
        pushButton_play_next->setText(QString());
        pushButton_volume->setText(QString());
        label->setText(QCoreApplication::translate("playerControlWidget", "<html><head/><body><p align=\"right\">00\357\274\23200</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("playerControlWidget", "00\357\274\23200", nullptr));
        pushButton_play_3->setText(QString());
        pushButton_play_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class playerControlWidget: public Ui_playerControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERCONTROLWIDGET_H
