/********************************************************************************
** Form generated from reading UI file 'music_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_WIDGET_H
#define UI_MUSIC_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_music_widget
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_songImage;
    QVBoxLayout *verticalLayout;
    QLabel *label_Playlist;
    QLabel *label_Introduction;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_title_play;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_add;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_edit;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_title_songName;
    QPushButton *pushButton_title_comment;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_search;
    QSpacerItem *horizontalSpacer_5;
    QStackedWidget *stackedWidget_song_comment;
    QWidget *song;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_Introduction_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_Introduction_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_Introduction_4;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *listWidget;
    QWidget *comment;

    void setupUi(QWidget *music_widget)
    {
        if (music_widget->objectName().isEmpty())
            music_widget->setObjectName("music_widget");
        music_widget->resize(1057, 728);
        music_widget->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 255, 255);"));
        gridLayout_3 = new QGridLayout(music_widget);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_songImage = new QLabel(music_widget);
        label_songImage->setObjectName("label_songImage");
        label_songImage->setMinimumSize(QSize(130, 130));
        label_songImage->setMaximumSize(QSize(130, 130));
        label_songImage->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 12px;"));
        label_songImage->setPixmap(QPixmap(QString::fromUtf8(":/player/images/player/pretty_crazy.jpg")));
        label_songImage->setScaledContents(true);

        horizontalLayout_2->addWidget(label_songImage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_Playlist = new QLabel(music_widget);
        label_Playlist->setObjectName("label_Playlist");
        label_Playlist->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: transparent;"));

        verticalLayout->addWidget(label_Playlist);

        label_Introduction = new QLabel(music_widget);
        label_Introduction->setObjectName("label_Introduction");
        label_Introduction->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: transparent;"));

        verticalLayout->addWidget(label_Introduction);

        widget = new QWidget(music_widget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(300, 30));
        widget->setMaximumSize(QSize(300, 30));
        widget->setStyleSheet(QString::fromUtf8("background-color: #F6F6F6;"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_title_play = new QPushButton(widget);
        pushButton_title_play->setObjectName("pushButton_title_play");
        pushButton_title_play->setMinimumSize(QSize(90, 30));
        pushButton_title_play->setMaximumSize(QSize(90, 30));
        pushButton_title_play->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_title_play->setIcon(icon);

        horizontalLayout->addWidget(pushButton_title_play);

        horizontalSpacer = new QSpacerItem(13, 45, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_add = new QPushButton(widget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setMinimumSize(QSize(90, 30));
        pushButton_add->setMaximumSize(QSize(90, 30));
        pushButton_add->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon1.addFile(QString::fromUtf8(":/player/images/player/add_path.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_add->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_add);

        horizontalSpacer_6 = new QSpacerItem(13, 45, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pushButton_edit = new QPushButton(widget);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setMinimumSize(QSize(90, 30));
        pushButton_edit->setMaximumSize(QSize(90, 30));
        pushButton_edit->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/player/images/player/edit_button1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_edit->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_edit);

        horizontalLayout->setStretch(0, 300);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 300);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 300);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_title_songName = new QPushButton(music_widget);
        pushButton_title_songName->setObjectName("pushButton_title_songName");
        pushButton_title_songName->setMinimumSize(QSize(90, 30));
        pushButton_title_songName->setMaximumSize(QSize(90, 30));
        pushButton_title_songName->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_title_songName->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            border: none;\n"
"			color:black;\n"
"            background-color: transparent;\n"
"            font-size: 16px;\n"
"            padding-bottom: 4px; /* \344\270\272\345\272\225\347\272\277\351\242\204\347\225\231\344\270\200\347\202\271\347\251\272\351\227\264 */\n"
"        }\n"
"    QPushButton:hover {\n"
"	color:#00CC65;\n"
"        }\n"
"\n"
"\n"
""));

        horizontalLayout_8->addWidget(pushButton_title_songName);

        pushButton_title_comment = new QPushButton(music_widget);
        pushButton_title_comment->setObjectName("pushButton_title_comment");
        pushButton_title_comment->setMinimumSize(QSize(90, 30));
        pushButton_title_comment->setMaximumSize(QSize(90, 30));
        pushButton_title_comment->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_title_comment->setStyleSheet(QString::fromUtf8("\n"
"        QPushButton:hover {\n"
"\n"
"color:#00CC65;\n"
"        }\n"
"\n"
"QPushButton {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"    font-size: 16px;\n"
"    color: #666;\n"
"    padding: 4px 12px 6px 12px; /* \345\267\246\345\217\263 padding \345\242\236\345\244\247\357\274\214\347\272\277\344\274\232\347\234\213\350\265\267\346\235\245\347\237\255 */\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    color: rgb(0,180,90);\n"
"    font-weight: bold;\n"
"    border-bottom: 2px solid rgb(0,180,90);\n"
"    padding: 4px 12px 4px 12px;\n"
"}"));

        horizontalLayout_8->addWidget(pushButton_title_comment);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lineEdit_search = new QLineEdit(music_widget);
        lineEdit_search->setObjectName("lineEdit_search");
        lineEdit_search->setMinimumSize(QSize(0, 30));
        lineEdit_search->setMaximumSize(QSize(230, 30));
        lineEdit_search->setStyleSheet(QString::fromUtf8("background-color: #E3E3E3;\n"
"border-raidus:3px;\n"
""));

        horizontalLayout_7->addWidget(lineEdit_search);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_8);

        stackedWidget_song_comment = new QStackedWidget(music_widget);
        stackedWidget_song_comment->setObjectName("stackedWidget_song_comment");
        stackedWidget_song_comment->setStyleSheet(QString::fromUtf8("background-color:#F6F6F6;\n"
""));
        song = new QWidget();
        song->setObjectName("song");
        gridLayout = new QGridLayout(song);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_Introduction_2 = new QLabel(song);
        label_Introduction_2->setObjectName("label_Introduction_2");
        label_Introduction_2->setStyleSheet(QString::fromUtf8("color: #626262;\n"
"background: transparent;"));

        horizontalLayout_10->addWidget(label_Introduction_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        label_Introduction_3 = new QLabel(song);
        label_Introduction_3->setObjectName("label_Introduction_3");
        label_Introduction_3->setStyleSheet(QString::fromUtf8("color: #626262;\n"
"background: transparent;"));

        horizontalLayout_10->addWidget(label_Introduction_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        label_Introduction_4 = new QLabel(song);
        label_Introduction_4->setObjectName("label_Introduction_4");
        label_Introduction_4->setStyleSheet(QString::fromUtf8("color: #626262;\n"
"background: transparent;"));

        horizontalLayout_10->addWidget(label_Introduction_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        horizontalLayout_10->setStretch(0, 10);
        horizontalLayout_10->setStretch(1, 160);
        horizontalLayout_10->setStretch(2, 10);
        horizontalLayout_10->setStretch(3, 170);
        horizontalLayout_10->setStretch(4, 10);
        horizontalLayout_10->setStretch(5, 20);

        verticalLayout_4->addLayout(horizontalLayout_10);

        listWidget = new QListWidget(song);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("background-color:#F6F6F6;\n"
""));

        verticalLayout_4->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        stackedWidget_song_comment->addWidget(song);
        comment = new QWidget();
        comment->setObjectName("comment");
        stackedWidget_song_comment->addWidget(comment);

        verticalLayout_2->addWidget(stackedWidget_song_comment);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(music_widget);

        stackedWidget_song_comment->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(music_widget);
    } // setupUi

    void retranslateUi(QWidget *music_widget)
    {
        music_widget->setWindowTitle(QCoreApplication::translate("music_widget", "Form", nullptr));
        label_songImage->setText(QString());
        label_Playlist->setText(QCoreApplication::translate("music_widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\345\243\253\345\244\232\345\225\244\346\242\250\345\225\244\346\242\250\345\206\232\345\256\266\346\251\231\344\270\255\346\204\217\345\230\205\346\255\214</span></p></body></html>", nullptr));
        label_Introduction->setText(QCoreApplication::translate("music_widget", "<html><head/><body><p>\347\256\200\345\215\225\344\273\213\347\273\215\344\270\213\344\275\240\350\207\252\345\267\261</p></body></html>", nullptr));
        pushButton_title_play->setText(QCoreApplication::translate("music_widget", "\346\222\255\346\224\276", nullptr));
        pushButton_add->setText(QCoreApplication::translate("music_widget", "\346\267\273\345\212\240", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("music_widget", "\347\274\226\350\276\221", nullptr));
        pushButton_title_songName->setText(QCoreApplication::translate("music_widget", "\346\255\214\346\233\262", nullptr));
        pushButton_title_comment->setText(QCoreApplication::translate("music_widget", "\350\257\204\350\256\272", nullptr));
        label_Introduction_2->setText(QCoreApplication::translate("music_widget", "<html><head/><body><p>\346\255\214\345\220\215/\346\255\214\346\211\213</p></body></html>", nullptr));
        label_Introduction_3->setText(QCoreApplication::translate("music_widget", "<html><head/><body><p>\344\270\223\350\276\221</p></body></html>", nullptr));
        label_Introduction_4->setText(QCoreApplication::translate("music_widget", "<html><head/><body><p>\346\227\266\351\225\277</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class music_widget: public Ui_music_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_WIDGET_H
