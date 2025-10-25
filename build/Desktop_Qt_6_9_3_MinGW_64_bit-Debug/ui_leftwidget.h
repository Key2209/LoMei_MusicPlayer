/********************************************************************************
** Form generated from reading UI file 'leftwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTWIDGET_H
#define UI_LEFTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pagebutton.h"

QT_BEGIN_NAMESPACE

class Ui_leftwidget
{
public:
    QGridLayout *gridLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_home;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    PageButton *pushButton_home;
    PageButton *pushButton_recommend;
    QWidget *widget_like;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    PageButton *pushButton_like;
    PageButton *pushButton_history;
    PageButton *pushButton_download;
    QWidget *widget_new;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnAddPlaylist;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget_bottom;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *leftwidget)
    {
        if (leftwidget->objectName().isEmpty())
            leftwidget->setObjectName("leftwidget");
        leftwidget->resize(317, 736);
        leftwidget->setStyleSheet(QString::fromUtf8("background-color:#F0F0F0;\n"
""));
        gridLayout_5 = new QGridLayout(leftwidget);
        gridLayout_5->setObjectName("gridLayout_5");
        label = new QLabel(leftwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 50));
        label->setMaximumSize(QSize(200, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/player/images/player/mylogo2.png")));
        label->setScaledContents(true);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_home = new QWidget(leftwidget);
        widget_home->setObjectName("widget_home");
        gridLayout_2 = new QGridLayout(widget_home);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_home = new PageButton(widget_home);
        pushButton_home->setObjectName("pushButton_home");
        pushButton_home->setMinimumSize(QSize(95, 55));
        pushButton_home->setMaximumSize(QSize(95, 55));
        pushButton_home->setStyleSheet(QString::fromUtf8("        background-color:#E9E9E9;\n"
"        border-radius:12px;\n"
"        color: black;\n"
"        font-size: 12px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/player/images/player/home.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_home->setIcon(icon);
        pushButton_home->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(pushButton_home);

        pushButton_recommend = new PageButton(widget_home);
        pushButton_recommend->setObjectName("pushButton_recommend");
        pushButton_recommend->setMinimumSize(QSize(95, 55));
        pushButton_recommend->setMaximumSize(QSize(95, 55));
        pushButton_recommend->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #E9E9E9;\n"
"    color: black;\n"
"    border-radius: 12px;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
" \n"
"}\n"
"QPushButton:pressed {\n"
"\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/player/images/player/recommend.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_recommend->setIcon(icon1);
        pushButton_recommend->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(pushButton_recommend);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget_home);

        widget_like = new QWidget(leftwidget);
        widget_like->setObjectName("widget_like");
        gridLayout_3 = new QGridLayout(widget_like);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_like = new PageButton(widget_like);
        pushButton_like->setObjectName("pushButton_like");
        pushButton_like->setMinimumSize(QSize(200, 50));
        pushButton_like->setMaximumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton_like);

        pushButton_history = new PageButton(widget_like);
        pushButton_history->setObjectName("pushButton_history");
        pushButton_history->setMinimumSize(QSize(200, 50));
        pushButton_history->setMaximumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton_history);

        pushButton_download = new PageButton(widget_like);
        pushButton_download->setObjectName("pushButton_download");
        pushButton_download->setMinimumSize(QSize(200, 50));
        pushButton_download->setMaximumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton_download);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget_like);


        gridLayout_5->addLayout(verticalLayout_2, 1, 0, 1, 1);

        widget_new = new QWidget(leftwidget);
        widget_new->setObjectName("widget_new");
        widget_new->setMinimumSize(QSize(200, 65));
        widget_new->setMaximumSize(QSize(200, 65));
        QFont font;
        font.setPointSize(1);
        widget_new->setFont(font);
        gridLayout_4 = new QGridLayout(widget_new);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(widget_new);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnAddPlaylist = new QPushButton(widget_new);
        btnAddPlaylist->setObjectName("btnAddPlaylist");
        btnAddPlaylist->setMinimumSize(QSize(85, 25));
        btnAddPlaylist->setMaximumSize(QSize(85, 25));
        btnAddPlaylist->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnAddPlaylist->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #E9E9E9;\n"
"    color: black;\n"
"    border-radius: 6px;\n"
"    font-size: 16px;\n"
"    \n"
"   \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #D4D4D4;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #D4D4D4;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btnAddPlaylist);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 65);
        horizontalLayout_2->setStretch(1, 50);
        horizontalLayout_2->setStretch(2, 10);
        horizontalLayout_2->setStretch(3, 50);
        horizontalLayout_2->setStretch(4, 30);

        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_new, 2, 0, 1, 1);

        scrollArea = new QScrollArea(leftwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 297, 264));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 3, 0, 1, 1);

        widget_bottom = new QWidget(leftwidget);
        widget_bottom->setObjectName("widget_bottom");
        widget_bottom->setStyleSheet(QString::fromUtf8("background-color:#F0F0F0;\n"
""));
        gridLayout = new QGridLayout(widget_bottom);
        gridLayout->setObjectName("gridLayout");
        pushButton_2 = new QPushButton(widget_bottom);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setMaximumSize(QSize(30, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/setting.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
" {  \n"
"	border-image: url(:/player/images/player/setting1.png); \n"
"}"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(widget_bottom);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(30, 30));
        pushButton_3->setMaximumSize(QSize(30, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/skin.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
" {  \n"
"	border-image: url(:/player/images/player/skin1.png); \n"
"}"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(widget_bottom);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(30, 30));
        pushButton_4->setMaximumSize(QSize(30, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/game.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
" {  \n"
"	border-image: url(:/player/images/player/game1.png); \n"
"}"));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);


        gridLayout_5->addWidget(widget_bottom, 4, 0, 1, 1);


        retranslateUi(leftwidget);

        QMetaObject::connectSlotsByName(leftwidget);
    } // setupUi

    void retranslateUi(QWidget *leftwidget)
    {
        leftwidget->setWindowTitle(QCoreApplication::translate("leftwidget", "Form", nullptr));
        label->setText(QString());
        pushButton_home->setText(QString());
        pushButton_recommend->setText(QString());
        pushButton_like->setText(QCoreApplication::translate("leftwidget", "\345\226\234\346\254\242", nullptr));
        pushButton_history->setText(QCoreApplication::translate("leftwidget", "\346\234\200\350\277\221\346\222\255\346\224\276", nullptr));
        pushButton_download->setText(QCoreApplication::translate("leftwidget", "\346\234\254\345\234\260\345\222\214\344\270\213\350\275\275", nullptr));
        label_2->setText(QCoreApplication::translate("leftwidget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\210\221\347\232\204\346\255\214\345\215\225 |</span></p></body></html>", nullptr));
        btnAddPlaylist->setText(QCoreApplication::translate("leftwidget", "\346\226\260\345\273\272\346\255\214\345\215\225", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class leftwidget: public Ui_leftwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTWIDGET_H
