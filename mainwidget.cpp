#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "addmusicdialog.h"
#include <QFile>
#include <QGraphicsDropShadowEffect>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPushButton>


/*
已知bug:
1.最大化窗口后拖动,窗口缩小,但鼠标位置会很奇怪


 */
MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    m_controller =new MusicController(this);//音乐控制类初始化,掌管所有音乐播放功能



    MusicInit();//初始化下载歌单加载本地歌单
    widgetInit();//初始化几个固定的歌单
    connectUI();
}

MainWidget::~MainWidget()
{
    delete ui;
}




void MainWidget::on_pushButton_clicked()
{
    //qDebug()<<"addmusicdialog";
    addmusicdialog dlg(this);
    dlg.exec();
}

void MainWidget::createPlaylist(PageButton *button)
{
    music_widget* musicWidget=new music_widget;

    QString displayName=button->property("displayName").toString();
    musicWidget->setPlaylistName(displayName);//设置歌单名字

    QString objName=button->objectName();//设置页面object名字
    musicWidget->setObjectName(objName);



    ui->stackedWidget_music->addWidget(musicWidget);
    //qDebug()<<musicWidget;
}

void MainWidget::switchPlaylist(PageButton *button)
{

    QString objName=button->objectName();//设置页面object名字

    music_widget *page=ui->stackedWidget_music->findChild<music_widget*>(objName);

    if(page)
    {
        ui->stackedWidget_music->setCurrentWidget(page);
        //qDebug()<<objName;
    }



}



void MainWidget::connectUI()
{
    //重写窗口控制按钮 绑定
    connect(ui->top_window,&topWidget::exitRequested,this,&QApplication::quit);
    connect(ui->top_window,&topWidget::minRequested,this,&QWidget::showMinimized);
    connect(ui->top_window,&topWidget::maxRequested,this,[=]{
        if(this->isMaximized()){
            this->showNormal();
        }else{
            this->showMaximized();
        }
    });

    //当前窗口 发出"窗口改变信号" 顶部窗口接收并调用更新图标函数
    connect(this,&MainWidget::windowMaximizedStateChanged,ui->top_window,&topWidget::updateMaxIcon);





    //新建/切换歌单等
    connect(ui->left_widget,&leftwidget::new_playList,this,&MainWidget::createPlaylist);
    connect(ui->left_widget,&leftwidget::switch_playList,this,&MainWidget::switchPlaylist);





    // 让底部 playerbar 订阅 Controller
    connect(m_controller, &MusicController::currentSongChanged, ui->ctlr_music_widget, &playerControlWidget::setCurrentSong);
    connect(m_controller, &MusicController::positionChanged, ui->ctlr_music_widget, &playerControlWidget::setPosition);
    connect(m_controller, &MusicController::durationChanged, ui->ctlr_music_widget, &playerControlWidget::setDuration);
    connect(m_controller, &MusicController::sendPlayStateChangeTo_PlayerctrlWidge, ui->ctlr_music_widget, &playerControlWidget::ReceivePlayStateChange);

    //connect(ui->ctlr_music_widget, &playerControlWidget::startMusic, m_controller, &MusicController::isPlay);
    connect(ui->ctlr_music_widget, &playerControlWidget::seekRequested, m_controller, &MusicController::seek);
    connect(ui->ctlr_music_widget, &playerControlWidget::nextClicked, m_controller, &MusicController::playNext);
    connect(ui->ctlr_music_widget, &playerControlWidget::prevClicked, m_controller, &MusicController::playPrevious);
    connect(ui->ctlr_music_widget, &playerControlWidget::startMusic, m_controller, &MusicController::access_UiCommandToStartMusic);
    connect(ui->ctlr_music_widget, &playerControlWidget::volumeRequested, m_controller, &MusicController::setVolume);

    // music_widget *musicWidget=ui->stackedWidget_music->findChild<music_widget*>("pushButton_download");
    // connect(musicWidget,&music_widget::songPlayRequested,m_controller,&MusicController::playSong);//连接"本地和下载"歌单与m_controller
}

