/****************************************************************************
** Meta object code from reading C++ file 'WizAdvancedSearchDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizAdvancedSearchDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizAdvancedSearchDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizAdvancedSearchDialog_t {
    QByteArrayData data[14];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAdvancedSearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAdvancedSearchDialog_t qt_meta_stringdata_WizAdvancedSearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WizAdvancedSearchDialog"
QT_MOC_LITERAL(1, 24, 20), // "onRadioButtonClicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 63, 6), // "button"
QT_MOC_LITERAL(5, 70, 27), // "on_comboBox_first_activated"
QT_MOC_LITERAL(6, 98, 4), // "arg1"
QT_MOC_LITERAL(7, 103, 28), // "on_comboBox_second_activated"
QT_MOC_LITERAL(8, 132, 28), // "on_pushButton_cancel_clicked"
QT_MOC_LITERAL(9, 161, 24), // "on_pushButton_ok_clicked"
QT_MOC_LITERAL(10, 186, 25), // "on_toolButton_add_clicked"
QT_MOC_LITERAL(11, 212, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(12, 238, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 255, 4) // "item"

    },
    "WizAdvancedSearchDialog\0onRadioButtonClicked\0"
    "\0QAbstractButton*\0button\0"
    "on_comboBox_first_activated\0arg1\0"
    "on_comboBox_second_activated\0"
    "on_pushButton_cancel_clicked\0"
    "on_pushButton_ok_clicked\0"
    "on_toolButton_add_clicked\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAdvancedSearchDialog[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void WizAdvancedSearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAdvancedSearchDialog *_t = static_cast<WizAdvancedSearchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRadioButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_first_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_second_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_cancel_clicked(); break;
        case 4: _t->on_pushButton_ok_clicked(); break;
        case 5: _t->on_toolButton_add_clicked(); break;
        case 6: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WizAdvancedSearchDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WizAdvancedSearchDialog.data,
      qt_meta_data_WizAdvancedSearchDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAdvancedSearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAdvancedSearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAdvancedSearchDialog.stringdata0))
        return static_cast<void*>(const_cast< WizAdvancedSearchDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WizAdvancedSearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
