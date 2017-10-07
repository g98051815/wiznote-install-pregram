/****************************************************************************
** Meta object code from reading C++ file 'WizTitleEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizTitleEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizTitleEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizTitleEdit_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizTitleEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizTitleEdit_t qt_meta_stringdata_WizTitleEdit = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WizTitleEdit"
QT_MOC_LITERAL(1, 13, 11), // "titleEdited"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "strTitle"
QT_MOC_LITERAL(4, 35, 22), // "onTitleEditingFinished"
QT_MOC_LITERAL(5, 58, 7), // "setText"
QT_MOC_LITERAL(6, 66, 4), // "text"
QT_MOC_LITERAL(7, 71, 18), // "onInsertCompletion"
QT_MOC_LITERAL(8, 90, 5), // "index"
QT_MOC_LITERAL(9, 96, 20), // "onTitleReturnPressed"
QT_MOC_LITERAL(10, 117, 10), // "onTextEdit"
QT_MOC_LITERAL(11, 128, 13) // "onTextChanged"

    },
    "WizTitleEdit\0titleEdited\0\0strTitle\0"
    "onTitleEditingFinished\0setText\0text\0"
    "onInsertCompletion\0index\0onTitleReturnPressed\0"
    "onTextEdit\0onTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizTitleEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void WizTitleEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizTitleEdit *_t = static_cast<WizTitleEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onTitleEditingFinished(); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onInsertCompletion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onTitleReturnPressed(); break;
        case 5: _t->onTextEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizTitleEdit::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTitleEdit::titleEdited)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizTitleEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_WizTitleEdit.data,
      qt_meta_data_WizTitleEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizTitleEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizTitleEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizTitleEdit.stringdata0))
        return static_cast<void*>(const_cast< WizTitleEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int WizTitleEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WizTitleEdit::titleEdited(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
