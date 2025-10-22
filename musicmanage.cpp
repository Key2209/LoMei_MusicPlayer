#include "musicmanage.h"

#include <QFileDialog>
#include <QDialog>
#include <QDebug>
MusicManage::MusicManage()
{

    mediaPlayer=new QMediaPlayer();
    audioOutPut=new QAudioOutput();
}

void MusicManage::addMusicByPath(QStringList pathList)
{
    qDebug()<<"addMusicByPath:"<<pathList;

    for(auto path:pathList)//遍历每一个路径
    {
        QDir dir(path);
        QStringList musicList=dir.entryList(QStringList()<<"*.mp3"<<"*.flat"<<"*.wav");
        //遍历每一个路径下的音乐文件，并添加
        for (auto file:musicList) {

            qDebug()<<file;
            playList.append(file);

        }


    }
    qDebug() << "当前播放列表：" << playList;
}


