/****************************************************************************
** Meta object code from reading C++ file 'WizTagListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizTagListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizTagListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizTagListWidget_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizTagListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizTagListWidget_t qt_meta_stringdata_WizTagListWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WizTagListWidget"
QT_MOC_LITERAL(1, 17, 19), // "on_list_itemChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 55, 5), // "pItem"
QT_MOC_LITERAL(5, 61, 25) // "on_tagsEdit_returnPressed"

    },
    "WizTagListWidget\0on_list_itemChanged\0"
    "\0QListWidgetItem*\0pItem\0"
    "on_tagsEdit_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizTagListWidget[] = {

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
       5,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void WizTagListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizTagListWidget *_t = static_cast<WizTagListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_list_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_tagsEdit_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject WizTagListWidget::staticMetaObject = {
    { &WizPopupWidget::staticMetaObject, qt_meta_stringdata_WizTagListWidget.data,
      qt_meta_data_WizTagListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizTagListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizTagListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizTagListWidget.stringdata0))
        return static_cast<void*>(const_cast< WizTagListWidget*>(this));
    return WizPopupWidget::qt_metacast(_clname);
}

int WizTagListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizPopupWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
