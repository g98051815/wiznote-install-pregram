/****************************************************************************
** Meta object code from reading C++ file 'WizWebEngineInjectObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizWebEngineInjectObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizWebEngineInjectObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizCodeExternal_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizCodeExternal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizCodeExternal_t qt_meta_stringdata_WizCodeExternal = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WizCodeExternal"
QT_MOC_LITERAL(1, 16, 6), // "accept"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "reject"
QT_MOC_LITERAL(4, 31, 10), // "insertHtml"
QT_MOC_LITERAL(5, 42, 9), // "strResult"
QT_MOC_LITERAL(6, 52, 15), // "getLastCodeType"
QT_MOC_LITERAL(7, 68, 16), // "saveLastCodeType"
QT_MOC_LITERAL(8, 85, 8) // "codeType"

    },
    "WizCodeExternal\0accept\0\0reject\0"
    "insertHtml\0strResult\0getLastCodeType\0"
    "saveLastCodeType\0codeType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizCodeExternal[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x02 /* Public */,
       3,    0,   40,    2, 0x02 /* Public */,
       4,    1,   41,    2, 0x02 /* Public */,
       6,    0,   44,    2, 0x02 /* Public */,
       7,    1,   45,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void WizCodeExternal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizCodeExternal *_t = static_cast<WizCodeExternal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->insertHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->getLastCodeType();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->saveLastCodeType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WizCodeExternal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizCodeExternal.data,
      qt_meta_data_WizCodeExternal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizCodeExternal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizCodeExternal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizCodeExternal.stringdata0))
        return static_cast<void*>(const_cast< WizCodeExternal*>(this));
    return QObject::qt_metacast(_clname);
}

int WizCodeExternal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_WizCommentsExternal_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizCommentsExternal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizCommentsExternal_t qt_meta_stringdata_WizCommentsExternal = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizCommentsExternal"
QT_MOC_LITERAL(1, 20, 7), // "openUrl"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6) // "strUrl"

    },
    "WizCommentsExternal\0openUrl\0\0strUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizCommentsExternal[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void WizCommentsExternal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizCommentsExternal *_t = static_cast<WizCommentsExternal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WizCommentsExternal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizCommentsExternal.data,
      qt_meta_data_WizCommentsExternal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizCommentsExternal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizCommentsExternal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizCommentsExternal.stringdata0))
        return static_cast<void*>(const_cast< WizCommentsExternal*>(this));
    return QObject::qt_metacast(_clname);
}

int WizCommentsExternal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
