#include "myslider.h"

mySlider::mySlider(QWidget *parent):QSlider(parent)//继承自父类QSlider，先调用父类构造函数
{
    setOrientation(Qt::Horizontal);      // 设置为水平滑块
    setCursor(Qt::PointingHandCursor);   // 鼠标悬停显示手掌
    setRange(0, 100);                     // 设置默认范围 0~100
    setValue(0);                          // 初始值为 0
    setPageStep(1);                       // 鼠标滚轮或拖动步长为 1

    // 设置默认样式，QSS 可以覆盖
    // setStyleSheet(R"(
    //     QSlider::groove:horizontal {
    //         height: 6px;               /* 进度条高度 */
    //         background: #c0c0c0;       /* 背景色 */
    //         border-radius: 3px;        /* 圆角 */
    //     }
    //     QSlider::handle:horizontal {
    //         width: 12px;               /* 滑块宽度 */
    //         height: 12px;              /* 滑块高度 */
    //         margin: -3px 0;            /* 居中对齐 */
    //         border-radius: 6px;        /* 圆形滑块 */
    //         background: #ffffff;       /* 滑块颜色 */
    //         border: 2px solid #999999; /* 滑块边框 */
    //     }
    //     QSlider::sub-page:horizontal {
    //         background: #3d9eff;       /* 已播放部分颜色 */
    //         border-radius: 3px;
    //     }
    //     QSlider::add-page:horizontal {
    //         background: #c0c0c0;       /* 未播放部分颜色 */
    //         border-radius: 3px;
    //     }
    //     QSlider::handle:horizontal:hover {
    //         background: #3d9eff;       /* 鼠标悬停 handle 颜色 */
    //         border: 2px solid #3d9eff; /* 鼠标悬停边框 */
    //     }
    // )");

}

void mySlider::paintEvent(QPaintEvent *event)
{
    QSlider::paintEvent(event); // 调用父类绘制，保留 QSS 样式

}

void mySlider::mousePressEvent(QMouseEvent *event)
{

    if (event->button() == Qt::LeftButton) { // 仅处理左键点击
        double ratio = double(event->x()) / width(); // 计算点击比例
        int val = int(ratio * (maximum() - minimum()) + minimum()); // 转换为数值
        setValue(val);         // 设置滑块值
        emit sliderMoved(val); // 发射拖动信号
        emit valueChanged(val);// 发射值改变信号
        event->accept();       // 接受事件，阻止向上传递
    }
    QSlider::mousePressEvent(event); // 其他事件交给父类处理,等于上面代码实现了自己新增的功能,下面要执行父类本来的功能
}
