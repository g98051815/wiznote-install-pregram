/****************************************************************************
** Meta object code from reading C++ file 'WizPopupButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizPopupButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizPopupButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizPopupButton_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizPopupButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizPopupButton_t qt_meta_stringdata_WizPopupButton = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WizPopupButton"
QT_MOC_LITERAL(1, 15, 19), // "on_action_triggered"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "WizPopupButton\0on_action_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizPopupButton[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WizPopupButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizPopupButton *_t = static_cast<WizPopupButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_action_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizPopupButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_WizPopupButton.data,
      qt_meta_data_WizPopupButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizPopupButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizPopupButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizPopupButton.stringdata0))
        return static_cast<void*>(const_cast< WizPopupButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int WizPopupButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WizViewTypePopupButton_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizViewTypePopupButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizViewTypePopupButton_t qt_meta_stringdata_WizViewTypePopupButton = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WizViewTypePopupButton"
QT_MOC_LITERAL(1, 23, 15), // "viewTypeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "type"
QT_MOC_LITERAL(4, 45, 18), // "on_viewTypeChanged"
QT_MOC_LITERAL(5, 64, 19) // "on_action_triggered"

    },
    "WizViewTypePopupButton\0viewTypeChanged\0"
    "\0type\0on_viewTypeChanged\0on_action_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizViewTypePopupButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void WizViewTypePopupButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizViewTypePopupButton *_t = static_cast<WizViewTypePopupButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_viewTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_action_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizViewTypePopupButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizViewTypePopupButton::viewTypeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizViewTypePopupButton::staticMetaObject = {
    { &WizPopupButton::staticMetaObject, qt_meta_stringdata_WizViewTypePopupButton.data,
      qt_meta_data_WizViewTypePopupButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizViewTypePopupButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizViewTypePopupButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizViewTypePopupButton.stringdata0))
        return static_cast<void*>(const_cast< WizViewTypePopupButton*>(this));
    return WizPopupButton::qt_metacast(_clname);
}

int WizViewTypePopupButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizPopupButton::qt_metacall(_c, _id, _a);
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
void WizViewTypePopupButton::viewTypeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizSortingPopupButton_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSortingPopupButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSortingPopupButton_t qt_meta_stringdata_WizSortingPopupButton = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WizSortingPopupButton"
QT_MOC_LITERAL(1, 22, 18), // "sortingTypeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "type"
QT_MOC_LITERAL(4, 47, 21), // "on_sortingTypeChanged"
QT_MOC_LITERAL(5, 69, 19) // "on_action_triggered"

    },
    "WizSortingPopupButton\0sortingTypeChanged\0"
    "\0type\0on_sortingTypeChanged\0"
    "on_action_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSortingPopupButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void WizSortingPopupButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizSortingPopupButton *_t = static_cast<WizSortingPopupButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortingTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_sortingTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_action_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizSortingPopupButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSortingPopupButton::sortingTypeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizSortingPopupButton::staticMetaObject = {
    { &WizPopupButton::staticMetaObject, qt_meta_stringdata_WizSortingPopupButton.data,
      qt_meta_data_WizSortingPopupButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSortingPopupButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSortingPopupButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSortingPopupButton.stringdata0))
        return static_cast<void*>(const_cast< WizSortingPopupButton*>(this));
    return WizPopupButton::qt_metacast(_clname);
}

int WizSortingPopupButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizPopupButton::qt_metacall(_c, _id, _a);
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
void WizSortingPopupButton::sortingTypeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
