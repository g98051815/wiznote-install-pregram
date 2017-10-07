/****************************************************************************
** Meta object code from reading C++ file 'WizCommentManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/core/WizCommentManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizCommentManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizCommentManager_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizCommentManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizCommentManager_t qt_meta_stringdata_WizCommentManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizCommentManager"
QT_MOC_LITERAL(1, 18, 18), // "commentUrlAcquired"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "GUID"
QT_MOC_LITERAL(4, 43, 3), // "url"
QT_MOC_LITERAL(5, 47, 20), // "commentCountAcquired"
QT_MOC_LITERAL(6, 68, 5), // "count"
QT_MOC_LITERAL(7, 74, 21), // "on_commentUrlAcquired"
QT_MOC_LITERAL(8, 96, 23), // "on_commentCountAcquired"
QT_MOC_LITERAL(9, 120, 16) // "on_timer_timeOut"

    },
    "WizCommentManager\0commentUrlAcquired\0"
    "\0GUID\0url\0commentCountAcquired\0count\0"
    "on_commentUrlAcquired\0on_commentCountAcquired\0"
    "on_timer_timeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizCommentManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   49,    2, 0x0a /* Public */,
       8,    2,   54,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    6,
    QMetaType::Void,

       0        // eod
};

void WizCommentManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizCommentManager *_t = static_cast<WizCommentManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commentUrlAcquired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->commentCountAcquired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_commentUrlAcquired((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->on_commentCountAcquired((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_timer_timeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizCommentManager::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizCommentManager::commentUrlAcquired)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizCommentManager::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizCommentManager::commentCountAcquired)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizCommentManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizCommentManager.data,
      qt_meta_data_WizCommentManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizCommentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizCommentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizCommentManager.stringdata0))
        return static_cast<void*>(const_cast< WizCommentManager*>(this));
    return QObject::qt_metacast(_clname);
}

int WizCommentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizCommentManager::commentUrlAcquired(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizCommentManager::commentCountAcquired(const QString & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WizCommentQuerier_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizCommentQuerier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizCommentQuerier_t qt_meta_stringdata_WizCommentQuerier = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizCommentQuerier"
QT_MOC_LITERAL(1, 18, 18), // "commentUrlAcquired"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "GUID"
QT_MOC_LITERAL(4, 43, 3), // "url"
QT_MOC_LITERAL(5, 47, 20), // "commentCountAcquired"
QT_MOC_LITERAL(6, 68, 5) // "count"

    },
    "WizCommentQuerier\0commentUrlAcquired\0"
    "\0GUID\0url\0commentCountAcquired\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizCommentQuerier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    6,

       0        // eod
};

void WizCommentQuerier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizCommentQuerier *_t = static_cast<WizCommentQuerier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commentUrlAcquired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->commentCountAcquired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizCommentQuerier::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizCommentQuerier::commentUrlAcquired)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizCommentQuerier::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizCommentQuerier::commentCountAcquired)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizCommentQuerier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizCommentQuerier.data,
      qt_meta_data_WizCommentQuerier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizCommentQuerier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizCommentQuerier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizCommentQuerier.stringdata0))
        return static_cast<void*>(const_cast< WizCommentQuerier*>(this));
    return QObject::qt_metacast(_clname);
}

int WizCommentQuerier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void WizCommentQuerier::commentUrlAcquired(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizCommentQuerier::commentCountAcquired(const QString & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
