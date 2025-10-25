#include "pagebutton.h"

/*
一个样式按钮简单的一个类
主要适配左半部分歌单选择，用了一个很蠢的方法简单分了type
暂时够用了，写的很乱，健壮性为九级残废

*/



PageButton::PageButton(QWidget *parent) : QPushButton(parent)
{
    setCheckable(true); // 可选中
    setCursor(Qt::PointingHandCursor);
    setFlat(true); // 去掉边框
    //setStyleSheet("text-align:left; padding-left:40px;"); // 左边给图片留空间


    // 关键：当按钮选中/取消选中时(checked:true/false)时候触发toggled
    connect(this, &QPushButton::toggled, this, &PageButton::updateIcon);


}


void PageButton::updateIcon()
{


    if(type==0)
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




    else if(type==1)
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
}



void PageButton::setIcons(const QPixmap &normal, const QPixmap &hover, const QPixmap &checked)
{
    m_iconNormal = normal;
    m_iconHover = hover;
    m_iconChecked = checked;


    updateIcon();
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

