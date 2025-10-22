/********************************************************************************
** Form generated from reading UI file 'addmusicdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMUSICDIALOG_H
#define UI_ADDMUSICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addmusicdialog
{
public:
    QWidget *widget;
    QLabel *lblTip;
    QFrame *frame;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblTip_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_close;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddFolder;
    QListWidget *listFolders;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnOK;

    void setupUi(QDialog *addmusicdialog)
    {
        if (addmusicdialog->objectName().isEmpty())
            addmusicdialog->setObjectName("addmusicdialog");
        addmusicdialog->resize(640, 520);
        addmusicdialog->setMinimumSize(QSize(640, 520));
        addmusicdialog->setMaximumSize(QSize(640, 520));
        addmusicdialog->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(addmusicdialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 9, 621, 501));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #FFFFFF;\n"
"	color:#FFFFFF;\n"
"    border-radius: 15px;\n"
"}\n"
""));
        lblTip = new QLabel(widget);
        lblTip->setObjectName("lblTip");
        lblTip->setGeometry(QRect(10, 60, 130, 41));
        lblTip->setStyleSheet(QString::fromUtf8("QLabel#lblTip {\n"
"\n"
"    color: #000000;\n"
"    font-size: 14px;\n"
"background-color: transparent; /* \347\241\256\344\277\235\345\256\271\345\231\250\344\271\237\346\230\257\351\200\217\346\230\216\347\232\204 */\n"
"}"));
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-60, 50, 751, 1));
        frame->setStyleSheet(QString::fromUtf8("\n"
"QFrame {\n"
"    background-color: #EFEFEF; /* \347\272\277\347\232\204\351\242\234\350\211\262 */\n"
"    max-height: 1px;           /* \347\272\277\345\256\275 */\n"
"    min-height: 1px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::Shape::HLine);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 10, 591, 31));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblTip_2 = new QLabel(widget1);
        lblTip_2->setObjectName("lblTip_2");
        lblTip_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: transparent; /* \347\241\256\344\277\235\345\256\271\345\231\250\344\271\237\346\230\257\351\200\217\346\230\216\347\232\204 */\n"
"    color: #000000;\n"
"    font-size: 14px;\n"
"}"));

        horizontalLayout_3->addWidget(lblTip_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_close = new QPushButton(widget1);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setMinimumSize(QSize(15, 15));
        pushButton_close->setMaximumSize(QSize(15, 15));
        pushButton_close->setStyleSheet(QString::fromUtf8("/* \346\222\255\346\224\276\346\214\211\351\222\256 */\n"
"QPushButton {\n"
"    /* \346\233\277\346\215\242 background-image */\n"
"    border-image: url(:/player/images/player/btn_closeMainWindow_50.png); \n"
"    qproperty-cursor: pointinghand; /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\346\211\213\346\216\214 */\n"
"    border: none; /* \347\241\256\344\277\235\346\262\241\346\234\211\350\276\271\346\241\206\357\274\214\345\220\246\345\210\231 border-image \345\217\257\350\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215 */\n"
"    background-color: transparent; /* \344\277\235\346\214\201\351\200\217\346\230\216\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover, \n"
"QPushButton:pressed {    \n"
"border-image: url(:/player/images/player/btn_closeMainWindow_100.png); \n"
"}"));

        horizontalLayout_3->addWidget(pushButton_close);

        widget2 = new QWidget(widget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 90, 591, 381));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnAddFolder = new QPushButton(widget2);
        btnAddFolder->setObjectName("btnAddFolder");
        btnAddFolder->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: transparent; /* \347\241\256\344\277\235\345\256\271\345\231\250\344\271\237\346\230\257\351\200\217\346\230\216\347\232\204 */\n"
"    color: black;\n"
"	border-color:#F2F2F2;\n"
"	border: 1px solid black; /* \347\256\200\345\206\231\357\274\232\345\220\214\346\227\266\350\256\276\347\275\256\347\262\227\347\273\206\343\200\201\346\240\267\345\274\217\345\222\214\351\242\234\350\211\262 */\n"
"    border-radius: 2px;\n"
"    padding: 6px 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #FBFBFB;\n"
"}"));

        horizontalLayout->addWidget(btnAddFolder);


        verticalLayout->addLayout(horizontalLayout);

        listFolders = new QListWidget(widget2);
        listFolders->setObjectName("listFolders");
        listFolders->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #F5F5F5;\n"
"    border-radius: 12px;\n"
"    border: 1px solid #ddd;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"\n"
"/* \346\240\270\345\277\203\357\274\232\351\200\211\344\270\255\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QListWidget::item:selected {\n"
"    background-color: transparent; /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\345\256\214\345\205\250\351\200\217\346\230\216 */\n"
"    border: none;                  /* \347\247\273\351\231\244\344\273\273\344\275\225\350\276\271\346\241\206 */\n"
"    color: inherit;                /* \344\277\235\346\214\201\346\226\207\346\234\254\351\242\234\350\211\262\344\270\215\345\217\230 */\n"
"}\n"
"\n"
"/* \346\240\270\345\277\203\357\274\232\351\200\211\344\270\255\351\241\271\357\274\214\344\275\206\347\252\227\345\217\243\346\210\226\346\216\247\344\273\266\346\234\252\350\216\267\345\276\227\347\204\246\347\202\271\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"QListWidget::item:sel"
                        "ected:!active {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: inherit;\n"
"}"));

        verticalLayout->addWidget(listFolders);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnOK = new QPushButton(widget2);
        btnOK->setObjectName("btnOK");
        btnOK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ECC71;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 3px;\n"
"    padding: 8px 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #00A555;\n"
"\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btnOK);

        horizontalLayout_2->setStretch(0, 100);
        horizontalLayout_2->setStretch(1, 20);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(addmusicdialog);

        QMetaObject::connectSlotsByName(addmusicdialog);
    } // setupUi

    void retranslateUi(QDialog *addmusicdialog)
    {
        addmusicdialog->setWindowTitle(QCoreApplication::translate("addmusicdialog", "Dialog", nullptr));
        lblTip->setText(QCoreApplication::translate("addmusicdialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\213\276\351\200\211\351\234\200\350\246\201\346\267\273\345\212\240\347\232\204\346\226\207\344\273\266\345\244\271</span></p></body></html>", nullptr));
        lblTip_2->setText(QCoreApplication::translate("addmusicdialog", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\267\273\345\212\240\346\234\254\345\234\260\351\237\263\344\271\220</span></p></body></html>", nullptr));
        pushButton_close->setText(QString());
        btnAddFolder->setText(QCoreApplication::translate("addmusicdialog", "\346\267\273\345\212\240\346\226\207\344\273\266\345\244\271", nullptr));
        btnOK->setText(QCoreApplication::translate("addmusicdialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addmusicdialog: public Ui_addmusicdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMUSICDIALOG_H
