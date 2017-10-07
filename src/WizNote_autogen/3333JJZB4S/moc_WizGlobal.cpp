/****************************************************************************
** Meta object code from reading C++ file 'WizGlobal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizGlobal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizGlobal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizGlobal_t {
    QByteArrayData data[12];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizGlobal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizGlobal_t qt_meta_stringdata_WizGlobal = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WizGlobal"
QT_MOC_LITERAL(1, 10, 17), // "viewNoteRequested"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "WizDocumentView*"
QT_MOC_LITERAL(4, 46, 4), // "view"
QT_MOC_LITERAL(5, 51, 17), // "WIZDOCUMENTDATAEX"
QT_MOC_LITERAL(6, 69, 3), // "doc"
QT_MOC_LITERAL(7, 73, 12), // "forceEditing"
QT_MOC_LITERAL(8, 86, 14), // "viewNoteLoaded"
QT_MOC_LITERAL(9, 101, 3), // "bOk"
QT_MOC_LITERAL(10, 105, 18), // "closeNoteRequested"
QT_MOC_LITERAL(11, 124, 22) // "markdownSettingChanged"

    },
    "WizGlobal\0viewNoteRequested\0\0"
    "WizDocumentView*\0view\0WIZDOCUMENTDATAEX\0"
    "doc\0forceEditing\0viewNoteLoaded\0bOk\0"
    "closeNoteRequested\0markdownSettingChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizGlobal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       8,    3,   41,    2, 0x06 /* Public */,
      10,    1,   48,    2, 0x06 /* Public */,
      11,    0,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void WizGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizGlobal *_t = static_cast<WizGlobal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewNoteRequested((*reinterpret_cast< WizDocumentView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATAEX(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->viewNoteLoaded((*reinterpret_cast< WizDocumentView*(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATAEX(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->closeNoteRequested((*reinterpret_cast< WizDocumentView*(*)>(_a[1]))); break;
        case 3: _t->markdownSettingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizGlobal::*_t)(WizDocumentView * , const WIZDOCUMENTDATAEX & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizGlobal::viewNoteRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizGlobal::*_t)(WizDocumentView * , const WIZDOCUMENTDATAEX & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizGlobal::viewNoteLoaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizGlobal::*_t)(WizDocumentView * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizGlobal::closeNoteRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizGlobal::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizGlobal::markdownSettingChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject WizGlobal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizGlobal.data,
      qt_meta_data_WizGlobal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizGlobal.stringdata0))
        return static_cast<void*>(const_cast< WizGlobal*>(this));
    return QObject::qt_metacast(_clname);
}

int WizGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WizGlobal::viewNoteRequested(WizDocumentView * _t1, const WIZDOCUMENTDATAEX & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizGlobal::viewNoteLoaded(WizDocumentView * _t1, const WIZDOCUMENTDATAEX & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizGlobal::closeNoteRequested(WizDocumentView * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizGlobal::markdownSettingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
