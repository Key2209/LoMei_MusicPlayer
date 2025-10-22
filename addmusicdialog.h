#ifndef ADDMUSICDIALOG_H
#define ADDMUSICDIALOG_H

#include <QDialog>
#include <QWidget>
namespace Ui {
class addmusicdialog;
}

class addmusicdialog : public QDialog
{
    Q_OBJECT

public:
    explicit addmusicdialog(QWidget *parent = nullptr);
    ~addmusicdialog();
    QStringList getMusicPath();
private slots:
    void on_btnAddFolder_clicked();

    void on_btnOK_clicked();

private:
    Ui::addmusicdialog *ui;
    QWidget* createFolderItem(const QString &path);


    //重写窗口拖动
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    int dx=0;int dy=0;

};

#endif // ADDMUSICDIALOG_H
