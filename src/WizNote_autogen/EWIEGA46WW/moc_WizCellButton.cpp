/****************************************************************************
** Meta object code from reading C++ file 'WizCellButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizCellButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizCellButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizCellButton_t {
    QByteArrayData data[6];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizCellButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizCellButton_t qt_meta_stringdata_WizCellButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WizCellButton"
QT_MOC_LITERAL(1, 14, 8), // "setState"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "state"
QT_MOC_LITERAL(4, 30, 8), // "setCount"
QT_MOC_LITERAL(5, 39, 5) // "count"

    },
    "WizCellButton\0setState\0\0state\0setCount\0"
    "count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizCellButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void WizCellButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizCellButton *_t = static_cast<WizCellButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WizCellButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_WizCellButton.data,
      qt_meta_data_WizCellButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizCellButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizCellButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizCellButton.stringdata0))
        return static_cast<void*>(const_cast< WizCellButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int WizCellButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WizRoundCellButton_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizRoundCellButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizRoundCellButton_t qt_meta_stringdata_WizRoundCellButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WizRoundCellButton"
QT_MOC_LITERAL(1, 19, 8), // "setState"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5) // "state"

    },
    "WizRoundCellButton\0setState\0\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizRoundCellButton[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void WizRoundCellButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizRoundCellButton *_t = static_cast<WizRoundCellButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WizRoundCellButton::staticMetaObject = {
    { &WizCellButton::staticMetaObject, qt_meta_stringdata_WizRoundCellButton.data,
      qt_meta_data_WizRoundCellButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizRoundCellButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizRoundCellButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizRoundCellButton.stringdata0))
        return static_cast<void*>(const_cast< WizRoundCellButton*>(this));
    return WizCellButton::qt_metacast(_clname);
}

int WizRoundCellButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizCellButton::qt_metacall(_c, _id, _a);
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
