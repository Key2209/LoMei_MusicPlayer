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
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_songImage;
    QVBoxLayout *verticalLayout;
    QLabel *label_Playlist;
    QLabel *label_Introduction;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_title_play;
    QPushButton *pushButton_add;
    QPushButton *pushButton_edit;
    QSpacerItem *horizontalSpacer_9;
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
    QWidget *page_2;

    void setupUi(QWidget *music_widget)
    {
        if (music_widget->objectName().isEmpty())
            music_widget->setObjectName("music_widget");
        music_widget->resize(941, 618);
        music_widget->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 255, 255);"));
        gridLayout_4 = new QGridLayout(music_widget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 9);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(music_widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("boder:none;"));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_songImage = new QLabel(page);
        label_songImage->setObjectName("label_songImage");
        label_songImage->setMinimumSize(QSize(130, 130));
        label_songImage->setMaximumSize(QSize(130, 130));
        label_songImage->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 12px;"));
        label_songImage->setPixmap(QPixmap(QString::fromUtf8(":/player/images/player/pretty_crazy.jpg")));
        label_songImage->setScaledContents(true);

        horizontalLayout_6->addWidget(label_songImage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_Playlist = new QLabel(page);
        label_Playlist->setObjectName("label_Playlist");
        label_Playlist->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: transparent;"));

        verticalLayout->addWidget(label_Playlist);

        label_Introduction = new QLabel(page);
        label_Introduction->setObjectName("label_Introduction");
        label_Introduction->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: transparent;"));

        verticalLayout->addWidget(label_Introduction);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_title_play = new QPushButton(page);
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

        horizontalLayout_5->addWidget(pushButton_title_play);

        pushButton_add = new QPushButton(page);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setMinimumSize(QSize(90, 30));
        pushButton_add->setMaximumSize(QSize(90, 30));
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

        horizontalLayout_5->addWidget(pushButton_add);

        pushButton_edit = new QPushButton(page);
        pushButton_edit->setObjectName("pushButton_edit");
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/player/images/player/edit_button1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_edit->setIcon(icon2);

        horizontalLayout_5->addWidget(pushButton_edit);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_title_songName = new QPushButton(page);
        pushButton_title_songName->setObjectName("pushButton_title_songName");
        pushButton_title_songName->setMinimumSize(QSize(90, 30));
        pushButton_title_songName->setMaximumSize(QSize(90, 30));
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

        pushButton_title_comment = new QPushButton(page);
        pushButton_title_comment->setObjectName("pushButton_title_comment");
        pushButton_title_comment->setMinimumSize(QSize(90, 30));
        pushButton_title_comment->setMaximumSize(QSize(90, 30));
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
        lineEdit_search = new QLineEdit(page);
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


        gridLayout_3->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        stackedWidget_song_comment = new QStackedWidget(page);
        stackedWidget_song_comment->setObjectName("stackedWidget_song_comment");
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


        verticalLayout_4->addLayout(horizontalLayout_10);

        listWidget = new QListWidget(song);
        listWidget->setObjectName("listWidget");

        verticalLayout_4->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        stackedWidget_song_comment->addWidget(song);
        comment = new QWidget();
        comment->setObjectName("comment");
        stackedWidget_song_comment->addWidget(comment);

        gridLayout_3->addWidget(stackedWidget_song_comment, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(music_widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(music_widget);
    } // setupUi

    void retranslateUi(QWidget *music_widget)
    {
        music_widget->setWindowTitle(QCoreApplication::translate("music_widget", "Form", nullptr));
        label_songImage->setText(QString());
        label_Playlist->setText(QCoreApplication::translate("music_widget", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\345\243\253\345\244\232\345\225\244\346\242\250\345\225\244\346\242\250\345\206\232\345\256\266\346\251\231\347\232\204\346\255\214\345\215\225</span></p></body></html>", nullptr));
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
