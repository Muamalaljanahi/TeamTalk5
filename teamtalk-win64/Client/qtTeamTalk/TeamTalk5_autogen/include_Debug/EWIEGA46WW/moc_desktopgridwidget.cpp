/****************************************************************************
** Meta object code from reading C++ file 'desktopgridwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Client/qtTeamTalk/desktopgridwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopgridwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17DesktopGridWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto DesktopGridWidget::qt_create_metaobjectdata<qt_meta_tag_ZN17DesktopGridWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DesktopGridWidget",
        "userDesktopWindowUpdate",
        "",
        "userDesktopWindowEnded",
        "userDesktopSelected",
        "selected",
        "userDesktopCursorUpdate",
        "DesktopInput",
        "userUpdated",
        "User",
        "desktopCountChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'userDesktopWindowUpdate'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'userDesktopWindowEnded'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'userDesktopSelected'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'userDesktopCursorUpdate'
        QtMocHelpers::SignalData<void(int, const DesktopInput &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 7, 2 },
        }}),
        // Signal 'userUpdated'
        QtMocHelpers::SignalData<void(const User &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'desktopCountChanged'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DesktopGridWidget, qt_meta_tag_ZN17DesktopGridWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DesktopGridWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<GridWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DesktopGridWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DesktopGridWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17DesktopGridWidgetE_t>.metaTypes,
    nullptr
} };

void DesktopGridWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DesktopGridWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->userDesktopWindowUpdate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->userDesktopWindowEnded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->userDesktopSelected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->userDesktopCursorUpdate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DesktopInput>>(_a[2]))); break;
        case 4: _t->userUpdated((*reinterpret_cast< std::add_pointer_t<User>>(_a[1]))); break;
        case 5: _t->desktopCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DesktopGridWidget::*)(int , int )>(_a, &DesktopGridWidget::userDesktopWindowUpdate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopGridWidget::*)(int )>(_a, &DesktopGridWidget::userDesktopWindowEnded, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopGridWidget::*)(bool )>(_a, &DesktopGridWidget::userDesktopSelected, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopGridWidget::*)(int , const DesktopInput & )>(_a, &DesktopGridWidget::userDesktopCursorUpdate, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopGridWidget::*)(const User & )>(_a, &DesktopGridWidget::userUpdated, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopGridWidget::*)(int )>(_a, &DesktopGridWidget::desktopCountChanged, 5))
            return;
    }
}

const QMetaObject *DesktopGridWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopGridWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17DesktopGridWidgetE_t>.strings))
        return static_cast<void*>(this);
    return GridWidget::qt_metacast(_clname);
}

int DesktopGridWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GridWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DesktopGridWidget::userDesktopWindowUpdate(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void DesktopGridWidget::userDesktopWindowEnded(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void DesktopGridWidget::userDesktopSelected(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void DesktopGridWidget::userDesktopCursorUpdate(int _t1, const DesktopInput & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void DesktopGridWidget::userUpdated(const User & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void DesktopGridWidget::desktopCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
