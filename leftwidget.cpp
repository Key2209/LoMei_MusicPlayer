#include "leftwidget.h"
#include "ui_leftwidget.h"
#include "pagebutton.h"

#include <QButtonGroup>
#include <QLineEdit>
#include <QUuid>

/*
利用自定义的pagebutton,生成一个互斥的按钮组(能选中,而且只能选中一个)

知识点:
1.事件过滤器:控件在接收到事件QEvent时候,把他交给this处理,因为lineEdit没有对应的信号所以自己写
lineEdit->installEventFilter(this);//安装事件过滤器
bool leftwidget::eventFilter(QObject *watched, QEvent *event)
watched
发生事件的对象。这里会是 lineEdit（或者其他安装了事件过滤器的对象）。
event
事件对象，类型是 QEvent。可以通过 event->type() 判断事件类型，比如焦点事件、鼠标事件等。




 */















leftwidget::leftwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::leftwidget)
{
    ui->setupUi(this);

    ui->pushButton_home->setIcons(QPixmap(":/player/images/player/home.png"),
                                  QPixmap(":/player/images/player/home.png"),
                                  QPixmap(":/player/images/player/home_black.png")
                                  );
    ui->pushButton_home->type=1;
    ui->pushButton_home->updateIcon();
    ui->pushButton_recommend->setIcons(QPixmap(":/player/images/player/recommend.png"),
                                  QPixmap(":/player/images/player/recommend.png"),
                                  QPixmap(":/player/images/player/recommend_black.png")
                                  );
    ui->pushButton_recommend->type=1;
    ui->pushButton_recommend->updateIcon();
    ui->pushButton_like->setIcons(QPixmap(":/player/images/player/like_left.png"),
                                  QPixmap(":/player/images/player/like_left.png"),
                                  QPixmap(":/player/images/player/like_left_black.png")
                                  );
    ui->pushButton_history->setIcons(QPixmap(":/player/images/player/time.png"),
                                     QPixmap(":/player/images/player/time.png"),
                                     QPixmap(":/player/images/player/time_black.png")
                                     );
    ui->pushButton_download->setIcons(QPixmap(":/player/images/player/download.png"),
                                      QPixmap(":/player/images/player/download.png"),
                                      QPixmap(":/player/images/player/download_black.png")
                                      );




    buttonGroup = new QButtonGroup(this);
    buttonGroup->setExclusive(true);
    buttonGroup->addButton(ui->pushButton_home,0);
    buttonGroup->addButton(ui->pushButton_recommend, 1);
    buttonGroup->addButton(ui->pushButton_like, 2);
    buttonGroup->addButton(ui->pushButton_history, 3);
    buttonGroup->addButton(ui->pushButton_download, 4);
    ui->pushButton_like->setChecked(true);

}

leftwidget::~leftwidget()
{
    delete ui;
}
void leftwidget::on_btnAddPlaylist_clicked()
{
    if(isCreatingList)return;//防止生成多个 "新建歌单"



    //获取 scrollArea 的内容容器和布局
    QWidget *container = ui->scrollArea->widget();
    qDebug()<<container;
    if (!container) return;
    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(container->layout());
    qDebug()<<layout;

    if (!layout) {
        layout = new QVBoxLayout(container);
        layout->setAlignment(Qt::AlignTop);  // 顶部对齐
    }

    //创建 QLineEdit 用于输入歌单名
    QLineEdit *lineEdit = new QLineEdit;
    lineEdit->installEventFilter(this);
    lineEdit->setPlaceholderText("输入歌单名后回车");
    isCreatingList=true;
    //lineEdit->setMaximumHeight(70);//
    lineEdit->setMinimumSize(200,50);
    lineEdit->setMaximumSize(200,50);
    lineEdit->setStyleSheet(R"(
        background-color:#D8D8D8;
        border-radius:12px;
        )");
    layout->insertWidget(0, lineEdit); // 插入到“新建歌单 widget”下方
    lineEdit->setFocus(); // 自动获得光标

    //处理回车事件，生成 PageButton
    connect(lineEdit, &QLineEdit::returnPressed, this, [=]() {
        QString name = lineEdit->text().trimmed();
        if (!name.isEmpty()) {
            // 创建新的 PageButton
            PageButton *btn = new PageButton();
            btn->setText("  "+name);
            btn->setCheckable(true);
            btn->setIcons(QPixmap(":/player/images/player/joey.jpg"),
                          QPixmap(":/player/images/player/joey.jpg"),
                          QPixmap(":/player/images/player/joey.jpg"));

            btn->setMinimumSize(200,50);
            btn->setMaximumSize(200,50);
            // 插入到 QLineEdit 位置
            int index = layout->indexOf(lineEdit);
            layout->insertWidget(index, btn);

            //加入互斥按钮组
            buttonGroup->addButton(btn);
            // 自动选中新建的按钮
            btn->setChecked(true);


            //GPT说这样写好
            btn->setObjectName(QString("playlist_%1").arg(QUuid::createUuid().toString(QUuid::WithoutBraces)));
            //设置业务层信息 —— 你自己定义的属性，用于逻辑处理或显示,查找控件也可以用，
            btn->setProperty("displayName", name);   // 显示名（中文、符号都没问题）

            emit new_playList(btn);
            connect(btn,&PageButton::isChecked,this,[=]()
                    {
                emit switch_playList(btn);
            });
        }


        // 删除 QLineEdit
        lineEdit->deleteLater();
        isCreatingList=false;
    });



}

bool leftwidget::eventFilter(QObject *watched, QEvent *event)
{
    QLineEdit *lineEdit= qobject_cast<QLineEdit*>(watched);
    if(lineEdit&&event->type()==QEvent::FocusOut)
    {

        if (lineEdit->text().trimmed().isEmpty())
        {
            lineEdit->deleteLater();
            isCreatingList=false;
        }


    }
    return QWidget::eventFilter(watched, event);
}



// QWidget *container = ui->scrollArea->widget(); // scrollArea 内部容器
// if (!container) return;

// // 遍历所有 PageButton，匹配属性
// PageButton *target = nullptr;
// for (auto btn : container->findChildren<PageButton*>()) {
//     if (btn->property("displayName").toString() == "最爱的歌") {
//         target = btn;
//         break;
//     }
// }

// if (target) {
//     target->setChecked(true);
//     qDebug() << "找到歌单按钮:" << target->property("displayName").toString()
//              << "objectName:" << target->objectName();
// } else {
//     qDebug() << "没找到这个歌单";
// }
