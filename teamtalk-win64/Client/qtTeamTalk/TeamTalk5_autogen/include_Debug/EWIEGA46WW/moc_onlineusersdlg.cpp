/****************************************************************************
** Meta object code from reading C++ file 'onlineusersdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Client/qtTeamTalk/onlineusersdlg.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onlineusersdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
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
struct qt_meta_tag_ZN14OnlineUsersDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto OnlineUsersDlg::qt_create_metaobjectdata<qt_meta_tag_ZN14OnlineUsersDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OnlineUsersDlg",
        "viewUserInformation",
        "",
        "userid",
        "sendUserMessage",
        "muteUser",
        "mute",
        "changeUserVolume",
        "opUser",
        "chanid",
        "kickUser",
        "kickbanUser",
        "User",
        "user",
        "streamfileToUser",
        "moveUser"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'viewUserInformation'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'sendUserMessage'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'muteUser'
        QtMocHelpers::SignalData<void(int, bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Bool, 6 },
        }}),
        // Signal 'changeUserVolume'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'opUser'
        QtMocHelpers::SignalData<void(int, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 9 },
        }}),
        // Signal 'kickUser'
        QtMocHelpers::SignalData<void(int, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 9 },
        }}),
        // Signal 'kickbanUser'
        QtMocHelpers::SignalData<void(const User &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'streamfileToUser'
        QtMocHelpers::SignalData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'moveUser'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OnlineUsersDlg, qt_meta_tag_ZN14OnlineUsersDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OnlineUsersDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OnlineUsersDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OnlineUsersDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14OnlineUsersDlgE_t>.metaTypes,
    nullptr
} };

void OnlineUsersDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OnlineUsersDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->viewUserInformation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sendUserMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->muteUser((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->changeUserVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->opUser((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->kickUser((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->kickbanUser((*reinterpret_cast< std::add_pointer_t<User>>(_a[1]))); break;
        case 7: _t->streamfileToUser((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->moveUser((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int )>(_a, &OnlineUsersDlg::viewUserInformation, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int )>(_a, &OnlineUsersDlg::sendUserMessage, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int , bool )>(_a, &OnlineUsersDlg::muteUser, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int )>(_a, &OnlineUsersDlg::changeUserVolume, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int , int )>(_a, &OnlineUsersDlg::opUser, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int , int )>(_a, &OnlineUsersDlg::kickUser, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(const User & )>(_a, &OnlineUsersDlg::kickbanUser, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int )>(_a, &OnlineUsersDlg::streamfileToUser, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (OnlineUsersDlg::*)(int )>(_a, &OnlineUsersDlg::moveUser, 8))
            return;
    }
}

const QMetaObject *OnlineUsersDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OnlineUsersDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OnlineUsersDlgE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OnlineUsersDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OnlineUsersDlg::viewUserInformation(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void OnlineUsersDlg::sendUserMessage(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void OnlineUsersDlg::muteUser(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void OnlineUsersDlg::changeUserVolume(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void OnlineUsersDlg::opUser(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void OnlineUsersDlg::kickUser(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void OnlineUsersDlg::kickbanUser(const User & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void OnlineUsersDlg::streamfileToUser(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void OnlineUsersDlg::moveUser(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
