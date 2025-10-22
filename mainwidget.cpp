#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "addmusicdialog.h"
#include <QFile>
#include <QMessageBox>
//#include "mytoolclass.h"
MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);



}

MainWidget::~MainWidget()
{
    delete ui;
}




void MainWidget::on_pushButton_clicked()
{
    qDebug()<<"addmusicdialog";
    addmusicdialog dlg(this);
    dlg.exec();
}


void MainWidget::on_pushButton_2_clicked()
{
    qDebug()<<"hello";
}

