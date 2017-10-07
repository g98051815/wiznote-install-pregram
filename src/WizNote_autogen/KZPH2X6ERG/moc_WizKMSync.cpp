/****************************************************************************
** Meta object code from reading C++ file 'WizKMSync.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/sync/WizKMSync.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizKMSync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizKMSyncEvents_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizKMSyncEvents_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizKMSyncEvents_t qt_meta_stringdata_WizKMSyncEvents = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WizKMSyncEvents"
QT_MOC_LITERAL(1, 16, 12), // "messageReady"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "strStatus"
QT_MOC_LITERAL(4, 40, 20), // "promptMessageRequest"
QT_MOC_LITERAL(5, 61, 5), // "nType"
QT_MOC_LITERAL(6, 67, 8), // "strTitle"
QT_MOC_LITERAL(7, 76, 6), // "strMsg"
QT_MOC_LITERAL(8, 83, 25), // "bubbleNotificationRequest"
QT_MOC_LITERAL(9, 109, 5), // "param"
QT_MOC_LITERAL(10, 115, 21), // "promptFreeServiceExpr"
QT_MOC_LITERAL(11, 137, 20) // "promptVipServiceExpr"

    },
    "WizKMSyncEvents\0messageReady\0\0strStatus\0"
    "promptMessageRequest\0nType\0strTitle\0"
    "strMsg\0bubbleNotificationRequest\0param\0"
    "promptFreeServiceExpr\0promptVipServiceExpr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizKMSyncEvents[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    3,   42,    2, 0x06 /* Public */,
       8,    1,   49,    2, 0x06 /* Public */,
      10,    0,   52,    2, 0x06 /* Public */,
      11,    0,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::QVariant,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizKMSyncEvents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizKMSyncEvents *_t = static_cast<WizKMSyncEvents *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->promptMessageRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->bubbleNotificationRequest((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->promptFreeServiceExpr(); break;
        case 4: _t->promptVipServiceExpr(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizKMSyncEvents::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncEvents::messageReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizKMSyncEvents::*_t)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncEvents::promptMessageRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizKMSyncEvents::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncEvents::bubbleNotificationRequest)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizKMSyncEvents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncEvents::promptFreeServiceExpr)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizKMSyncEvents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncEvents::promptVipServiceExpr)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject WizKMSyncEvents::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizKMSyncEvents.data,
      qt_meta_data_WizKMSyncEvents,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizKMSyncEvents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizKMSyncEvents::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizKMSyncEvents.stringdata0))
        return static_cast<void*>(const_cast< WizKMSyncEvents*>(this));
    if (!strcmp(_clname, "IWizKMSyncEvents"))
        return static_cast< IWizKMSyncEvents*>(const_cast< WizKMSyncEvents*>(this));
    return QObject::qt_metacast(_clname);
}

int WizKMSyncEvents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WizKMSyncEvents::messageReady(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizKMSyncEvents::promptMessageRequest(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizKMSyncEvents::bubbleNotificationRequest(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizKMSyncEvents::promptFreeServiceExpr()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WizKMSyncEvents::promptVipServiceExpr()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
struct qt_meta_stringdata_WizKMSyncThread_t {
    QByteArrayData data[24];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizKMSyncThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizKMSyncThread_t qt_meta_stringdata_WizKMSyncThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WizKMSyncThread"
QT_MOC_LITERAL(1, 16, 10), // "startTimer"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "interval"
QT_MOC_LITERAL(4, 37, 9), // "stopTimer"
QT_MOC_LITERAL(5, 47, 11), // "syncStarted"
QT_MOC_LITERAL(6, 59, 7), // "syncAll"
QT_MOC_LITERAL(7, 67, 12), // "syncFinished"
QT_MOC_LITERAL(8, 80, 10), // "nErrorCode"
QT_MOC_LITERAL(9, 91, 16), // "strErrorMesssage"
QT_MOC_LITERAL(10, 108, 12), // "isBackground"
QT_MOC_LITERAL(11, 121, 10), // "processLog"
QT_MOC_LITERAL(12, 132, 9), // "strStatus"
QT_MOC_LITERAL(13, 142, 20), // "promptMessageRequest"
QT_MOC_LITERAL(14, 163, 5), // "nType"
QT_MOC_LITERAL(15, 169, 8), // "strTitle"
QT_MOC_LITERAL(16, 178, 6), // "strMsg"
QT_MOC_LITERAL(17, 185, 25), // "bubbleNotificationRequest"
QT_MOC_LITERAL(18, 211, 5), // "param"
QT_MOC_LITERAL(19, 217, 21), // "promptFreeServiceExpr"
QT_MOC_LITERAL(20, 239, 20), // "promptVipServiceExpr"
QT_MOC_LITERAL(21, 260, 20), // "quickDownloadMesages"
QT_MOC_LITERAL(22, 281, 14), // "syncAfterStart"
QT_MOC_LITERAL(23, 296, 11) // "on_timerOut"

    },
    "WizKMSyncThread\0startTimer\0\0interval\0"
    "stopTimer\0syncStarted\0syncAll\0"
    "syncFinished\0nErrorCode\0strErrorMesssage\0"
    "isBackground\0processLog\0strStatus\0"
    "promptMessageRequest\0nType\0strTitle\0"
    "strMsg\0bubbleNotificationRequest\0param\0"
    "promptFreeServiceExpr\0promptVipServiceExpr\0"
    "quickDownloadMesages\0syncAfterStart\0"
    "on_timerOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizKMSyncThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       7,    3,   81,    2, 0x06 /* Public */,
      11,    1,   88,    2, 0x06 /* Public */,
      13,    3,   91,    2, 0x06 /* Public */,
      17,    1,   98,    2, 0x06 /* Public */,
      19,    0,  101,    2, 0x06 /* Public */,
      20,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  103,    2, 0x0a /* Public */,
      22,    0,  104,    2, 0x08 /* Private */,
      23,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   14,   15,   16,
    QMetaType::Void, QMetaType::QVariant,   18,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizKMSyncThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizKMSyncThread *_t = static_cast<WizKMSyncThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->stopTimer(); break;
        case 2: _t->syncStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->syncFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->processLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->promptMessageRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->bubbleNotificationRequest((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->promptFreeServiceExpr(); break;
        case 8: _t->promptVipServiceExpr(); break;
        case 9: _t->quickDownloadMesages(); break;
        case 10: _t->syncAfterStart(); break;
        case 11: _t->on_timerOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizKMSyncThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::startTimer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::stopTimer)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::syncStarted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)(int , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::syncFinished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::processLog)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::promptMessageRequest)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::bubbleNotificationRequest)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::promptFreeServiceExpr)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WizKMSyncThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMSyncThread::promptVipServiceExpr)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject WizKMSyncThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizKMSyncThread.data,
      qt_meta_data_WizKMSyncThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizKMSyncThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizKMSyncThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizKMSyncThread.stringdata0))
        return static_cast<void*>(const_cast< WizKMSyncThread*>(this));
    return QThread::qt_metacast(_clname);
}

int WizKMSyncThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WizKMSyncThread::startTimer(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizKMSyncThread::stopTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WizKMSyncThread::syncStarted(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizKMSyncThread::syncFinished(int _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WizKMSyncThread::processLog(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WizKMSyncThread::promptMessageRequest(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WizKMSyncThread::bubbleNotificationRequest(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WizKMSyncThread::promptFreeServiceExpr()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void WizKMSyncThread::promptVipServiceExpr()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
