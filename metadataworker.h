#ifndef METADATAWORKER_H
#define METADATAWORKER_H

#include <QObject>
#include "dataStruct.h"
#include "music_widget.h"



class MetadataWorker : public QObject
{
    Q_OBJECT
public:
    explicit MetadataWorker(QObject *parent = nullptr);


    //槽函数
public slots:

    void processSong(const Songstruct &songIn,music_widget *widget);//队列连接,处理



signals:
    void metadataReady(const Songstruct &song,music_widget *widget); // 信息处理完毕,回到主线程



};

#endif // METADATAWORKER_H
