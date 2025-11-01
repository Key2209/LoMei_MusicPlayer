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
    ui->pushButton_home->setType(1);
    ui->pushButton_home->updateIcon();
    ui->pushButton_recommend->setIcons(QPixmap(":/player/images/player/recommend.png"),
                                  QPixmap(":/player/images/player/recommend.png"),
                                  QPixmap(":/player/images/player/recommend_black.png")
                                  );
    ui->pushButton_recommend->setType(1);
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

    //ui->pushButton_home->setObjectName("pushButton_home");
    ui->pushButton_home->setProperty("dispalyname","pushButton_home");

    //ui->pushButton_recommend->setObjectName("pushButton_recommend");
    ui->pushButton_recommend->setProperty("dispalyname","pushButton_recommend");

    //ui->pushButton_like->setObjectName("pushButton_like");
    ui->pushButton_like->setProperty("dispalyname","pushButton_like");

    //ui->pushButton_history->setObjectName("pushButton_history");
    ui->pushButton_history->setProperty("dispalyname","pushButton_history");


    //ui->pushButton_download->setObjectName("pushButton_download");
    ui->pushButton_download->setProperty("dispalyname","pushButton_download");


    buttonGroup = new QButtonGroup(this);
    buttonGroup->setExclusive(true);
    buttonGroup->addButton(ui->pushButton_home,0);
    buttonGroup->addButton(ui->pushButton_recommend, 1);
    buttonGroup->addButton(ui->pushButton_like, 2);
    buttonGroup->addButton(ui->pushButton_history, 3);
    buttonGroup->addButton(ui->pushButton_download, 4);

    //切换页面connect
    //

    /*
     * QOverload<QAbstractButton*, bool>重载
     * 因为&QButtonGroup::buttonToggled:
        void buttonToggled(QAbstractButton *button, bool checked);
        void buttonToggled(int id, bool checked);

     *
     *
     */
    connect(buttonGroup, QOverload<QAbstractButton*, bool>::of(&QButtonGroup::buttonToggled),
            this, [=](QAbstractButton *button, bool checked) {
                if (checked) {
                    // 只有被选中的时候才触发
                    PageButton *pageBtn = qobject_cast<PageButton*>(button);
                    if (pageBtn) {
                        emit switch_playList(pageBtn);  // 通知主界面切换右侧页面
                    }
                }
            });


    ui->pushButton_like->setChecked(true);


    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//关掉滑条
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setStyleSheet(
        "QScrollBar:vertical {"
        "    background: transparent;"
        "    width: 5px;"
        "    margin: 0px;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background:rgba(216, 216, 216, 0.3);"  // 半透明
        "    border-radius: 5px;"
        "    min-height: 20px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "    background: rgba(216, 216, 216, 0.5);"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "    height: 0px;"
        "}"
        );


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


            playlists.append(btn);//加入歌单按钮列表



            //GPT说这样写好
            btn->setObjectName(QString("playlist_%1").arg(QUuid::createUuid().toString(QUuid::WithoutBraces)));
            //设置业务层信息 —— 你自己定义的属性，用于逻辑处理或显示,查找控件也可以用，
            btn->setProperty("displayName", name);   // 显示名（中文、符号都没问题）

            emit new_playList(btn);

            // 自动选中新建的按钮
            btn->setChecked(true);
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
