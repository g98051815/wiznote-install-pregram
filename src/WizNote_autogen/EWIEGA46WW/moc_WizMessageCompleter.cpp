/****************************************************************************
** Meta object code from reading C++ file 'WizMessageCompleter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizMessageCompleter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizMessageCompleter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizMessageCompleter_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMessageCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMessageCompleter_t qt_meta_stringdata_WizMessageCompleter = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizMessageCompleter"
QT_MOC_LITERAL(1, 20, 12), // "onNoteLoaded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "WizDocumentView*"
QT_MOC_LITERAL(4, 51, 4), // "view"
QT_MOC_LITERAL(5, 56, 17), // "WIZDOCUMENTDATAEX"
QT_MOC_LITERAL(6, 74, 3), // "doc"
QT_MOC_LITERAL(7, 78, 2) // "ok"

    },
    "WizMessageCompleter\0onNoteLoaded\0\0"
    "WizDocumentView*\0view\0WIZDOCUMENTDATAEX\0"
    "doc\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMessageCompleter[] = {

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
       1,    3,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,

       0        // eod
};

void WizMessageCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMessageCompleter *_t = static_cast<WizMessageCompleter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNoteLoaded((*reinterpret_cast< WizDocumentView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATAEX(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject WizMessageCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_WizMessageCompleter.data,
      qt_meta_data_WizMessageCompleter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMessageCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMessageCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMessageCompleter.stringdata0))
        return static_cast<void*>(const_cast< WizMessageCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int WizMessageCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
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
