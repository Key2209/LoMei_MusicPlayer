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
        "addSong",
        "handleNewPath",
        "onCurrentSongChanged",
        "receivedSongPlayRequested",
        "receivedSongListPlayRequested",
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
        // Slot 'addSong'
        QtMocHelpers::SlotData<void(Songstruct)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'handleNewPath'
        QtMocHelpers::SlotData<void(const QStringList &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 4 },
        }}),
        // Slot 'onCurrentSongChanged'
        QtMocHelpers::SlotData<void(const Songstruct &, const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::QString, 10 },
        }}),
        // Slot 'onCurrentSongChanged'
        QtMocHelpers::SlotData<void(const Songstruct &)>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'receivedSongPlayRequested'
        QtMocHelpers::SlotData<void(const Songstruct &, bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Bool, 11 },
        }}),
        // Slot 'receivedSongListPlayRequested'
        QtMocHelpers::SlotData<void(const Songstruct &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'on_pushButton_title_play_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_add_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_close_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
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
        case 4: _t->addSong((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1]))); break;
        case 5: _t->handleNewPath((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 6: _t->onCurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->onCurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1]))); break;
        case 8: _t->receivedSongPlayRequested((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->receivedSongListPlayRequested((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1]))); break;
        case 10: _t->on_pushButton_title_play_clicked(); break;
        case 11: _t->on_pushButton_add_clicked(); break;
        case 12: _t->on_pushButton_close_clicked(); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            }
            break;
        case 6:
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
QT_WARNING_POP
