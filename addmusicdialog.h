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
signals:
    // 定义一个信号，用于发送用户选择的路径
    void sendPath(const QStringList &pathList);


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
    QPoint m_dragOffset;     // 鼠标按下时，鼠标位置与窗口左上角的偏移量
    bool m_isDragging = false; // 拖动状态标志

};

#endif // ADDMUSICDIALOG_H
