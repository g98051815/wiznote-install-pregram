/****************************************************************************
** Meta object code from reading C++ file 'WizSearchReplaceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizSearchReplaceWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizSearchReplaceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizSearchReplaceWidget_t {
    QByteArrayData data[16];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSearchReplaceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSearchReplaceWidget_t qt_meta_stringdata_WizSearchReplaceWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WizSearchReplaceWidget"
QT_MOC_LITERAL(1, 23, 7), // "findPre"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "strTxt"
QT_MOC_LITERAL(4, 39, 14), // "bCasesensitive"
QT_MOC_LITERAL(5, 54, 8), // "findNext"
QT_MOC_LITERAL(6, 63, 14), // "replaceCurrent"
QT_MOC_LITERAL(7, 78, 9), // "strSource"
QT_MOC_LITERAL(8, 88, 9), // "strTarget"
QT_MOC_LITERAL(9, 98, 18), // "replaceAndFindNext"
QT_MOC_LITERAL(10, 117, 10), // "replaceAll"
QT_MOC_LITERAL(11, 128, 18), // "on_btn_pre_clicked"
QT_MOC_LITERAL(12, 147, 19), // "on_btn_next_clicked"
QT_MOC_LITERAL(13, 167, 22), // "on_btn_replace_clicked"
QT_MOC_LITERAL(14, 190, 25), // "on_btn_replaceAll_clicked"
QT_MOC_LITERAL(15, 216, 32) // "on_lineEdit_source_returnPressed"

    },
    "WizSearchReplaceWidget\0findPre\0\0strTxt\0"
    "bCasesensitive\0findNext\0replaceCurrent\0"
    "strSource\0strTarget\0replaceAndFindNext\0"
    "replaceAll\0on_btn_pre_clicked\0"
    "on_btn_next_clicked\0on_btn_replace_clicked\0"
    "on_btn_replaceAll_clicked\0"
    "on_lineEdit_source_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSearchReplaceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    2,   69,    2, 0x06 /* Public */,
       6,    2,   74,    2, 0x06 /* Public */,
       9,    3,   79,    2, 0x06 /* Public */,
      10,    3,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    7,    8,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    7,    8,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizSearchReplaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizSearchReplaceWidget *_t = static_cast<WizSearchReplaceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findPre((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->findNext((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->replaceCurrent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->replaceAndFindNext((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->replaceAll((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->on_btn_pre_clicked(); break;
        case 6: _t->on_btn_next_clicked(); break;
        case 7: _t->on_btn_replace_clicked(); break;
        case 8: _t->on_btn_replaceAll_clicked(); break;
        case 9: _t->on_lineEdit_source_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizSearchReplaceWidget::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchReplaceWidget::findPre)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizSearchReplaceWidget::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchReplaceWidget::findNext)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizSearchReplaceWidget::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchReplaceWidget::replaceCurrent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizSearchReplaceWidget::*_t)(QString , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchReplaceWidget::replaceAndFindNext)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizSearchReplaceWidget::*_t)(QString , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchReplaceWidget::replaceAll)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject WizSearchReplaceWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WizSearchReplaceWidget.data,
      qt_meta_data_WizSearchReplaceWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSearchReplaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSearchReplaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSearchReplaceWidget.stringdata0))
        return static_cast<void*>(const_cast< WizSearchReplaceWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int WizSearchReplaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WizSearchReplaceWidget::findPre(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizSearchReplaceWidget::findNext(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizSearchReplaceWidget::replaceCurrent(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizSearchReplaceWidget::replaceAndFindNext(QString _t1, QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WizSearchReplaceWidget::replaceAll(QString _t1, QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
