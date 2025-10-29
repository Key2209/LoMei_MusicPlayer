/****************************************************************************
** Meta object code from reading C++ file 'musicmanage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../musicmanage.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicmanage.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11MusicManageE_t {};
} // unnamed namespace

template <> constexpr inline auto MusicManage::qt_create_metaobjectdata<qt_meta_tag_ZN11MusicManageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MusicManage",
        "scanStarted",
        "",
        "path",
        "scanProgress",
        "scanned",
        "totalFoundSoFar",
        "songFound",
        "Songstruct",
        "song",
        "scanFinished",
        "QList<Songstruct>",
        "allSongs",
        "requestMetadata",
        "music_widget*",
        "widget",
        "metadataReady"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scanStarted'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'scanProgress'
        QtMocHelpers::SignalData<void(int, int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
        }}),
        // Signal 'songFound'
        QtMocHelpers::SignalData<void(const Songstruct &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'scanFinished'
        QtMocHelpers::SignalData<void(const QVector<Songstruct> &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'requestMetadata'
        QtMocHelpers::SignalData<void(const Songstruct &, music_widget *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 14, 15 },
        }}),
        // Signal 'metadataReady'
        QtMocHelpers::SignalData<void(const Songstruct &, music_widget *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 14, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MusicManage, qt_meta_tag_ZN11MusicManageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MusicManage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MusicManageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MusicManageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11MusicManageE_t>.metaTypes,
    nullptr
} };

void MusicManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MusicManage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scanStarted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->scanProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->songFound((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1]))); break;
        case 3: _t->scanFinished((*reinterpret_cast< std::add_pointer_t<QList<Songstruct>>>(_a[1]))); break;
        case 4: _t->requestMetadata((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<music_widget*>>(_a[2]))); break;
        case 5: _t->metadataReady((*reinterpret_cast< std::add_pointer_t<Songstruct>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<music_widget*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
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
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< music_widget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Songstruct >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< music_widget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MusicManage::*)(const QString & )>(_a, &MusicManage::scanStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicManage::*)(int , int )>(_a, &MusicManage::scanProgress, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicManage::*)(const Songstruct & )>(_a, &MusicManage::songFound, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicManage::*)(const QVector<Songstruct> & )>(_a, &MusicManage::scanFinished, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicManage::*)(const Songstruct & , music_widget * )>(_a, &MusicManage::requestMetadata, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicManage::*)(const Songstruct & , music_widget * )>(_a, &MusicManage::metadataReady, 5))
            return;
    }
}

const QMetaObject *MusicManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MusicManageE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MusicManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MusicManage::scanStarted(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MusicManage::scanProgress(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void MusicManage::songFound(const Songstruct & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MusicManage::scanFinished(const QVector<Songstruct> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MusicManage::requestMetadata(const Songstruct & _t1, music_widget * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void MusicManage::metadataReady(const Songstruct & _t1, music_widget * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}
QT_WARNING_POP