void MainWidget::widgetInit()
{
    //重写窗口
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);//去掉系统标题栏
    //允许半透明
    setAttribute(Qt::WA_TranslucentBackground, true);
    // 创建阴影效果
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setBlurRadius(10);              // 阴影模糊度
    shadow->setColor(QColor(0, 0, 0, 100)); // 阴影颜色（带透明度）
    shadow->setOffset(0, 0);                // 阴影偏移（x, y）

    // 应用到最外层widget（你界面中最外层的背景widget）,实际上已设置透明
    ui->widget_realwindow->setGraphicsEffect(shadow);

    this->setMouseTracking(true);//时刻追踪鼠标,时刻触发mousemoveevent,不然鼠标触控到控件不会追踪(moveEvent)
    for (QWidget* &child : findChildren<QWidget*>()) {
        child->setMouseTracking(true);
    }


    //初始化喜欢,最近播放,本地和下载界面
    QVector<QString> musicWidgetName={"pushButton_history","pushButton_home","pushButton_recommend"};
    QVector<QString> listName={"最近播放","推荐","乐馆"};
    int count = qMin(musicWidgetName.size(), listName.size());
    for (int i = 0; i < count; ++i)
    {
        music_widget* musicWidget = new music_widget;
        musicWidget->setPlaylistName(listName[i]);  // 设置中文歌单名字
        musicWidget->setObjectName(musicWidgetName[i]); // 设置对象名
        ui->stackedWidget_music->addWidget(musicWidget);
        qDebug() << "创建:" << musicWidgetName[i] << "=>" << listName[i];
    }

    music_widget* musicWidget = new music_widget;
    musicWidget->setPlaylistName("本地和下载");  // 设置中文歌单名字
    musicWidget->setObjectName("pushButton_download"); // 设置对象名
    ui->stackedWidget_music->addWidget(musicWidget);
    bool ok = connect(musicWidget, &music_widget::sendPathToAddSong,
                      musicManager, &MusicManage::scanDirectoryAsync);

    qDebug() << "连接状态:" << ok
             << "musicWidget:" << musicWidget
             << "musicManager:" << musicManager;


    connect(musicWidget,&music_widget::songPlayRequested,m_controller,&MusicController::playSong);//连接 歌单与m_controller 的播放音乐功能
    connect(musicWidget,&music_widget::songListPlayRequested,m_controller,&MusicController::setPlaylist);//连接 歌单与m_controller 添加歌单
}

void MainWidget::MusicInit()
{
    musicManager=new MusicManage(this);
    // connect(musicManager, &MusicManage::metadataReady, this, [=](const Songstruct &song) {
    //     // 比如更新 UI 或存入 QVector
    //     qDebug() << "Metadata ready:" << song.title << song.duration << song.artist;
    //     // 例如更新歌曲 widget：
    //     // songwidget *w = findWidgetById(song.id);
    //     // if (w) musicManage->setSongWidgetInfo(song, *w);
    // });
    connect(musicManager, &MusicManage::metadataReady, this, [=](const Songstruct &song,music_widget *widget) {

        qDebug() << "Metadata ready:" << song.title << song.duration << song.artist;
        Songstruct s=song;
        widget->addSong(s);

    });
}

// void MainWidget::addSong(Songstruct song, music_widget *widget)
// {
//     if(widget!=nullptr)
//     {
//         connect(musicManager,&MusicManage::metadataReady,widget,&music_widget::addSong);
//     }
// }




DragRegion MainWidget::getResizeRegion(const QPoint &point)
{
    int x=point.x();
    int y=point.y();
    int w=width();
    int h=height();
    int bw=BORDER_WIDTH;

    // 检查四个角
    if (x < bw && y < bw) return TopLeft;
    if (x > w - bw && y < bw) return TopRight;
    if (x < bw && y > h - bw) return BottomLeft;
    if (x > w - bw && y > h - bw) return BottomRight;

    // 检查四条边
    if (x < bw) return Left;
    if (x > w - bw) return Right;
    if (y < bw) return Top;
    if (y > h - bw) return Bottom;

    return NoResize; // 不在边缘区域

}

void MainWidget::setCursorShape(DragRegion region)
{
    Qt::CursorShape shape=Qt::ArrowCursor;

    switch (region) {
    case Top:
    case Bottom:
        shape = Qt::SizeVerCursor;
        break;
    case Left:
    case Right:
        shape = Qt::SizeHorCursor;
        break;
    case TopLeft:
    case BottomRight:
        shape = Qt::SizeFDiagCursor;
        break;
    case TopRight:
    case BottomLeft:
        shape = Qt::SizeBDiagCursor;
        break;
    default:
        break; // 保持默认箭头
    }
    setCursor(shape);
}


void MainWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {

        //缩放窗口逻辑
        //判断是否在边缘



        if(!this->isMaximized())//最大化时候不能缩放
        {

            m_dragRegion=getResizeRegion(event->pos());
            if(m_dragRegion!=NoResize)
            {
                m_isResizing = true;   // 锁定缩放状态
                m_isDragging = false; // 确保移动状态被清除
                m_startPos=event->globalPosition();//鼠标点击时候的位置
                m_startGeometry=geometry();//当前窗口的大小
                event->accept();
                return;
            }
        }




        //拖动窗口逻辑
        // 检查点击位置是否有子控件
        QWidget *child = childAt(event->pos());
        //qDebug()<<"child"<<child;
        // 如果 child 不为 nullptr，说明点击在了某个子控件上。
        // 如果您想允许在除了按钮/列表之外的区域拖动，
        // 您需要检查 child 是否是交互控件（如 QPushButton, QListWidget）
        if(!(qobject_cast<QPushButton*>(child)))
        {
            m_isDragging = true;
            m_isResizing = false;   // 锁定缩放状态

            m_dragRegion = NoResize; // 确保缩放状态被清除
            // 计算鼠标按下时的全局位置与窗口左上角位置的偏移
            m_dragOffset = event->globalPosition().toPoint() - frameGeometry().topLeft();

            event->accept();
            return;
        }
    }

    QWidget::mousePressEvent(event);
}
void MainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    m_isDragging = false; // 鼠标抬起时，结束拖动
    m_isResizing = false;
    m_dragRegion = NoResize;
    setCursorShape(getResizeRegion(event->pos()));//在边缘时候改变光标
    QWidget::mouseReleaseEvent(event);
}


void MainWidget::mouseMoveEvent(QMouseEvent *event)
{
    //qDebug()<<"mouseMoveEvent:"+QString::number((int)m_dragRegion);

    //qDebug()<<"m_isDragging"<<m_isDragging;
    // //m_dragRegion=getResizeRegion(event->pos());
    if(!this->isMaximized()&&m_dragRegion == NoResize)
    {
        setCursorShape(getResizeRegion(event->pos()));//在边缘时候改变光标
    }



    // 1. 正在缩放
    if (m_isResizing&&m_dragRegion != NoResize&& (event->buttons() & Qt::LeftButton)) {
        QPointF delta = event->globalPosition() - m_startPos;//当前鼠标在屏幕上位置-第一次点击时候的位置
        QRect newGeometry = m_startGeometry;

        // 根据拖动区域调整新的几何尺寸
        switch (m_dragRegion)
        {
        case TopLeft:
            newGeometry.setTop(m_startGeometry.top() + delta.y());
            newGeometry.setLeft(m_startGeometry.left() + delta.x());
            break;
        case TopRight:
            newGeometry.setTop(m_startGeometry.top() + delta.y());
            newGeometry.setRight(m_startGeometry.right() + delta.x());
            break;
        case BottomLeft:
            newGeometry.setBottom(m_startGeometry.bottom() + delta.y());
            newGeometry.setLeft(m_startGeometry.left() + delta.x());
            break;
        case BottomRight:
            newGeometry.setBottom(m_startGeometry.bottom() + delta.y());
            newGeometry.setRight(m_startGeometry.right() + delta.x());
            break;
        case Left:
            newGeometry.setLeft(m_startGeometry.left() + delta.x());
            break;
        case Right:
            newGeometry.setRight(m_startGeometry.right() + delta.x());
            break;
        case Top:
            newGeometry.setTop(m_startGeometry.top() + delta.y());
            break;
        case Bottom:
            newGeometry.setBottom(m_startGeometry.bottom() + delta.y());
            break;
        default:
            break;
        }

        // 🚧 修正逻辑：防止缩放到最小尺寸时窗口被推走
        if (newGeometry.width() < minimumWidth())
        {
            int diff = minimumWidth() - newGeometry.width();

            // 如果是从左侧缩放，则抵消 X 方向移动
            if (m_dragRegion == Left || m_dragRegion == TopLeft || m_dragRegion == BottomLeft)
                newGeometry.setLeft(newGeometry.left() - diff);

            newGeometry.setWidth(minimumWidth());
        }

        if (newGeometry.height() < minimumHeight())
        {
            int diff = minimumHeight() - newGeometry.height();

            // 如果是从上方缩放，则抵消 Y 方向移动
            if (m_dragRegion == Top || m_dragRegion == TopLeft || m_dragRegion == TopRight)
                newGeometry.setTop(newGeometry.top() - diff);

            newGeometry.setHeight(minimumHeight());
        }

        setGeometry(newGeometry);
        event->accept();
        return;
    }
    // 只有在左键按下且处于拖动状态时才执行移动
    else if (event->buttons() & Qt::LeftButton && m_isDragging) {


        if(this->isMaximized())//窗口最大化时候拖动,先要把窗口缩小
        {
            this->showNormal();
            emit windowMaximizedStateChanged(false);
        }
        else
        {
            // 移动窗口到新位置,move():把窗口的左上角移动到()
            move(event->globalPosition().toPoint() - m_dragOffset);
        }




        event->accept();
        return;
    }

    QWidget::mouseMoveEvent(event);
}


void MainWidget::changeEvent(QEvent *event)
{
    // 检查事件类型是否是窗口状态改变
    if (event->type() == QEvent::WindowStateChange) {
        // 发送信号，报告当前窗口是否处于最大化状态
        emit windowMaximizedStateChanged(this->isMaximized());
    }
    QWidget::changeEvent(event);
}
