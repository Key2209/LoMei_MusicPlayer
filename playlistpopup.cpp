// #include "PlaylistPopup.h"
// #include <QMouseEvent>
// #include <QPainter>
// #include <QPropertyAnimation>

// PlaylistPopup::PlaylistPopup(QWidget *parent)
//     : QFrame(parent)
// {
//     // ✅ 基础外观设置
//     setWindowFlags(Qt::Popup | Qt::FramelessWindowHint);
//     setAttribute(Qt::WA_TranslucentBackground);
//     setFixedWidth(240);

//     // ✅ 添加淡入动画
//     auto *opacity = new QGraphicsOpacityEffect(this);
//     setGraphicsEffect(opacity);
//     auto *fadeIn = new QPropertyAnimation(opacity, "opacity");
//     fadeIn->setDuration(180);
//     fadeIn->setStartValue(0.0);
//     fadeIn->setEndValue(1.0);
//     fadeIn->start(QAbstractAnimation::DeleteWhenStopped);

//     // ✅ 阴影卡片容器
//     auto *mainFrame = new QFrame(this);
//     mainFrame->setObjectName("mainFrame");
//     mainFrame->setStyleSheet(R"(
//         #mainFrame {
//             background-color: rgba(255, 255, 255, 235);
//             border-radius: 14px;
//         }
//     )");

//     QVBoxLayout *outer = new QVBoxLayout(this);
//     outer->setContentsMargins(8, 8, 8, 8);
//     outer->addWidget(mainFrame);

//     QVBoxLayout *layout = new QVBoxLayout(mainFrame);
//     layout->setContentsMargins(0, 6, 0, 6);

//     // ✅ 列表样式
//     listWidget = new QListWidget(mainFrame);
//     listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//     listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//     listWidget->setFocusPolicy(Qt::NoFocus);
//     listWidget->setStyleSheet(R"(
//         QListWidget {
//             background: transparent;
//             outline: none;
//         }
//         QListWidget::item {
//             height: 40px;
//             border-radius: 10px;
//             padding-left: 14px;
//             color: #2e2e2e;
//             font-size: 14px;
//             font-family: "Microsoft YaHei";
//         }
//         QListWidget::item:hover {
//             background-color: #eaf8f4;   /* 微浅绿色 */
//             color: #1db954;              /* Spotify / QQ绿 */
//             font-weight: 600;
//         }

//     )");
//     layout->addWidget(listWidget);

//     // ✅ 柔和阴影
//     // auto *shadow = new QGraphicsDropShadowEffect(this);
//     // shadow->setBlurRadius(25);
//     // shadow->setColor(QColor(0, 0, 0, 40));
//     // shadow->setOffset(0, 6);
//     // mainFrame->setGraphicsEffect(shadow);

//     // ✅ 点击项目信号
//     connect(listWidget, &QListWidget::itemClicked, this, [=](QListWidgetItem *item) {
//         emit playlistSelected(item->text());
//         close();
//     });
// }




// void PlaylistPopup::setPlaylists(const QStringList &names)
// {
//     listWidget->clear();
//     for (const QString &name : names) {
//         QListWidgetItem *item = new QListWidgetItem("🎵  " + name);
//         listWidget->addItem(item);
//     }

//     // // 自动调节高度（每项40px + 内边距）
//     // int height = names.size() * 40 + 24;
//     // setFixedHeight(qMin(height, 320)); // 最多显示8个
// }




#include "PlaylistPopup.h"
#include <QMouseEvent>
#include <QPainter>
#include <QGraphicsDropShadowEffect>

