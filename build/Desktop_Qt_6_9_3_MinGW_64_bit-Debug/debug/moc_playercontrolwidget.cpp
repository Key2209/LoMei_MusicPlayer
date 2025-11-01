/****************************************************************************
** Meta object code from reading C++ file 'playercontrolwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../playercontrolwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playercontrolwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19playerControlWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto playerControlWidget::qt_create_metaobjectdata<qt_meta_tag_ZN19playerControlWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "playerControlWidget",
        "nextClicked",
        "",
        "prevClicked",
        "startMusic",
        "yes",
        "showLyricWidget",
        "checked",
        "seekRequested",
        "value",
        "volumeRequested",
        "playmodeRequested",
        "MusicController::PlayMode",
        "mode",
        "ReceivePlayStateChange",
        "isPlay",
        "on_pushButton_play_next_clicked",
        "on_pushButton_play_prev_clicked",
        "on_pushButton_play_clicked",
        "SendVolumeRequested",
        "on_pushButton_volume_clicked",
        "on_pushButton_playOrder_clicked",
        "on_pushButton_songImage_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'nextClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'prevClicked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'startMusic'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'showLyricWidget'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'seekRequested'
        QtMocHelpers::SignalData<void(qint64)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 9 },
        }}),
        // Signal 'volumeRequested'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'playmodeRequested'
        QtMocHelpers::SignalData<void(MusicController::PlayMode)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'ReceivePlayStateChange'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'on_pushButton_play_next_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_play_prev_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_play_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SendVolumeRequested'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_pushButton_volume_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_playOrder_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_songImage_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<playerControlWidget, qt_meta_tag_ZN19playerControlWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject playerControlWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19playerControlWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19playerControlWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19playerControlWidgetE_t>.metaTypes,
    nullptr
} };

void playerControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<playerControlWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->nextClicked(); break;
        case 1: _t->prevClicked(); break;
        case 2: _t->startMusic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->showLyricWidget((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->seekRequested((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->volumeRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->playmodeRequested((*reinterpret_cast< std::add_pointer_t<MusicController::PlayMode>>(_a[1]))); break;
        case 7: _t->ReceivePlayStateChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_pushButton_play_next_clicked(); break;
        case 9: _t->on_pushButton_play_prev_clicked(); break;
        case 10: _t->on_pushButton_play_clicked(); break;
        case 11: _t->SendVolumeRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_pushButton_volume_clicked(); break;
        case 13: _t->on_pushButton_playOrder_clicked(); break;
        case 14: _t->on_pushButton_songImage_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)()>(_a, &playerControlWidget::nextClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)()>(_a, &playerControlWidget::prevClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)(bool )>(_a, &playerControlWidget::startMusic, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)(bool )>(_a, &playerControlWidget::showLyricWidget, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)(qint64 )>(_a, &playerControlWidget::seekRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)(int )>(_a, &playerControlWidget::volumeRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)(MusicController::PlayMode )>(_a, &playerControlWidget::playmodeRequested, 6))
            return;
    }
}

const QMetaObject *playerControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *playerControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19playerControlWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int playerControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void playerControlWidget::nextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void playerControlWidget::prevClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void playerControlWidget::startMusic(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void playerControlWidget::showLyricWidget(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void playerControlWidget::seekRequested(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void playerControlWidget::volumeRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void playerControlWidget::playmodeRequested(MusicController::PlayMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN11VolumePopupE_t {};
} // unnamed namespace

template <> constexpr inline auto VolumePopup::qt_create_metaobjectdata<qt_meta_tag_ZN11VolumePopupE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VolumePopup",
        "volumeChanged",
        "",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'volumeChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VolumePopup, qt_meta_tag_ZN11VolumePopupE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VolumePopup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VolumePopupE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VolumePopupE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11VolumePopupE_t>.metaTypes,
    nullptr
} };

void VolumePopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VolumePopup *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->volumeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VolumePopup::*)(int )>(_a, &VolumePopup::volumeChanged, 0))
            return;
    }
}

const QMetaObject *VolumePopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumePopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11VolumePopupE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VolumePopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void VolumePopup::volumeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
