/****************************************************************************
** Meta object code from reading C++ file 'WizProgressDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizProgressDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizProgressDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizProgressDialog_t {
    QByteArrayData data[11];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizProgressDialog_t qt_meta_stringdata_WizProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizProgressDialog"
QT_MOC_LITERAL(1, 18, 11), // "stopRequest"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "setProgress"
QT_MOC_LITERAL(4, 43, 10), // "strObjGUID"
QT_MOC_LITERAL(5, 54, 4), // "nMax"
QT_MOC_LITERAL(6, 59, 8), // "nCurrent"
QT_MOC_LITERAL(7, 68, 15), // "setActionString"
QT_MOC_LITERAL(8, 84, 9), // "strAction"
QT_MOC_LITERAL(9, 94, 19), // "on_btn_stop_clicked"
QT_MOC_LITERAL(10, 114, 19) // "on_btn_hide_clicked"

    },
    "WizProgressDialog\0stopRequest\0\0"
    "setProgress\0strObjGUID\0nMax\0nCurrent\0"
    "setActionString\0strAction\0on_btn_stop_clicked\0"
    "on_btn_hide_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizProgressDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   45,    2, 0x0a /* Public */,
       3,    2,   52,    2, 0x0a /* Public */,
       7,    1,   57,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizProgressDialog *_t = static_cast<WizProgressDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopRequest(); break;
        case 1: _t->setProgress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->setProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setActionString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_btn_stop_clicked(); break;
        case 5: _t->on_btn_hide_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizProgressDialog::stopRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WizProgressDialog.data,
      qt_meta_data_WizProgressDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizProgressDialog.stringdata0))
        return static_cast<void*>(const_cast< WizProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WizProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void WizProgressDialog::stopRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
