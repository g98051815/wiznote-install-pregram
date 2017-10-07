/****************************************************************************
** Meta object code from reading C++ file 'WizDocumentEditStatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizDocumentEditStatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizDocumentEditStatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizDocumentEditStatusSyncThread_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocumentEditStatusSyncThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocumentEditStatusSyncThread_t qt_meta_stringdata_WizDocumentEditStatusSyncThread = {
    {
QT_MOC_LITERAL(0, 0, 31), // "WizDocumentEditStatusSyncThread"
QT_MOC_LITERAL(1, 32, 10), // "startTimer"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "interval"
QT_MOC_LITERAL(4, 53, 9), // "stopTimer"
QT_MOC_LITERAL(5, 63, 16), // "documentUploaded"
QT_MOC_LITERAL(6, 80, 9), // "strKbGUID"
QT_MOC_LITERAL(7, 90, 7), // "strGUID"
QT_MOC_LITERAL(8, 98, 11) // "on_timerOut"

    },
    "WizDocumentEditStatusSyncThread\0"
    "startTimer\0\0interval\0stopTimer\0"
    "documentUploaded\0strKbGUID\0strGUID\0"
    "on_timerOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocumentEditStatusSyncThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   38,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,

       0        // eod
};

void WizDocumentEditStatusSyncThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocumentEditStatusSyncThread *_t = static_cast<WizDocumentEditStatusSyncThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->stopTimer(); break;
        case 2: _t->documentUploaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->on_timerOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDocumentEditStatusSyncThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentEditStatusSyncThread::startTimer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizDocumentEditStatusSyncThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentEditStatusSyncThread::stopTimer)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizDocumentEditStatusSyncThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizDocumentEditStatusSyncThread.data,
      qt_meta_data_WizDocumentEditStatusSyncThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocumentEditStatusSyncThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocumentEditStatusSyncThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocumentEditStatusSyncThread.stringdata0))
        return static_cast<void*>(const_cast< WizDocumentEditStatusSyncThread*>(this));
    return QThread::qt_metacast(_clname);
}

int WizDocumentEditStatusSyncThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WizDocumentEditStatusSyncThread::startTimer(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizDocumentEditStatusSyncThread::stopTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_WizDocumentStatusChecker_t {
    QByteArrayData data[17];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocumentStatusChecker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocumentStatusChecker_t qt_meta_stringdata_WizDocumentStatusChecker = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WizDocumentStatusChecker"
QT_MOC_LITERAL(1, 25, 12), // "checkTimeOut"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "strGUID"
QT_MOC_LITERAL(4, 47, 23), // "documentEditingByOthers"
QT_MOC_LITERAL(5, 71, 7), // "editors"
QT_MOC_LITERAL(6, 79, 28), // "checkDocumentChangedFinished"
QT_MOC_LITERAL(7, 108, 8), // "bChanged"
QT_MOC_LITERAL(8, 117, 23), // "checkEditStatusFinished"
QT_MOC_LITERAL(9, 141, 8), // "eidtable"
QT_MOC_LITERAL(10, 150, 9), // "onTimeOut"
QT_MOC_LITERAL(11, 160, 7), // "recheck"
QT_MOC_LITERAL(12, 168, 10), // "initialise"
QT_MOC_LITERAL(13, 179, 11), // "clearTimers"
QT_MOC_LITERAL(14, 191, 15), // "checkEditStatus"
QT_MOC_LITERAL(15, 207, 9), // "strKbGUID"
QT_MOC_LITERAL(16, 217, 15) // "stopCheckStatus"

    },
    "WizDocumentStatusChecker\0checkTimeOut\0"
    "\0strGUID\0documentEditingByOthers\0"
    "editors\0checkDocumentChangedFinished\0"
    "bChanged\0checkEditStatusFinished\0"
    "eidtable\0onTimeOut\0recheck\0initialise\0"
    "clearTimers\0checkEditStatus\0strKbGUID\0"
    "stopCheckStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocumentStatusChecker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       6,    2,   72,    2, 0x06 /* Public */,
       8,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,
      14,    2,   86,    2, 0x0a /* Public */,
      16,    2,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,    3,

       0        // eod
};

void WizDocumentStatusChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocumentStatusChecker *_t = static_cast<WizDocumentStatusChecker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkTimeOut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->documentEditingByOthers((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->checkDocumentChangedFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->checkEditStatusFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->onTimeOut(); break;
        case 5: _t->recheck(); break;
        case 6: _t->initialise(); break;
        case 7: _t->clearTimers(); break;
        case 8: _t->checkEditStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->stopCheckStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDocumentStatusChecker::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentStatusChecker::checkTimeOut)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizDocumentStatusChecker::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentStatusChecker::documentEditingByOthers)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizDocumentStatusChecker::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentStatusChecker::checkDocumentChangedFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizDocumentStatusChecker::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentStatusChecker::checkEditStatusFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject WizDocumentStatusChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizDocumentStatusChecker.data,
      qt_meta_data_WizDocumentStatusChecker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocumentStatusChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocumentStatusChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocumentStatusChecker.stringdata0))
        return static_cast<void*>(const_cast< WizDocumentStatusChecker*>(this));
    return QObject::qt_metacast(_clname);
}

int WizDocumentStatusChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WizDocumentStatusChecker::checkTimeOut(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizDocumentStatusChecker::documentEditingByOthers(QString _t1, QStringList _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizDocumentStatusChecker::checkDocumentChangedFinished(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizDocumentStatusChecker::checkEditStatusFinished(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