PlaylistPopup::PlaylistPopup(QWidget *parent)
    : QFrame(parent)
{
    // 设置为 popup，无边框
    setWindowFlags(Qt::Popup | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setObjectName("PlaylistPopup");
    setStyleSheet("QFrame#PlaylistPopup { background: transparent; border: none; }");

    setFixedWidth(150);

    // 外层布局：透明
    QVBoxLayout *outerLayout = new QVBoxLayout(this);
    outerLayout->setContentsMargins(0, 0, 0, 0);
    outerLayout->setSpacing(0);

    // 中间白色圆角卡片
    QWidget *mainFrame = new QWidget(this);
    mainFrame->setObjectName("mainFrame");
    mainFrame->setStyleSheet(R"(
        QWidget#mainFrame {
            background-color: white;
            border-radius: 8px;
        }
    )");

    // 添加阴影
    auto *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setBlurRadius(15);
    shadow->setOffset(0, 5);
    shadow->setColor(QColor(0, 0, 0, 60));
    mainFrame->setGraphicsEffect(shadow);

    // 播放列表
    QVBoxLayout *innerLayout = new QVBoxLayout(mainFrame);
    innerLayout->setContentsMargins(6, 6, 6, 6);

    listWidget = new QListWidget(mainFrame);
    listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    listWidget->setStyleSheet(R"(
        QListWidget {
            background: transparent;
            border: none;
        }
        QListWidget::item {
            height: 36px;
            border-radius: 6px;
            padding-left: 10px;
        }
        QListWidget::item:hover {
            background-color: #f5f5f5;
        }
        QListWidget::item:selected {
            background-color: #e8e8e8;
        }
    )");

    innerLayout->addWidget(listWidget);
    outerLayout->addWidget(mainFrame);

    connect(listWidget, &QListWidget::itemClicked, this, [=](QListWidgetItem *item) {
        emit playlistSelected(item->text());
        close();
    });
}

void PlaylistPopup::setPlaylists(const QStringList &names)
{
    listWidget->clear();
    for (const QString &name : names)
        listWidget->addItem(name);
}


























// #include "PlaylistPopup.h"
// #include <QMouseEvent>
// #include <QPainter>

// PlaylistPopup::PlaylistPopup(QWidget *parent)
//     : QFrame(parent)
// {
//     setWindowFlags(Qt::Popup | Qt::FramelessWindowHint);  // 点击外部自动关闭
//     setAttribute(Qt::WA_TranslucentBackground);           // 支持圆角和阴影
//     setFixedWidth(150);

//     setStyleSheet(R"(
//             background-color:transparent;
// border: none;
//         })");
//     // 阴影效果
//     auto *shadow = new QGraphicsDropShadowEffect(this);
//     shadow->setBlurRadius(20);
//     shadow->setColor(QColor(0, 0, 0, 60));
//     shadow->setOffset(0, 5);
//     setGraphicsEffect(shadow);

//     // 白色底 + 圆角
//     QVBoxLayout *layout = new QVBoxLayout(this);
//     layout->setContentsMargins(0, 0, 0, 0);

//     listWidget = new QListWidget(this);
//     listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//     listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

//     // listWidget->setStyleSheet(R"(
//     //     QListWidget {
//     //         background: white;
//     //         border-radius: 6px;
//     //         padding: 6px;
//     //     }
//     //     QListWidget::item {
//     //         height: 36px;
//     //         border-radius: 8px;
//     //         padding-left: 10px;
//     //     }
//     //     QListWidget::item:hover {
//     //         background-color: #f0f0f0;
//     //     }
//     //     QListWidget::item:selected {
//     //         background-color: #e0e0e0;
//     //     }
//     // )");
//     listWidget->setStyleSheet(R"(
//     QListWidget {
//         background: white;
//         border-radius: 12px;  /* 圆角放在这里 */
//         padding: 6px;
//         outline: none;
//     }
//     QListWidget::item {
//         height: 36px;
//         border-radius: 8px;
//         padding-left: 10px;
//     }
//     QListWidget::item:hover {
//         background-color: #f0f0f0;
//     }
//     QListWidget::item:selected {
//         background-color: #e0e0e0;
//     }
// )");
//     layout->addWidget(listWidget);

//     connect(listWidget, &QListWidget::itemClicked, this, [=](QListWidgetItem *item) {
//         emit playlistSelected(item->text());
//         close(); // 自动关闭
//     });
// }

// void PlaylistPopup::setPlaylists(const QStringList &names)
// {
//     listWidget->clear();
//     for (const QString &name : names) {
//         qDebug()<<name;
//         listWidget->addItem(name);
//     }

// }
