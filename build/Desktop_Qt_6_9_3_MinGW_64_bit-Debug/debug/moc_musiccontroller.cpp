/****************************************************************************
** Meta object code from reading C++ file 'musiccontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../musiccontroller.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musiccontroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15MusicControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto MusicController::qt_create_metaobjectdata<qt_meta_tag_ZN15MusicControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MusicController",
        "currentSongChanged",
        "",
        "Songstruct",
        "song",
        "isPlay",
        "widget_objName",
        "playbackStateChanged",
        "QMediaPlayer::PlaybackState",
        "state",
        "positionChanged",
        "position",
        "durationChanged",
        "duration",
        "volumeChanged",
        "volume",
        "errorOccurred",
        "err",
        "sendPlayStateChangeTo_PlayerctrlWidge",
        "playSong",
        "setPlaylist",
        "QList<Songstruct>",
        "pl",
        "startIndex",
        "access_UiCommandToStartMusic",
        "yes",
        "addToQueue",
        "play",
        "pause",
        "stop",
        "togglePlayPause",
        "playNext",
        "playPrevious",
        "seek",
        "positionMs",
        "setVolume",
        "setPlayMode",
        "PlayMode",
        "m",
        "onMediaPositionChanged",
        "pos",
        "onMediaDurationChanged",
        "dur",
        "onMediaErrorOccurred",
        "onMediaStateChanged",
        "st",
        "onMediaPlayerMediaStatusChanged",
        "QMediaPlayer::MediaStatus",
        "Sequential",
        "RepeatOne",
        "RepeatAll",
        "Shuffle"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentSongChanged'
        QtMocHelpers::SignalData<void(const Songstruct &, bool, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 5 }, { QMetaType::QString, 6 },
        }}),
        // Signal 'playbackStateChanged'
        QtMocHelpers::SignalData<void(QMediaPlayer::PlaybackState)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void(qint64)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 11 },
        }}),
        // Signal 'durationChanged'
        QtMocHelpers::SignalData<void(qint64)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 13 },
        }}),
        // Signal 'volumeChanged'
        QtMocHelpers::SignalData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Signal 'sendPlayStateChangeTo_PlayerctrlWidge'
        QtMocHelpers::SignalData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'playSong'
        QtMocHelpers::SlotData<void(const Songstruct &, const QString &, bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 6 }, { QMetaType::Bool, 5 },
        }}),
        // Slot 'setPlaylist'
        QtMocHelpers::SlotData<void(const QVector<Songstruct> &, const QString &, int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { QMetaType::QString, 6 }, { QMetaType::Int, 23 },
        }}),
        // Slot 'setPlaylist'
        QtMocHelpers::SlotData<void(const QVector<Songstruct> &, const QString &)>(20, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { QMetaType::QString, 6 },
        }}),
        // Slot 'access_UiCommandToStartMusic'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'addToQueue'
        QtMocHelpers::SlotData<void(const Songstruct &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'play'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'togglePlayPause'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playNext'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playPrevious'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'seek'
        QtMocHelpers::SlotData<void(qint64)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 34 },
        }}),
        // Slot 'setVolume'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'setPlayMode'
        QtMocHelpers::SlotData<void(enum PlayMode)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 37, 38 },
        }}),
        // Slot 'onMediaPositionChanged'
        QtMocHelpers::SlotData<void(qint64)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 40 },
        }}),
        // Slot 'onMediaDurationChanged'
        QtMocHelpers::SlotData<void(qint64)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 42 },
        }}),
        // Slot 'onMediaErrorOccurred'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMediaStateChanged'
        QtMocHelpers::SlotData<void(QMediaPlayer::PlaybackState)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 45 },
        }}),
        // Slot 'onMediaPlayerMediaStatusChanged'
        QtMocHelpers::SlotData<void(QMediaPlayer::MediaStatus)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 47, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PlayMode'
        QtMocHelpers::EnumData<enum PlayMode>(37, 37, QMC::EnumFlags{}).add({
            {   48, PlayMode::Sequential },
            {   49, PlayMode::RepeatOne },
            {   50, PlayMode::RepeatAll },
            {   51, PlayMode::Shuffle },
        }),
    };
    return QtMocHelpers::metaObjectData<MusicController, qt_meta_tag_ZN15MusicControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MusicController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MusicControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MusicControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15MusicControllerE_t>.metaTypes,
    nullptr
} };

void MusicController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MusicController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentSongChanged((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->playbackStateChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->volumeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->sendPlayStateChangeTo_PlayerctrlWidge((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->playSong((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 8: _t->setPlaylist((*reinterpret_cast< std::add_pointer_t<QList<Songstruct>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->setPlaylist((*reinterpret_cast< std::add_pointer_t<QList<Songstruct>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->access_UiCommandToStartMusic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->addToQueue((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1]))); break;
        case 12: _t->play(); break;
        case 13: _t->pause(); break;
        case 14: _t->stop(); break;
        case 15: _t->togglePlayPause(); break;
        case 16: _t->playNext(); break;
        case 17: _t->playPrevious(); break;
        case 18: _t->seek((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 19: _t->setVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->setPlayMode((*reinterpret_cast< std::add_pointer_t<enum PlayMode>>(_a[1]))); break;
        case 21: _t->onMediaPositionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 22: _t->onMediaDurationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 23: _t->onMediaErrorOccurred(); break;
        case 24: _t->onMediaStateChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 25: _t->onMediaPlayerMediaStatusChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::MediaStatus>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 7:
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Songstruct> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Songstruct> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(const Songstruct & , bool , const QString & )>(_a, &MusicController::currentSongChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(QMediaPlayer::PlaybackState )>(_a, &MusicController::playbackStateChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(qint64 )>(_a, &MusicController::positionChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(qint64 )>(_a, &MusicController::durationChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(int )>(_a, &MusicController::volumeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(const QString & )>(_a, &MusicController::errorOccurred, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(bool )>(_a, &MusicController::sendPlayStateChangeTo_PlayerctrlWidge, 6))
            return;
    }
}

const QMetaObject *MusicController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MusicControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MusicController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void MusicController::currentSongChanged(const Songstruct & _t1, bool _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void MusicController::playbackStateChanged(QMediaPlayer::PlaybackState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MusicController::positionChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MusicController::durationChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MusicController::volumeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MusicController::errorOccurred(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MusicController::sendPlayStateChangeTo_PlayerctrlWidge(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
