/****************************************************************************
** Meta object code from reading C++ file 'WizObjectDataDownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizObjectDataDownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizObjectDataDownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizObjectDownloaderHost_t {
    QByteArrayData data[13];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizObjectDownloaderHost_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizObjectDownloaderHost_t qt_meta_stringdata_WizObjectDownloaderHost = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WizObjectDownloaderHost"
QT_MOC_LITERAL(1, 24, 12), // "downloadDone"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "WIZOBJECTDATA"
QT_MOC_LITERAL(4, 52, 4), // "data"
QT_MOC_LITERAL(5, 57, 8), // "bSucceed"
QT_MOC_LITERAL(6, 66, 8), // "finished"
QT_MOC_LITERAL(7, 75, 16), // "downloadProgress"
QT_MOC_LITERAL(8, 92, 10), // "objectGUID"
QT_MOC_LITERAL(9, 103, 9), // "totalSize"
QT_MOC_LITERAL(10, 113, 10), // "loadedSize"
QT_MOC_LITERAL(11, 124, 15), // "on_downloadDone"
QT_MOC_LITERAL(12, 140, 19) // "on_downloadProgress"

    },
    "WizObjectDownloaderHost\0downloadDone\0"
    "\0WIZOBJECTDATA\0data\0bSucceed\0finished\0"
    "downloadProgress\0objectGUID\0totalSize\0"
    "loadedSize\0on_downloadDone\0"
    "on_downloadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizObjectDownloaderHost[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    0,   44,    2, 0x06 /* Public */,
       7,    3,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   52,    2, 0x08 /* Private */,
      12,    3,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    9,   10,

       0        // eod
};

void WizObjectDownloaderHost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizObjectDownloaderHost *_t = static_cast<WizObjectDownloaderHost *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadDone((*reinterpret_cast< const WIZOBJECTDATA(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->finished(); break;
        case 2: _t->downloadProgress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->on_downloadDone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->on_downloadProgress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizObjectDownloaderHost::*_t)(const WIZOBJECTDATA & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizObjectDownloaderHost::downloadDone)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizObjectDownloaderHost::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizObjectDownloaderHost::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizObjectDownloaderHost::*_t)(QString , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizObjectDownloaderHost::downloadProgress)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WizObjectDownloaderHost::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizObjectDownloaderHost.data,
      qt_meta_data_WizObjectDownloaderHost,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizObjectDownloaderHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizObjectDownloaderHost::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizObjectDownloaderHost.stringdata0))
        return static_cast<void*>(const_cast< WizObjectDownloaderHost*>(this));
    return QObject::qt_metacast(_clname);
}

int WizObjectDownloaderHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizObjectDownloaderHost::downloadDone(const WIZOBJECTDATA & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizObjectDownloaderHost::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WizObjectDownloaderHost::downloadProgress(QString _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_WizObjectDownloader_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizObjectDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizObjectDownloader_t qt_meta_stringdata_WizObjectDownloader = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizObjectDownloader"
QT_MOC_LITERAL(1, 20, 12), // "downloadDone"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "objectGuid"
QT_MOC_LITERAL(4, 45, 8), // "bSucceed"
QT_MOC_LITERAL(5, 54, 16), // "downloadProgress"
QT_MOC_LITERAL(6, 71, 9), // "totalSize"
QT_MOC_LITERAL(7, 81, 10), // "loadedSize"
QT_MOC_LITERAL(8, 92, 19) // "on_downloadProgress"

    },
    "WizObjectDownloader\0downloadDone\0\0"
    "objectGuid\0bSucceed\0downloadProgress\0"
    "totalSize\0loadedSize\0on_downloadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizObjectDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

       0        // eod
};

void WizObjectDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizObjectDownloader *_t = static_cast<WizObjectDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadDone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->on_downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizObjectDownloader::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizObjectDownloader::downloadDone)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizObjectDownloader::*_t)(QString , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizObjectDownloader::downloadProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizObjectDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizObjectDownloader.data,
      qt_meta_data_WizObjectDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizObjectDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizObjectDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizObjectDownloader.stringdata0))
        return static_cast<void*>(const_cast< WizObjectDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int WizObjectDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WizObjectDownloader::downloadDone(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizObjectDownloader::downloadProgress(QString _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WizFileDownloader_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizFileDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizFileDownloader_t qt_meta_stringdata_WizFileDownloader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizFileDownloader"
QT_MOC_LITERAL(1, 18, 12), // "downloadDone"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "strFileName"
QT_MOC_LITERAL(4, 44, 8) // "bSucceed"

    },
    "WizFileDownloader\0downloadDone\0\0"
    "strFileName\0bSucceed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizFileDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,

       0        // eod
};

void WizFileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizFileDownloader *_t = static_cast<WizFileDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadDone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizFileDownloader::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizFileDownloader::downloadDone)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizFileDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizFileDownloader.data,
      qt_meta_data_WizFileDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizFileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizFileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizFileDownloader.stringdata0))
        return static_cast<void*>(const_cast< WizFileDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int WizFileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WizFileDownloader::downloadDone(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
