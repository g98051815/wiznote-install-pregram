/****************************************************************************
** Meta object code from reading C++ file 'WizConsoleDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizConsoleDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizConsoleDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizConsoleDialog_t {
    QByteArrayData data[11];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizConsoleDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizConsoleDialog_t qt_meta_stringdata_WizConsoleDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WizConsoleDialog"
QT_MOC_LITERAL(1, 17, 20), // "onConsoleTextChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "onConsoleSliderMoved"
QT_MOC_LITERAL(4, 60, 5), // "value"
QT_MOC_LITERAL(5, 66, 22), // "onConsoleCopyAvailable"
QT_MOC_LITERAL(6, 89, 3), // "yes"
QT_MOC_LITERAL(7, 93, 17), // "onBtnClearClicked"
QT_MOC_LITERAL(8, 111, 20), // "onLogBufferReadyRead"
QT_MOC_LITERAL(9, 132, 18), // "onBtnSaveAsClicked"
QT_MOC_LITERAL(10, 151, 27) // "onBtnCopyToClipboardClicked"

    },
    "WizConsoleDialog\0onConsoleTextChanged\0"
    "\0onConsoleSliderMoved\0value\0"
    "onConsoleCopyAvailable\0yes\0onBtnClearClicked\0"
    "onLogBufferReadyRead\0onBtnSaveAsClicked\0"
    "onBtnCopyToClipboardClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizConsoleDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizConsoleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizConsoleDialog *_t = static_cast<WizConsoleDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConsoleTextChanged(); break;
        case 1: _t->onConsoleSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onConsoleCopyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onBtnClearClicked(); break;
        case 4: _t->onLogBufferReadyRead(); break;
        case 5: _t->onBtnSaveAsClicked(); break;
        case 6: _t->onBtnCopyToClipboardClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WizConsoleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WizConsoleDialog.data,
      qt_meta_data_WizConsoleDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizConsoleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizConsoleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizConsoleDialog.stringdata0))
        return static_cast<void*>(const_cast< WizConsoleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WizConsoleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
