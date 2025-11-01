QT       += core gui network multimedia sql \
    concurrent \
    core5compat

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addmusicdialog.cpp \
    leftwidget.cpp \
    lyricmanager.cpp \
    lyricwidget.cpp \
    main.cpp \
    mainwidget.cpp \
    metadataworker.cpp \
    music_widget.cpp \
    musiccontroller.cpp \
    musicmanage.cpp \
    myslider.cpp \
    mytoolclass.cpp \
    pagebutton.cpp \
    playercontrolwidget.cpp \
    playlistpopup.cpp \
    songwidget.cpp \
    topwidget.cpp

HEADERS += \
    addmusicdialog.h \
    dataStruct.h \
    leftwidget.h \
    lyricmanager.h \
    lyricwidget.h \
    mainwidget.h \
    metadataworker.h \
    music_widget.h \
    musiccontroller.h \
    musicmanage.h \
    myslider.h \
    mytoolclass.h \
    pagebutton.h \
    playercontrolwidget.h \
    playlistpopup.h \
    songwidget.h \
    topwidget.h

FORMS += \
    addmusicdialog.ui \
    leftwidget.ui \
    lyricwidget.ui \
    mainwidget.ui \
    music_widget.ui \
    playercontrolwidget.ui \
    songwidget.ui \
    topwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    myResources.qrc
