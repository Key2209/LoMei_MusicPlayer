#ifndef PAGEBUTTON_H
#define PAGEBUTTON_H

#include <QPushButton>
#include <QWidget>
#include <QPixmap>
#include <QGraphicsOpacityEffect>
#include <QTimer>
#include <QRandomGenerator>

class PageButton : public QPushButton
{
    Q_OBJECT
public:
    explicit PageButton(QWidget *parent=nullptr);

    void setIcons(const QPixmap &normal,const QPixmap &hover, const QPixmap &checked);

    //可读性较差,不是很想改了
    //type:0    歌单按钮
    //type:1    推荐/乐馆
    //type:2    歌曲列表里面 的播放按钮
    void setType(int type);
    void setPlayImage();
    bool getChecked();
    QGraphicsOpacityEffect *opacityEffect=nullptr;

    void setVisualChecked(bool yes);

protected:
    void enterEvent(QEnterEvent  *event) override;
    void leaveEvent(QEvent *event) override;


public slots:
    void updateIcon();
void forceUpdateView();
private:

    void type0_update();
    void type1_update();
    void type2_update();
    void type3_update();//like按钮
    QPixmap m_iconNormal;
    QPixmap m_iconHover;
    QPixmap m_iconChecked;
    int type=0;
    bool m_hovered = false;

    QTimer *playAnimTimer=nullptr;
    QVector<int> barHeights;
    bool playing=false;

    void paintEvent(QPaintEvent* event) override;

    // --- 手动绘制所需的新成员 ---
    QColor m_backgroundColor;      // 用于绘制背景的颜色
    QPixmap m_currentIconPixmap;    // 用于手动绘制的当前图标
};

#endif // PAGEBUTTON_H
