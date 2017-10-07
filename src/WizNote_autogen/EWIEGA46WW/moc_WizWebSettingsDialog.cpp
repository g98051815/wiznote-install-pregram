/****************************************************************************
** Meta object code from reading C++ file 'WizWebSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizWebSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizWebSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizWebSettingsDialog_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizWebSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizWebSettingsDialog_t qt_meta_stringdata_WizWebSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WizWebSettingsDialog"
QT_MOC_LITERAL(1, 21, 13), // "on_web_loaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 2), // "ok"
QT_MOC_LITERAL(4, 39, 13), // "loadErrorPage"
QT_MOC_LITERAL(5, 53, 26), // "on_networkRequest_finished"
QT_MOC_LITERAL(6, 80, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 95, 5) // "reply"

    },
    "WizWebSettingsDialog\0on_web_loaded\0\0"
    "ok\0loadErrorPage\0on_networkRequest_finished\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizWebSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void WizWebSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizWebSettingsDialog *_t = static_cast<WizWebSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_web_loaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->loadErrorPage(); break;
        case 2: _t->on_networkRequest_finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WizWebSettingsDialog::staticMetaObject = {
    { &WizWebEngineViewContainerDialog::staticMetaObject, qt_meta_stringdata_WizWebSettingsDialog.data,
      qt_meta_data_WizWebSettingsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizWebSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizWebSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizWebSettingsDialog.stringdata0))
        return static_cast<void*>(const_cast< WizWebSettingsDialog*>(this));
    return WizWebEngineViewContainerDialog::qt_metacast(_clname);
}

int WizWebSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizWebEngineViewContainerDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WizWebSettingsWithTokenDialog_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizWebSettingsWithTokenDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizWebSettingsWithTokenDialog_t qt_meta_stringdata_WizWebSettingsWithTokenDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WizWebSettingsWithTokenDialog"
QT_MOC_LITERAL(1, 30, 17), // "on_token_acquired"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5) // "token"

    },
    "WizWebSettingsWithTokenDialog\0"
    "on_token_acquired\0\0token"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizWebSettingsWithTokenDialog[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void WizWebSettingsWithTokenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizWebSettingsWithTokenDialog *_t = static_cast<WizWebSettingsWithTokenDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_token_acquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WizWebSettingsWithTokenDialog::staticMetaObject = {
    { &WizWebSettingsDialog::staticMetaObject, qt_meta_stringdata_WizWebSettingsWithTokenDialog.data,
      qt_meta_data_WizWebSettingsWithTokenDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizWebSettingsWithTokenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizWebSettingsWithTokenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizWebSettingsWithTokenDialog.stringdata0))
        return static_cast<void*>(const_cast< WizWebSettingsWithTokenDialog*>(this));
    return WizWebSettingsDialog::qt_metacast(_clname);
}

int WizWebSettingsWithTokenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizWebSettingsDialog::qt_metacall(_c, _id, _a);
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
