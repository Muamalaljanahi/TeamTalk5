/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Client/qtTeamTalk/mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "serverUpdate",
        "",
        "ServerProperties",
        "srvprop",
        "serverStatistics",
        "ServerStatistics",
        "stats",
        "newChannel",
        "Channel",
        "chan",
        "updateChannel",
        "removeChannel",
        "userLogin",
        "User",
        "user",
        "userLogout",
        "userUpdate",
        "userJoined",
        "channelid",
        "userLeft",
        "userStateChange",
        "updateMyself",
        "newVideoCaptureFrame",
        "userid",
        "stream_id",
        "newMediaVideoFrame",
        "newDesktopWindow",
        "sessionid",
        "userDesktopCursor",
        "src_userid",
        "DesktopInput",
        "newTextMessage",
        "MyTextMessage",
        "textmsg",
        "filetransferUpdate",
        "FileTransfer",
        "transfer",
        "mediaStreamUpdate",
        "MediaFileInfo",
        "mfi",
        "mediaPlaybackUpdate",
        "sessionID",
        "cmdProcessing",
        "cmdid",
        "active",
        "cmdSuccess",
        "cmdError",
        "errorno",
        "preferencesModified"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'serverUpdate'
        QtMocHelpers::SignalData<void(const ServerProperties &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'serverStatistics'
        QtMocHelpers::SignalData<void(const ServerStatistics &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'newChannel'
        QtMocHelpers::SignalData<void(const Channel &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'updateChannel'
        QtMocHelpers::SignalData<void(const Channel &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'removeChannel'
        QtMocHelpers::SignalData<void(const Channel &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'userLogin'
        QtMocHelpers::SignalData<void(const User &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'userLogout'
        QtMocHelpers::SignalData<void(const User &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'userUpdate'
        QtMocHelpers::SignalData<void(const User &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'userJoined'
        QtMocHelpers::SignalData<void(int, const User &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { 0x80000000 | 14, 15 },
        }}),
        // Signal 'userLeft'
        QtMocHelpers::SignalData<void(int, const User &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { 0x80000000 | 14, 15 },
        }}),
        // Signal 'userStateChange'
        QtMocHelpers::SignalData<void(const User &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'updateMyself'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'newVideoCaptureFrame'
        QtMocHelpers::SignalData<void(int, int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 }, { QMetaType::Int, 25 },
        }}),
        // Signal 'newMediaVideoFrame'
        QtMocHelpers::SignalData<void(int, int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 }, { QMetaType::Int, 25 },
        }}),
        // Signal 'newDesktopWindow'
        QtMocHelpers::SignalData<void(int, int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 }, { QMetaType::Int, 28 },
        }}),
        // Signal 'userDesktopCursor'
        QtMocHelpers::SignalData<void(int, const DesktopInput &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 }, { 0x80000000 | 31, 2 },
        }}),
        // Signal 'newTextMessage'
        QtMocHelpers::SignalData<void(const MyTextMessage &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Signal 'filetransferUpdate'
        QtMocHelpers::SignalData<void(const FileTransfer &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Signal 'mediaStreamUpdate'
        QtMocHelpers::SignalData<void(const MediaFileInfo &)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 39, 40 },
        }}),
        // Signal 'mediaPlaybackUpdate'
        QtMocHelpers::SignalData<void(int, const MediaFileInfo &)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 42 }, { 0x80000000 | 39, 40 },
        }}),
        // Signal 'cmdProcessing'
        QtMocHelpers::SignalData<void(int, bool)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 44 }, { QMetaType::Bool, 45 },
        }}),
        // Signal 'cmdSuccess'
        QtMocHelpers::SignalData<void(int)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 44 },
        }}),
        // Signal 'cmdError'
        QtMocHelpers::SignalData<void(int, int)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 48 }, { QMetaType::Int, 44 },
        }}),
        // Signal 'preferencesModified'
        QtMocHelpers::SignalData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->serverUpdate((*reinterpret_cast< std::add_pointer_t<ServerProperties>>(_a[1]))); break;
        case 1: _t->serverStatistics((*reinterpret_cast< std::add_pointer_t<ServerStatistics>>(_a[1]))); break;
        case 2: _t->newChannel((*reinterpret_cast< std::add_pointer_t<Channel>>(_a[1]))); break;
        case 3: _t->updateChannel((*reinterpret_cast< std::add_pointer_t<Channel>>(_a[1]))); break;
        case 4: _t->removeChannel((*reinterpret_cast< std::add_pointer_t<Channel>>(_a[1]))); break;
        case 5: _t->userLogin((*reinterpret_cast< std::add_pointer_t<User>>(_a[1]))); break;
        case 6: _t->userLogout((*reinterpret_cast< std::add_pointer_t<User>>(_a[1]))); break;
        case 7: _t->userUpdate((*reinterpret_cast< std::add_pointer_t<User>>(_a[1]))); break;
        case 8: _t->userJoined((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<User>>(_a[2]))); break;
        case 9: _t->userLeft((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<User>>(_a[2]))); break;
        case 10: _t->userStateChange((*reinterpret_cast< std::add_pointer_t<User>>(_a[1]))); break;
        case 11: _t->updateMyself(); break;
        case 12: _t->newVideoCaptureFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->newMediaVideoFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->newDesktopWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->userDesktopCursor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DesktopInput>>(_a[2]))); break;
        case 16: _t->newTextMessage((*reinterpret_cast< std::add_pointer_t<MyTextMessage>>(_a[1]))); break;
        case 17: _t->filetransferUpdate((*reinterpret_cast< std::add_pointer_t<FileTransfer>>(_a[1]))); break;
        case 18: _t->mediaStreamUpdate((*reinterpret_cast< std::add_pointer_t<MediaFileInfo>>(_a[1]))); break;
        case 19: _t->mediaPlaybackUpdate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MediaFileInfo>>(_a[2]))); break;
        case 20: _t->cmdProcessing((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 21: _t->cmdSuccess((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->cmdError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->preferencesModified(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const ServerProperties & )>(_a, &MainWindow::serverUpdate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const ServerStatistics & )>(_a, &MainWindow::serverStatistics, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const Channel & )>(_a, &MainWindow::newChannel, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const Channel & )>(_a, &MainWindow::updateChannel, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const Channel & )>(_a, &MainWindow::removeChannel, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const User & )>(_a, &MainWindow::userLogin, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const User & )>(_a, &MainWindow::userLogout, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const User & )>(_a, &MainWindow::userUpdate, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , const User & )>(_a, &MainWindow::userJoined, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , const User & )>(_a, &MainWindow::userLeft, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const User & )>(_a, &MainWindow::userStateChange, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::updateMyself, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , int )>(_a, &MainWindow::newVideoCaptureFrame, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , int )>(_a, &MainWindow::newMediaVideoFrame, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , int )>(_a, &MainWindow::newDesktopWindow, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , const DesktopInput & )>(_a, &MainWindow::userDesktopCursor, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const MyTextMessage & )>(_a, &MainWindow::newTextMessage, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const FileTransfer & )>(_a, &MainWindow::filetransferUpdate, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const MediaFileInfo & )>(_a, &MainWindow::mediaStreamUpdate, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , const MediaFileInfo & )>(_a, &MainWindow::mediaPlaybackUpdate, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , bool )>(_a, &MainWindow::cmdProcessing, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::cmdSuccess, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int , int )>(_a, &MainWindow::cmdError, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::preferencesModified, 23))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::serverUpdate(const ServerProperties & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MainWindow::serverStatistics(const ServerStatistics & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MainWindow::newChannel(const Channel & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MainWindow::updateChannel(const Channel & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MainWindow::removeChannel(const Channel & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MainWindow::userLogin(const User & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MainWindow::userLogout(const User & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void MainWindow::userUpdate(const User & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void MainWindow::userJoined(int _t1, const User & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void MainWindow::userLeft(int _t1, const User & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void MainWindow::userStateChange(const User & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void MainWindow::updateMyself()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MainWindow::newVideoCaptureFrame(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2);
}

// SIGNAL 13
void MainWindow::newMediaVideoFrame(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}

// SIGNAL 14
void MainWindow::newDesktopWindow(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2);
}

// SIGNAL 15
void MainWindow::userDesktopCursor(int _t1, const DesktopInput & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2);
}

// SIGNAL 16
void MainWindow::newTextMessage(const MyTextMessage & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void MainWindow::filetransferUpdate(const FileTransfer & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void MainWindow::mediaStreamUpdate(const MediaFileInfo & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void MainWindow::mediaPlaybackUpdate(int _t1, const MediaFileInfo & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1, _t2);
}

// SIGNAL 20
void MainWindow::cmdProcessing(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1, _t2);
}

// SIGNAL 21
void MainWindow::cmdSuccess(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void MainWindow::cmdError(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1, _t2);
}

// SIGNAL 23
void MainWindow::preferencesModified()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}
QT_WARNING_POP
