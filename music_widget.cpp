#include "music_widget.h"
#include "ui_music_widget.h"

music_widget::music_widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::music_widget)
{
    ui->setupUi(this);
}

music_widget::~music_widget()
{
    delete ui;
}
