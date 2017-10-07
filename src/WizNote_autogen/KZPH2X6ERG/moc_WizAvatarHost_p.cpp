/****************************************************************************
** Meta object code from reading C++ file 'WizAvatarHost_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/sync/WizAvatarHost_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizAvatarHost_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizAvatarDownloader_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAvatarDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAvatarDownloader_t qt_meta_stringdata_WizAvatarDownloader = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizAvatarDownloader"
QT_MOC_LITERAL(1, 20, 10), // "downloaded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "strUserGUID"
QT_MOC_LITERAL(4, 44, 8), // "bSucceed"
QT_MOC_LITERAL(5, 53, 8), // "download"
QT_MOC_LITERAL(6, 62, 14) // "isSystemAvatar"

    },
    "WizAvatarDownloader\0downloaded\0\0"
    "strUserGUID\0bSucceed\0download\0"
    "isSystemAvatar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAvatarDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   29,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    6,

       0        // eod
};

void WizAvatarDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAvatarDownloader *_t = static_cast<WizAvatarDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->download((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizAvatarDownloader::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAvatarDownloader::downloaded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizAvatarDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizAvatarDownloader.data,
      qt_meta_data_WizAvatarDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAvatarDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAvatarDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAvatarDownloader.stringdata0))
        return static_cast<void*>(const_cast< WizAvatarDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int WizAvatarDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizAvatarDownloader::downloaded(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizAvatarHostPrivate_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAvatarHostPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAvatarHostPrivate_t qt_meta_stringdata_WizAvatarHostPrivate = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WizAvatarHostPrivate"
QT_MOC_LITERAL(1, 21, 13), // "on_downloaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "strUserID"
QT_MOC_LITERAL(4, 46, 8) // "bSucceed"

    },
    "WizAvatarHostPrivate\0on_downloaded\0\0"
    "strUserID\0bSucceed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAvatarHostPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,

       0        // eod
};

void WizAvatarHostPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAvatarHostPrivate *_t = static_cast<WizAvatarHostPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_downloaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject WizAvatarHostPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizAvatarHostPrivate.data,
      qt_meta_data_WizAvatarHostPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAvatarHostPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAvatarHostPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAvatarHostPrivate.stringdata0))
        return static_cast<void*>(const_cast< WizAvatarHostPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int WizAvatarHostPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
