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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_music_widget
{
public:
    QPushButton *pushButton_min_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_songImage;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_title_play;
    QPushButton *pushButton_edit;
    QWidget *page_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_min_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_min_6;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_min;
    QPushButton *pushButton_max;
    QPushButton *pushButton_close;

    void setupUi(QWidget *music_widget)
    {
        if (music_widget->objectName().isEmpty())
            music_widget->setObjectName("music_widget");
        music_widget->resize(1046, 699);
        music_widget->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_min_4 = new QPushButton(music_widget);
        pushButton_min_4->setObjectName("pushButton_min_4");
        pushButton_min_4->setGeometry(QRect(-501, 429, 30, 30));
        pushButton_min_4->setMinimumSize(QSize(30, 30));
        pushButton_min_4->setMaximumSize(QSize(30, 30));
        pushButton_min_4->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/Minimize.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/Minimize1.png); \n"
"}"));
        stackedWidget = new QStackedWidget(music_widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(50, 110, 931, 561));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 40, 371, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: transparent;"));
        label_songImage = new QLabel(page);
        label_songImage->setObjectName("label_songImage");
        label_songImage->setGeometry(QRect(30, 40, 130, 130));
        label_songImage->setMinimumSize(QSize(130, 130));
        label_songImage->setMaximumSize(QSize(130, 130));
        label_songImage->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 12px;"));
        label_songImage->setPixmap(QPixmap(QString::fromUtf8(":/player/images/player/pretty_crazy.jpg")));
        label_songImage->setScaledContents(true);
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 80, 371, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background: transparent;"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 330, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #E3E3E3;\n"
"    color: black;\n"
"    border-radius: 20px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    padding-left: 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #18c054;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #13a846;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/player/images/player/play_button.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton_title_play = new QPushButton(page);
        pushButton_title_play->setObjectName("pushButton_title_play");
        pushButton_title_play->setGeometry(QRect(180, 140, 90, 30));
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
        pushButton_title_play->setIcon(icon);
        pushButton_edit = new QPushButton(page);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setGeometry(QRect(280, 140, 90, 30));
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
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        widget = new QWidget(music_widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(51, 21, 961, 54));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_back = new QPushButton(widget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(45, 45));
        pushButton_back->setMaximumSize(QSize(45, 45));
        pushButton_back->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/back.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/back1.png); \n"
"}"));

        horizontalLayout_2->addWidget(pushButton_back);

        pushButton_min_5 = new QPushButton(widget);
        pushButton_min_5->setObjectName("pushButton_min_5");
        pushButton_min_5->setMinimumSize(QSize(45, 45));
        pushButton_min_5->setMaximumSize(QSize(45, 45));
        pushButton_min_5->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/back.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/back1.png); \n"
"}"));

        horizontalLayout_2->addWidget(pushButton_min_5);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 50));
        lineEdit->setMaximumSize(QSize(16777215, 50));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #E3E3E3;\n"
"border-raidus:3px;\n"
""));

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_min_6 = new QPushButton(widget);
        pushButton_min_6->setObjectName("pushButton_min_6");
        pushButton_min_6->setMinimumSize(QSize(45, 45));
        pushButton_min_6->setMaximumSize(QSize(45, 45));
        pushButton_min_6->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/listen.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/listen1.png); \n"
"}"));

        horizontalLayout_3->addWidget(pushButton_min_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_min = new QPushButton(widget);
        pushButton_min->setObjectName("pushButton_min");
        pushButton_min->setMinimumSize(QSize(30, 30));
        pushButton_min->setMaximumSize(QSize(30, 30));
        pushButton_min->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/Minimize.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/Minimize1.png); \n"
"}"));

        horizontalLayout->addWidget(pushButton_min);

        pushButton_max = new QPushButton(widget);
        pushButton_max->setObjectName("pushButton_max");
        pushButton_max->setMinimumSize(QSize(30, 30));
        pushButton_max->setMaximumSize(QSize(30, 30));
        pushButton_max->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/Maximize1.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/Maximize2.png); \n"
"}"));

        horizontalLayout->addWidget(pushButton_max);

        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setMinimumSize(QSize(30, 30));
        pushButton_close->setMaximumSize(QSize(30, 30));
        pushButton_close->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/Shut_down.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/Shut_down1.png); \n"
"}"));

        horizontalLayout->addWidget(pushButton_close);


        horizontalLayout_4->addLayout(horizontalLayout);


        retranslateUi(music_widget);

        QMetaObject::connectSlotsByName(music_widget);
    } // setupUi

    void retranslateUi(QWidget *music_widget)
    {
        music_widget->setWindowTitle(QCoreApplication::translate("music_widget", "Form", nullptr));
        pushButton_min_4->setText(QString());
        label->setText(QCoreApplication::translate("music_widget", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\345\243\253\345\244\232\345\225\244\346\242\250\345\225\244\346\242\250\345\206\232\345\256\266\346\251\231\347\232\204\346\255\214\345\215\225</span></p></body></html>", nullptr));
        label_songImage->setText(QString());
        label_2->setText(QCoreApplication::translate("music_widget", "<html><head/><body><p>\347\256\200\345\215\225\344\273\213\347\273\215\344\270\213\344\275\240\350\207\252\345\267\261</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("music_widget", "\346\222\255\346\224\276", nullptr));
        pushButton_title_play->setText(QCoreApplication::translate("music_widget", "\346\222\255\346\224\276", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("music_widget", "\347\274\226\350\276\221", nullptr));
        pushButton_back->setText(QString());
        pushButton_min_5->setText(QString());
        pushButton_min_6->setText(QString());
        pushButton_min->setText(QString());
        pushButton_max->setText(QString());
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class music_widget: public Ui_music_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_WIDGET_H
