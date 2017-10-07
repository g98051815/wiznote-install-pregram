/****************************************************************************
** Meta object code from reading C++ file 'WizAsyncApi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/sync/WizAsyncApi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizAsyncApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizAsyncApi_t {
    QByteArrayData data[13];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAsyncApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAsyncApi_t qt_meta_stringdata_WizAsyncApi = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WizAsyncApi"
QT_MOC_LITERAL(1, 12, 13), // "loginFinished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "WIZUSERINFO"
QT_MOC_LITERAL(4, 39, 4), // "info"
QT_MOC_LITERAL(5, 44, 16), // "getTokenFinished"
QT_MOC_LITERAL(6, 61, 8), // "strToken"
QT_MOC_LITERAL(7, 70, 17), // "keepAliveFinished"
QT_MOC_LITERAL(8, 88, 3), // "bOk"
QT_MOC_LITERAL(9, 92, 23), // "registerAccountFinished"
QT_MOC_LITERAL(10, 116, 31), // "uploadMessageReadStatusFinished"
QT_MOC_LITERAL(11, 148, 3), // "ids"
QT_MOC_LITERAL(12, 152, 33) // "uploadMessageDeleteStatusFini..."

    },
    "WizAsyncApi\0loginFinished\0\0WIZUSERINFO\0"
    "info\0getTokenFinished\0strToken\0"
    "keepAliveFinished\0bOk\0registerAccountFinished\0"
    "uploadMessageReadStatusFinished\0ids\0"
    "uploadMessageDeleteStatusFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAsyncApi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,
      10,    1,   56,    2, 0x06 /* Public */,
      12,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void WizAsyncApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAsyncApi *_t = static_cast<WizAsyncApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginFinished((*reinterpret_cast< const WIZUSERINFO(*)>(_a[1]))); break;
        case 1: _t->getTokenFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->keepAliveFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->registerAccountFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->uploadMessageReadStatusFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->uploadMessageDeleteStatusFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizAsyncApi::*_t)(const WIZUSERINFO & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAsyncApi::loginFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizAsyncApi::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAsyncApi::getTokenFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizAsyncApi::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAsyncApi::keepAliveFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizAsyncApi::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAsyncApi::registerAccountFinished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizAsyncApi::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAsyncApi::uploadMessageReadStatusFinished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WizAsyncApi::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAsyncApi::uploadMessageDeleteStatusFinished)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject WizAsyncApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizAsyncApi.data,
      qt_meta_data_WizAsyncApi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAsyncApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAsyncApi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAsyncApi.stringdata0))
        return static_cast<void*>(const_cast< WizAsyncApi*>(this));
    return QObject::qt_metacast(_clname);
}

int WizAsyncApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WizAsyncApi::loginFinished(const WIZUSERINFO & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizAsyncApi::getTokenFinished(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizAsyncApi::keepAliveFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizAsyncApi::registerAccountFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WizAsyncApi::uploadMessageReadStatusFinished(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WizAsyncApi::uploadMessageDeleteStatusFinished(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
