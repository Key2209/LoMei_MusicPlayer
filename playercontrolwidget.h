#ifndef PLAYERCONTROLWIDGET_H
#define PLAYERCONTROLWIDGET_H

#include "dataStruct.h"

#include <QLabel>
#include <QPropertyAnimation>
#include <QSlider>
#include <QWidget>

#include "musiccontroller.h"

// connect(m_controller, &MusicController::currentSongChanged, ui->ctlr_music_widget, &playerControlWidget::setCurrentSong);
// connect(m_controller, &MusicController::positionChanged, ui->ctlr_music_widget, &playerControlWidget::setPosition);
// connect(m_controller, &MusicController::durationChanged, ui->ctlr_music_widget, &playerControlWidget::setDuration);

// connect(ui->ctlr_music_widget, &playerControlWidget::playClicked, m_controller, &MusicController::togglePlayPause);
// connect(ui->ctlr_music_widget, &playerControlWidget::seekRequested, m_controller, &MusicController::seek);
// connect(ui->ctlr_music_widget, &playerControlWidget::nextClicked, m_controller, &MusicController::playNext);
// connect(ui->ctlr_music_widget, &playerControlWidget::prevClicked, m_controller, &MusicController::playPrevious);



namespace Ui {
class playerControlWidget;
}
class VolumePopup;
class playerControlWidget : public QWidget
{
    Q_OBJECT

signals:
    void nextClicked();
    void prevClicked();
    void startMusic(bool yes);

    void showLyricWidget(bool checked);

    void seekRequested(qint64 value);//改变进度条
    void volumeRequested(int value);//改变音量
    void playmodeRequested(MusicController::PlayMode mode);
public:
    explicit playerControlWidget(QWidget *parent = nullptr);
    ~playerControlWidget();
    void setCurrentSong(Songstruct song);
    void setPosition(qint64 position);
    void setDuration(qint64 duration);
    qint64 duration_ms=0;
public slots:
    void ReceivePlayStateChange(bool isPlay);
private slots:
    void on_pushButton_play_next_clicked();

    void on_pushButton_play_prev_clicked();

    void on_pushButton_play_clicked();

    // void seekPositionRequest(int position);
    void SendVolumeRequested(int value);



    void on_pushButton_volume_clicked();

    void on_pushButton_playOrder_clicked();

    void on_pushButton_songImage_clicked();

private:
    Ui::playerControlWidget *ui;
    void UI_Init();

    Songstruct currentSong;


    bool m_isSeeking=false;
    void setSongName(QString name);
    void setSingerName(QString name);
    void setNowDuration(QString nowtime);
    void setTotalDuration(QString totaltime);
    void setImage(const QString &path);

    QString duration_ms_to_string(qint64 duration);
    qint64 duration_string_to_ms(QString duration);

    VolumePopup *popup=nullptr;
    void VolumePopupInit();


    int playmode=0;//顺序播放，单曲循环等
};




















//音量条

class VolumePopup: public QWidget
{
    Q_OBJECT
public:
    explicit VolumePopup(QWidget *parent = nullptr);

signals:
    void volumeChanged(int value);
protected:
    void paintEvent(QPaintEvent *event) override;
    void showEvent(QShowEvent *event) override;
    void hideEvent(QHideEvent *event) override;

private:
    QSlider *slider;
    QLabel *label;
    QPropertyAnimation *fadeAnim; // 动画
    void initStyle();
};





#endif // PLAYERCONTROLWIDGET_H
