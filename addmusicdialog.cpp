#include "addmusicdialog.h"
#include "ui_addmusicdialog.h"

#include <QCheckBox>
#include <QFileDialog>
#include <QGraphicsDropShadowEffect>
#include <QHBoxLayout>
#include <QMouseEvent>

/*
主要思路:

想要关掉系统自带的顶部窗口,重写拖动窗口,关闭窗口等:
必须将最底层widget变成透明,
//setAttribute(Qt::WA_TranslucentBackground, true);

再拖入一个widget来装所有控件,不然无法制作窗口圆角,会很丑,很多奇奇怪怪的问题,
例如弹簧占位区域的颜色问题(我不知是什么原因)

最主要是QListwidget部分:
1.用代码生成一个widget
2.把widget添加到listwidget的item

点击pushbutton后通过QFileDialog得到路径
生成一个有checkbox,label,pushbutton,弹簧的widget

添加完成后写一个函数:遍历所有item中 widget里面的label,
获得有所有路径qstringList


已知bug:
1.路径复选框背景颜色不对
2.拖动窗口时，点击按钮位置拖动也能拖动，但会很奇怪
3.路径重复问题没有处理


*/



addmusicdialog::addmusicdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addmusicdialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());//固定窗口大小
    ui->listFolders->setSelectionMode(QAbstractItemView::NoSelection);//设置list无法选中item
    connect(ui->pushButton_close, &QPushButton::clicked, this, &QDialog::close);//重做关闭窗口按钮



    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);//去掉系统标题栏



    //允许半透明
    setAttribute(Qt::WA_TranslucentBackground, true);

    // 创建阴影效果
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setBlurRadius(20);              // 阴影模糊度
    shadow->setColor(QColor(0, 0, 0, 100)); // 阴影颜色（带透明度）
    shadow->setOffset(0, 0);                // 阴影偏移（x, y）

    // 应用到最外层widget（你界面中最外层的背景widget）
    ui->widget->setGraphicsEffect(shadow);

}

addmusicdialog::~addmusicdialog()
{
    delete ui;
}

QStringList addmusicdialog::getMusicPath()
{

    QStringList selectedPaths; // 用于保存勾选的路径

    for (int i = 0; i < ui->listFolders->count(); ++i) {

        QListWidgetItem* item=ui->listFolders->item(i);
        QWidget* widget=ui->listFolders->itemWidget(item);
        if (!widget) continue;

        QCheckBox* checkBox=widget->findChild<QCheckBox*>();//找到widget的QCheckBox
        QLabel *label = widget->findChild<QLabel *>();

        // 如果都找到了
        if (checkBox && label)
        {
            // 判断是否勾选
            if (checkBox->isChecked())
            {
                // 添加路径文字到结果列表
                selectedPaths << label->text();
            }
        }
    }


    qDebug()<<selectedPaths;
    return selectedPaths;

}



void addmusicdialog::on_btnAddFolder_clicked()
{
    QString folder=QFileDialog::getExistingDirectory(this,"选择音乐文件夹");//获得用户选择的路径
    if(folder.isEmpty())return;

    QListWidgetItem *item=new QListWidgetItem(ui->listFolders);//在listFolders添加一行用来显示路径

    QWidget *widget = createFolderItem(folder);

    //将widget添加到item
    item->setSizeHint(QSize(0, 40));
    ui->listFolders->addItem(item);
    ui->listFolders->setItemWidget(item, widget);

}

