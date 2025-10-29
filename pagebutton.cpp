#include "pagebutton.h"

#include <QGraphicsOpacityEffect>
#include <QPainter>

/*
一个样式按钮简单的一个类
主要适配左半部分歌单选择，用了一个很蠢的方法简单分了type
暂时够用了，写的很乱，健壮性为九级残废


bug:
1.歌单界面无法停止,有空再修
*/



PageButton::PageButton(QWidget *parent) : QPushButton(parent)
{
    setCheckable(true); // 可选中
    setCursor(Qt::PointingHandCursor);
    setFlat(true); // 去掉边框


    // 关键：当按钮选中/取消选中时(checked:true/false)时候触发toggled
    connect(this, &QPushButton::toggled, this, &PageButton::updateIcon);
    updateIcon();

}


void PageButton::updateIcon()
{

    switch (type) {
    case 0:
        type0_update();
        break;
    case 1:
        type1_update();
        break;
    case 2:
        type2_update();
        break;
    case 3:
        type3_update();
        break;


    default:
        break;
    }




}

void PageButton::type0_update()
{
    if (isChecked()) {
        setIcon(m_iconChecked);

        setStyleSheet(R"(
        background-color:#D8D8D8;
        color: black;

        border-radius: 12px;

        font-size: 16px;
        text-align: left;       /* 文字左对齐 */
        padding-left: 16px;     /* 给图标留空间 */
)");
    } else if (m_hovered) {
        setIcon(m_iconHover);

        setStyleSheet(R"(
        background-color:#E9E9E9;
        color: black;

        border-radius: 12px;

        font-size: 16px;
        text-align: left;       /* 文字左对齐 */
        padding-left: 16px;     /* 给图标留空间 */
)");

    } else {
        setIcon(m_iconNormal);


        setStyleSheet(R"(
        background-color:#F0F0F0;
        color: black;
        border:none;
        font-size: 16px;
        text-align: left;       /* 文字左对齐 */
        padding-left: 16px;     /* 给图标留空间 */

)");

    }


    setIconSize(QSize(24,24)); // 根据图标大小调整
}

void PageButton::type1_update()
{
    if (isChecked()) {
        if(m_hovered)
        {
            setIcon(QIcon());
            if(this->objectName()=="pushButton_recommend")
            {
                setText("乐馆");
            }
            else if(this->objectName()=="pushButton_home")
            {
                setText("推荐");
            }
        }
        else
        {
            setIcon(m_iconChecked);
            setText("");
        }

        setStyleSheet(R"(
            background-color:#D8D8D8;
            color: black;

            border-radius: 12px;

            font-size: 12px;
            )");


    } else if (m_hovered) {
        setIcon(QIcon());
        if(this->objectName()=="pushButton_recommend")
        {
            setText("乐馆");
        }
        else if(this->objectName()=="pushButton_home")
        {
            setText("推荐");
        }

        setStyleSheet(R"(
        background-color:#E9E9E9;
        color: black;

        border-radius: 12px;

        font-size: 12px;

)");
    } else {
        setIcon(m_iconNormal);
        setText("");
        setStyleSheet(R"(
        background-color:#E9E9E9;
        border-radius:12px;
        color: black;
        font-size: 12px;

)");

    }


    setIconSize(QSize(24,24)); // 根据图标大小调整
}

void PageButton::type2_update()//直接写死了，播放按钮专用，不会解耦😭😭😭
{
    if(opacityEffect==nullptr)return;
    if(playAnimTimer==nullptr)return;


//border: 2px solid rgba(255, 255, 255, 120); /* 边框半透明白色 */
    if (isChecked()) {
        if(m_hovered)
        {
            //选中又触摸
            playAnimTimer->stop();
            playing = false;
            setIcon(QPixmap(":/player/images/player/stop_button_green.png"));
        }
        else
        {

            //有bug,先不修先
            playAnimTimer->start(150);
            playing = true;
            setIcon(QPixmap(":/player/images/player/stop_button_white.png"));

        }
        setStyleSheet(R"(
            background-color: rgba(83, 83, 83, 150); /* 背景微微发亮 */
            )");

    }
    else if (m_hovered) {
        playAnimTimer->stop();
        playing = false;
        setIcon(QPixmap(":/player/images/player/play_button_green.png"));
        setStyleSheet(R"(
            background-color: rgba(83, 83, 83, 150); /* 背景微微发亮 */
)");
    }
    else {
        playAnimTimer->stop();
        playing = false;
        setIcon(QPixmap(":/player/images/player/play_button_white.png"));
        setStyleSheet(R"(
        background-color:transparent;

        border:none;
)");

    }


    setIconSize(QSize(24,24)); // 根据图标大小调整
}

void PageButton::type3_update()
{
    if (isChecked()) {
        qDebug()<<"isChecked";
        if(m_hovered)
        {

        }
        else
        {
            setIcon(m_iconChecked);
        }

        // setStyleSheet(R"(
        //     background-color:#D8D8D8;
        //     border-radius: 12px;
        //     font-size: 12px;
        //     )");


    } else if (m_hovered) {
        setIcon(m_iconHover);
//         setStyleSheet(R"(
//         background-color:#E9E9E9;
//         border-radius: 12px;
//         font-size: 12px;

// )");
    } else {
        setIcon(m_iconNormal);
//         setStyleSheet(R"(
//         background-color:#E9E9E9;
//         border-radius:12px;
// )");
    }


    setIconSize(QSize(24,24)); // 根据图标大小调整
}

void PageButton::paintEvent(QPaintEvent *event)
{
    QPushButton::paintEvent(event); // 保留原样式绘制

    if (!playing) return;

    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

    QColor barColor("#FFFFFF"); // 白色
    p.setBrush(barColor);
    p.setPen(Qt::NoPen);

    int barCount = barHeights.size();
    int barWidth = 3;
    int space = 3;
    int startX = width() - (barCount * (barWidth + space))-10; // 靠右一点
    int bottomY = height() -15; // 底部对齐

    for (int i = 0; i < barCount; ++i) {
        int barHeight = height() * barHeights[i] / 100;
        int x = startX + i * (barWidth + space);
        int y = bottomY - barHeight;
        p.drawRoundedRect(QRectF(x, y, barWidth, barHeight), 2, 2);
    }
}



void PageButton::setIcons(const QPixmap &normal, const QPixmap &hover, const QPixmap &checked)
{
    m_iconNormal = normal;
    m_iconHover = hover;
    m_iconChecked = checked;

    updateIcon();//设置完图片自动更新一次
}

void PageButton::setType(int type)
{
    this->type=type;
    if(type==2&&opacityEffect==nullptr)
    {
        opacityEffect = new QGraphicsOpacityEffect(this);

        opacityEffect->setOpacity(0); // 透明度 0~1
        setGraphicsEffect(opacityEffect);

        playAnimTimer=new QTimer(this);
        barHeights.resize(4); // 6根竖条

        connect(playAnimTimer,&QTimer::timeout,this,[=]()
                {
            for (int i = 0; i < barHeights.size(); ++i) {
                // 随机高度，模拟节奏跳动
                barHeights[i] = QRandomGenerator::global()->bounded(5, 50);
            }
            update();
        }
                );

    }
}

bool PageButton::getChecked()
{
    return isChecked();
}

void PageButton::enterEvent(QEnterEvent *event)
{
    m_hovered = true;
    updateIcon();
    QPushButton::enterEvent(event);
}

void PageButton::leaveEvent(QEvent *event)
{
    m_hovered = false;
    updateIcon();
    QPushButton::leaveEvent(event);
}

