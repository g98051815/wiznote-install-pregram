/****************************************************************************
** Meta object code from reading C++ file 'WizEventLoop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizEventLoop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizEventLoop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizAutoTimeOutEventLoop_t {
    QByteArrayData data[11];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAutoTimeOutEventLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAutoTimeOutEventLoop_t qt_meta_stringdata_WizAutoTimeOutEventLoop = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WizAutoTimeOutEventLoop"
QT_MOC_LITERAL(1, 24, 16), // "on_replyFinished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "on_replyError"
QT_MOC_LITERAL(4, 56, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 84, 10), // "on_timeOut"
QT_MOC_LITERAL(6, 95, 19), // "on_downloadProgress"
QT_MOC_LITERAL(7, 115, 13), // "bytesReceived"
QT_MOC_LITERAL(8, 129, 10), // "bytesTotal"
QT_MOC_LITERAL(9, 140, 17), // "on_uploadProgress"
QT_MOC_LITERAL(10, 158, 9) // "bytesSent"

    },
    "WizAutoTimeOutEventLoop\0on_replyFinished\0"
    "\0on_replyError\0QNetworkReply::NetworkError\0"
    "on_timeOut\0on_downloadProgress\0"
    "bytesReceived\0bytesTotal\0on_uploadProgress\0"
    "bytesSent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAutoTimeOutEventLoop[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    2,   44,    2, 0x0a /* Public */,
       9,    2,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   10,    8,

       0        // eod
};

void WizAutoTimeOutEventLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAutoTimeOutEventLoop *_t = static_cast<WizAutoTimeOutEventLoop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_replyFinished(); break;
        case 1: _t->on_replyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->on_timeOut(); break;
        case 3: _t->on_downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->on_uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject WizAutoTimeOutEventLoop::staticMetaObject = {
    { &QEventLoop::staticMetaObject, qt_meta_stringdata_WizAutoTimeOutEventLoop.data,
      qt_meta_data_WizAutoTimeOutEventLoop,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAutoTimeOutEventLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAutoTimeOutEventLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAutoTimeOutEventLoop.stringdata0))
        return static_cast<void*>(const_cast< WizAutoTimeOutEventLoop*>(this));
    return QEventLoop::qt_metacast(_clname);
}

int WizAutoTimeOutEventLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventLoop::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_WizXmlRpcEventLoop_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizXmlRpcEventLoop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizXmlRpcEventLoop_t qt_meta_stringdata_WizXmlRpcEventLoop = {
    {
QT_MOC_LITERAL(0, 0, 18) // "WizXmlRpcEventLoop"

    },
    "WizXmlRpcEventLoop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizXmlRpcEventLoop[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WizXmlRpcEventLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WizXmlRpcEventLoop::staticMetaObject = {
    { &WizAutoTimeOutEventLoop::staticMetaObject, qt_meta_stringdata_WizXmlRpcEventLoop.data,
      qt_meta_data_WizXmlRpcEventLoop,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizXmlRpcEventLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizXmlRpcEventLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizXmlRpcEventLoop.stringdata0))
        return static_cast<void*>(const_cast< WizXmlRpcEventLoop*>(this));
    return WizAutoTimeOutEventLoop::qt_metacast(_clname);
}

int WizXmlRpcEventLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizAutoTimeOutEventLoop::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