QWidget *addmusicdialog::createFolderItem(const QString &path)
{
    QWidget* widget=new QWidget();
    widget->setObjectName("folderItem");
    widget->setStyleSheet(
        R"(
        QWidget#folderItem {
            background-color: #F5F5F5;
            border-radius: 10px;
            border: 1px solid #e0e0e0;
        }
        QWidget#folderItem:hover {
            background-color: #F5F5F5;
        }
        )"
        );


    QHBoxLayout *layout = new QHBoxLayout(widget);//水平布局
    layout->setContentsMargins(10, 4, 10, 4);
    layout->setSpacing(4);

    // ✅ 勾选框
    QCheckBox *checkBox = new QCheckBox();
    checkBox->setChecked(true);

    checkBox->setStyleSheet(R"(


QCheckBox {
    spacing: 0px;
}

QCheckBox::indicator {
    /* 2. 默认状态（未勾选） */
    width: 16px;
    height: 16px;
    border: 2px solid #aaaaaa; /* 边框为灰色 */
    border-radius: 8px;        /* 轻微圆角 */
    background-color: #F5F5F5; /* 默认白色背景 */
}

QCheckBox::indicator:hover {
    /* 鼠标悬停但未勾选时：边框颜色变深 */
    border-color: #555555;
}

QCheckBox::indicator:checked {
    /* 3. 选中状态：设置颜色 */
    background-color: #1ECC94;
    border-color: #1ECC94;
    width: 16px;
    height: 16px;

    border-radius: 8px;        /* 轻微圆角 */

}

)");

    //显示路径
    QLabel *lblPath=new QLabel(path);
    lblPath->setStyleSheet("color:#333; font-size:14px;");
    lblPath->setTextInteractionFlags(Qt::TextSelectableByMouse);//设置文字可以被鼠标选中
    lblPath->setToolTip(path);//设置鼠标悬停查看信息-完整路径信息


    //删除按钮
    QPushButton *btnRemove = new QPushButton("x");
    btnRemove->setFixedSize(24, 24);
    btnRemove->setCursor(Qt::PointingHandCursor);
    btnRemove->setStyleSheet(R"(
        QPushButton {
            background: transparent;
            color: #aaa;
            font-size: 18px;
            border: none;
            font-weight: bold;
        }
        QPushButton:hover {
            color: #e74c3c;
        }
    )");
    connect(btnRemove,&QPushButton::clicked,[this,widget]()
            {

                //遍历listwidget中的所有元素，将当前的item删掉
                for (int i = 0; i < ui->listFolders->count(); ++i) {

                    QListWidgetItem *item = ui->listFolders->item(i);//获得列表中第i个元素的指针


                    //根据这个指针找到对应的widget，一样则删除
                    if (ui->listFolders->itemWidget(item) == widget) {
                        delete ui->listFolders->takeItem(i);
                        break;
                    }
                }


            });


    layout->addWidget(checkBox);
    layout->addWidget(lblPath);
    layout->addStretch();
    layout->addWidget(btnRemove);
    return widget;


}

void addmusicdialog::mousePressEvent(QMouseEvent *event)
{
    QDialog::mousePressEvent(event);
}


void addmusicdialog::mouseReleaseEvent(QMouseEvent *event)
{
    dx = 0;
    dy = 0;
    QWidget::mouseReleaseEvent(event);
}

void addmusicdialog::mouseMoveEvent(QMouseEvent *event)
{
    QWidget *child = childAt(event->position().toPoint());
    qDebug()<<"child"<<child;
    if(child)qDebug()<<"childyyyyyyyyyy"<<child;

    // qDebug()<<"mouse"<<event->position().x()<<event->position().y();
    // qDebug()<<"dx dy"<<dx<<dy<<event->button();

    if(event->buttons()==Qt::LeftButton)
    {
        QWidget *child = childAt(event->position().toPoint());
        qDebug()<<"child"<<child;
        if(child)qDebug()<<"childyyyyyyyyyy"<<child;
        //qDebug()<<"left"<<event->position().x()<<event->position().y();
        if(dx==0&&dy==0)
        {
            dx=event->position().x();
            dy=event->position().y();

        }
        else
        {
            // 判断点击的是否是空白区域（不是子控件）
            move(event->globalPosition().x() - dx,
                 event->globalPosition().y() - dy
                 );
            return;
        }
    }
    QDialog::mouseMoveEvent(event);
}


void addmusicdialog::on_btnOK_clicked()
{
    QStringList list=getMusicPath();
    this->close();

}

