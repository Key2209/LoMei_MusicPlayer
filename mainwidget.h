#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include "music_widget.h"

#include <MusicController.h>
#include <MusicManage.h>
#include <PageButton.h>
#include <QWidget>


//标记鼠标位置
enum DragRegion {
    NoResize = 0, // 不在边缘区域
    Left = 1,
    Right = 2,
    Top = 3,
    Bottom = 4,
    TopLeft = 5,
    TopRight = 6,
    BottomLeft = 7,
    BottomRight = 8
};




QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    MusicManage *musicManager=nullptr;


private slots:
    void on_pushButton_clicked();
    void createPlaylist(PageButton *button);
    void switchPlaylist(PageButton *button);

signals:
    void windowMaximizedStateChanged(bool isMaximized);//窗口最大化时候通知顶部ui切换图标

protected:
    //重写窗口拖动
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    QPoint m_dragOffset;     // 鼠标按下时，鼠标位置与窗口左上角的偏移量
    bool m_isDragging = false; // 拖动状态标志

    void changeEvent(QEvent *event) override;//重写，捕获窗口变化


    // 窗口缩放相关的变量
    DragRegion m_dragRegion = NoResize; // 当前拖动区域
    QPointF m_startPos;                  // 鼠标按下时的全局位置
    QRect m_startGeometry;              // 鼠标按下时窗口的几何尺寸
    const int BORDER_WIDTH = 5;         // 判定为边缘的宽度（像素）
    bool m_isResizing = false;
    DragRegion getResizeRegion(const QPoint &point);
    void setCursorShape(DragRegion region);


private:
    Ui::MainWidget *ui;
    void connectUI();
    void widgetInit();

    void MusicInit();
    void addSong(Songstruct song,music_widget *widget);

    MusicController *m_controller =nullptr;


};
#endif // MAINWIDGET_H
