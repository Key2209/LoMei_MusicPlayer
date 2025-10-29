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
        "seekRequested",
        "value",
        "volumeRequested",
        "ReceivePlayStateChange",
        "isPlay",
        "on_pushButton_play_next_clicked",
        "on_pushButton_play_prev_clicked",
        "on_pushButton_play_clicked",
        "SendVolumeRequested",
        "on_pushButton_volume_clicked"
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
        // Signal 'seekRequested'
        QtMocHelpers::SignalData<void(qint64)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 7 },
        }}),
        // Signal 'volumeRequested'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'ReceivePlayStateChange'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'on_pushButton_play_next_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_play_prev_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_play_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SendVolumeRequested'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_pushButton_volume_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
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
        case 3: _t->seekRequested((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->volumeRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->ReceivePlayStateChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_pushButton_play_next_clicked(); break;
        case 7: _t->on_pushButton_play_prev_clicked(); break;
        case 8: _t->on_pushButton_play_clicked(); break;
        case 9: _t->SendVolumeRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_pushButton_volume_clicked(); break;
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
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)(qint64 )>(_a, &playerControlWidget::seekRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (playerControlWidget::*)(int )>(_a, &playerControlWidget::volumeRequested, 4))
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
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
void playerControlWidget::seekRequested(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void playerControlWidget::volumeRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
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
