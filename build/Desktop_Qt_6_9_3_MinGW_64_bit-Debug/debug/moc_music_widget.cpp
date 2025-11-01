/****************************************************************************
** Meta object code from reading C++ file 'music_widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../music_widget.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'music_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12music_widgetE_t {};
} // unnamed namespace

template <> constexpr inline auto music_widget::qt_create_metaobjectdata<qt_meta_tag_ZN12music_widgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "music_widget",
        "exitRequested",
        "",
        "sendPathToAddSong",
        "path",
        "music_widget*",
        "widget",
        "songPlayRequested",
        "Songstruct",
        "song",
        "widget_objName",
        "isPlay",
        "songListPlayRequested",
        "QList<Songstruct>",
        "songplaylist",
        "startIndex",
        "Play_or_PauseRequested",
        "isplay",
        "SendToMainUI_ShowPlaylistPopupRequested",
        "songwidget*",
        "swidget",
        "addSong",
        "handleNewPath",
        "onCurrentSongChanged",
        "receivedSongPlayRequested",
        "receivedSongListPlayRequested",
        "setUiPlay_or_Pause",
        "onShowPlaylistPopupRequested",
        "on_pushButton_title_play_clicked",
        "on_pushButton_add_clicked",
        "on_pushButton_close_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'exitRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sendPathToAddSong'
        QtMocHelpers::SignalData<void(const QString &, music_widget *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'songPlayRequested'
        QtMocHelpers::SignalData<void(const Songstruct &, const QString &, bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::QString, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Signal 'songListPlayRequested'
        QtMocHelpers::SignalData<void(const QVector<Songstruct> &, const QString &, int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { QMetaType::QString, 10 }, { QMetaType::Int, 15 },
        }}),
        // Signal 'Play_or_PauseRequested'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Signal 'SendToMainUI_ShowPlaylistPopupRequested'
        QtMocHelpers::SignalData<void(songwidget *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'addSong'
        QtMocHelpers::SlotData<void(Songstruct)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'handleNewPath'
        QtMocHelpers::SlotData<void(const QStringList &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 4 },
        }}),
        // Slot 'onCurrentSongChanged'
        QtMocHelpers::SlotData<void(const Songstruct &, bool, const QString &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Bool, 11 }, { QMetaType::QString, 10 },
        }}),
        // Slot 'onCurrentSongChanged'
        QtMocHelpers::SlotData<void(const Songstruct &, bool)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Bool, 11 },
        }}),
        // Slot 'receivedSongPlayRequested'
        QtMocHelpers::SlotData<void(const Songstruct &, bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Bool, 11 },
        }}),
        // Slot 'receivedSongListPlayRequested'
        QtMocHelpers::SlotData<void(const Songstruct &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setUiPlay_or_Pause'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'onShowPlaylistPopupRequested'
        QtMocHelpers::SlotData<void(songwidget *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'on_pushButton_title_play_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_add_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_close_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<music_widget, qt_meta_tag_ZN12music_widgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject music_widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12music_widgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12music_widgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12music_widgetE_t>.metaTypes,
    nullptr
} };

void music_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<music_widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->exitRequested(); break;
        case 1: _t->sendPathToAddSong((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<music_widget*>>(_a[2]))); break;
        case 2: _t->songPlayRequested((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 3: _t->songListPlayRequested((*reinterpret_cast< std::add_pointer_t<QList<Songstruct>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->Play_or_PauseRequested((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->SendToMainUI_ShowPlaylistPopupRequested((*reinterpret_cast< std::add_pointer_t<songwidget*>>(_a[1]))); break;
        case 6: _t->addSong((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1]))); break;
        case 7: _t->handleNewPath((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->onCurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 9: _t->onCurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 10: _t->receivedSongPlayRequested((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: _t->receivedSongListPlayRequested((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1]))); break;
        case 12: _t->setUiPlay_or_Pause((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->onShowPlaylistPopupRequested((*reinterpret_cast< std::add_pointer_t<songwidget*>>(_a[1]))); break;
        case 14: _t->on_pushButton_title_play_clicked(); break;
        case 15: _t->on_pushButton_add_clicked(); break;
        case 16: _t->on_pushButton_close_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< music_widget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Songstruct> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< songwidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< songwidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (music_widget::*)()>(_a, &music_widget::exitRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (music_widget::*)(const QString & , music_widget * )>(_a, &music_widget::sendPathToAddSong, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (music_widget::*)(const Songstruct & , const QString & , bool )>(_a, &music_widget::songPlayRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (music_widget::*)(const QVector<Songstruct> & , const QString & , int )>(_a, &music_widget::songListPlayRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (music_widget::*)(bool )>(_a, &music_widget::Play_or_PauseRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (music_widget::*)(songwidget * )>(_a, &music_widget::SendToMainUI_ShowPlaylistPopupRequested, 5))
            return;
    }
}

const QMetaObject *music_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *music_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12music_widgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int music_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void music_widget::exitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void music_widget::sendPathToAddSong(const QString & _t1, music_widget * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void music_widget::songPlayRequested(const Songstruct & _t1, const QString & _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}

// SIGNAL 3
void music_widget::songListPlayRequested(const QVector<Songstruct> & _t1, const QString & _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void music_widget::Play_or_PauseRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void music_widget::SendToMainUI_ShowPlaylistPopupRequested(songwidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
