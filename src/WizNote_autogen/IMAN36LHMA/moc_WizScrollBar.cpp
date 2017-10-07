/****************************************************************************
** Meta object code from reading C++ file 'WizScrollBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizScrollBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizScrollBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizScrollBar_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizScrollBar_t qt_meta_stringdata_WizScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WizScrollBar"
QT_MOC_LITERAL(1, 13, 10), // "showHandle"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "hideHandle"
QT_MOC_LITERAL(4, 36, 21), // "on_sourceValueChanged"
QT_MOC_LITERAL(5, 58, 5), // "value"
QT_MOC_LITERAL(6, 64, 21), // "on_sourceRangeChanged"
QT_MOC_LITERAL(7, 86, 3), // "min"
QT_MOC_LITERAL(8, 90, 3), // "max"
QT_MOC_LITERAL(9, 94, 15), // "on_valueChanged"
QT_MOC_LITERAL(10, 110, 16) // "on_scrollTimeout"

    },
    "WizScrollBar\0showHandle\0\0hideHandle\0"
    "on_sourceValueChanged\0value\0"
    "on_sourceRangeChanged\0min\0max\0"
    "on_valueChanged\0on_scrollTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizScrollBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       6,    2,   49,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void WizScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizScrollBar *_t = static_cast<WizScrollBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showHandle(); break;
        case 1: _t->hideHandle(); break;
        case 2: _t->on_sourceValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_sourceRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_scrollTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject WizScrollBar::staticMetaObject = {
    { &QScrollBar::staticMetaObject, qt_meta_stringdata_WizScrollBar.data,
      qt_meta_data_WizScrollBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizScrollBar.stringdata0))
        return static_cast<void*>(const_cast< WizScrollBar*>(this));
    return QScrollBar::qt_metacast(_clname);
}

int WizScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WizListWidgetWithCustomScorllBar_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizListWidgetWithCustomScorllBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizListWidgetWithCustomScorllBar_t qt_meta_stringdata_WizListWidgetWithCustomScorllBar = {
    {
QT_MOC_LITERAL(0, 0, 32) // "WizListWidgetWithCustomScorllBar"

    },
    "WizListWidgetWithCustomScorllBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizListWidgetWithCustomScorllBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WizListWidgetWithCustomScorllBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WizListWidgetWithCustomScorllBar::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_WizListWidgetWithCustomScorllBar.data,
      qt_meta_data_WizListWidgetWithCustomScorllBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizListWidgetWithCustomScorllBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizListWidgetWithCustomScorllBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizListWidgetWithCustomScorllBar.stringdata0))
        return static_cast<void*>(const_cast< WizListWidgetWithCustomScorllBar*>(this));
    return QListWidget::qt_metacast(_clname);
}

int WizListWidgetWithCustomScorllBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
