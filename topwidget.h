#ifndef TOPWIDGET_H
#define TOPWIDGET_H

#include <QWidget>

namespace Ui {
class topWidget;
}

class topWidget : public QWidget
{
    Q_OBJECT
signals:
    void exitRequested();//关闭按钮，发出信号关闭程序
    void minRequested();
    void maxRequested();

    void goBackRequested();
    void goAheadRequested();

public:
    explicit topWidget(QWidget *parent = nullptr);
    ~topWidget();

    void updateMaxIcon(bool isMaximized);//切换 最大化/复原 图标

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_max_clicked();

    void on_pushButton_min_clicked();

    void on_pushButton_ahead_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::topWidget *ui;
};

#endif // TOPWIDGET_H
