/********************************************************************************
** Form generated from reading UI file 'topwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPWIDGET_H
#define UI_TOPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_topWidget
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_ahead;
    QLineEdit *lineEdit;
    QPushButton *pushButton_min_6;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_max;
    QPushButton *pushButton_min;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_close;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *topWidget)
    {
        if (topWidget->objectName().isEmpty())
            topWidget->setObjectName("topWidget");
        topWidget->resize(1036, 67);
        topWidget->setStyleSheet(QString::fromUtf8("background-color: #F6F6F6;\n"
"\n"
"border-radius:8px;"));
        gridLayout_2 = new QGridLayout(topWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_back = new QPushButton(topWidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setMinimumSize(QSize(35, 35));
        pushButton_back->setMaximumSize(QSize(35, 35));
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

        pushButton_ahead = new QPushButton(topWidget);
        pushButton_ahead->setObjectName("pushButton_ahead");
        pushButton_ahead->setMinimumSize(QSize(35, 35));
        pushButton_ahead->setMaximumSize(QSize(35, 35));
        pushButton_ahead->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
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

        horizontalLayout_2->addWidget(pushButton_ahead);


        horizontalLayout->addLayout(horizontalLayout_2);

        lineEdit = new QLineEdit(topWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(250, 30));
        lineEdit->setMaximumSize(QSize(450, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #E3E3E3;\n"
"border-raidus:3px;\n"
""));

        horizontalLayout->addWidget(lineEdit);

        pushButton_min_6 = new QPushButton(topWidget);
        pushButton_min_6->setObjectName("pushButton_min_6");
        pushButton_min_6->setMinimumSize(QSize(35, 35));
        pushButton_min_6->setMaximumSize(QSize(35, 35));
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

        horizontalLayout->addWidget(pushButton_min_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(topWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(120, 50));
        widget->setMaximumSize(QSize(120, 50));
        widget->setStyleSheet(QString::fromUtf8("background-color: #F6F6F6;\n"
"background-color: transparent;"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        pushButton_max = new QPushButton(widget);
        pushButton_max->setObjectName("pushButton_max");
        pushButton_max->setMinimumSize(QSize(20, 20));
        pushButton_max->setMaximumSize(QSize(20, 20));
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

        gridLayout->addWidget(pushButton_max, 0, 2, 1, 1);

        pushButton_min = new QPushButton(widget);
        pushButton_min->setObjectName("pushButton_min");
        pushButton_min->setMinimumSize(QSize(20, 20));
        pushButton_min->setMaximumSize(QSize(20, 20));
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

        gridLayout->addWidget(pushButton_min, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setMinimumSize(QSize(20, 20));
        pushButton_close->setMaximumSize(QSize(20, 20));
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

        gridLayout->addWidget(pushButton_close, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        horizontalLayout->addWidget(widget);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(topWidget);

        QMetaObject::connectSlotsByName(topWidget);
    } // setupUi

    void retranslateUi(QWidget *topWidget)
    {
        topWidget->setWindowTitle(QCoreApplication::translate("topWidget", "Form", nullptr));
        pushButton_back->setText(QString());
        pushButton_ahead->setText(QString());
        pushButton_min_6->setText(QString());
        pushButton_max->setText(QString());
        pushButton_min->setText(QString());
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class topWidget: public Ui_topWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPWIDGET_H
