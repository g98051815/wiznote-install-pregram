/****************************************************************************
** Meta object code from reading C++ file 'WizDocTemplateDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizDocTemplateDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizDocTemplateDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizDocTemplateDialog_t {
    QByteArrayData data[18];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocTemplateDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocTemplateDialog_t qt_meta_stringdata_WizDocTemplateDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WizDocTemplateDialog"
QT_MOC_LITERAL(1, 21, 24), // "documentTemplateSelected"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "TemplateData"
QT_MOC_LITERAL(4, 60, 8), // "tmplData"
QT_MOC_LITERAL(5, 69, 17), // "upgradeVipRequest"
QT_MOC_LITERAL(6, 87, 11), // "itemClicked"
QT_MOC_LITERAL(7, 99, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 116, 4), // "item"
QT_MOC_LITERAL(9, 121, 17), // "on_btn_ok_clicked"
QT_MOC_LITERAL(10, 139, 21), // "on_btn_cancel_clicked"
QT_MOC_LITERAL(11, 161, 30), // "download_templateFile_finished"
QT_MOC_LITERAL(12, 192, 8), // "fileName"
QT_MOC_LITERAL(13, 201, 2), // "ok"
QT_MOC_LITERAL(14, 204, 26), // "load_templateDemo_finished"
QT_MOC_LITERAL(15, 231, 2), // "Ok"
QT_MOC_LITERAL(16, 234, 16), // "purchaseFinished"
QT_MOC_LITERAL(17, 251, 25) // "checkUnfinishedTransation"

    },
    "WizDocTemplateDialog\0documentTemplateSelected\0"
    "\0TemplateData\0tmplData\0upgradeVipRequest\0"
    "itemClicked\0QTreeWidgetItem*\0item\0"
    "on_btn_ok_clicked\0on_btn_cancel_clicked\0"
    "download_templateFile_finished\0fileName\0"
    "ok\0load_templateDemo_finished\0Ok\0"
    "purchaseFinished\0checkUnfinishedTransation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocTemplateDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   63,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    2,   70,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,
      16,    0,   78,    2, 0x08 /* Private */,
      17,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizDocTemplateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocTemplateDialog *_t = static_cast<WizDocTemplateDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentTemplateSelected((*reinterpret_cast< const TemplateData(*)>(_a[1]))); break;
        case 1: _t->upgradeVipRequest(); break;
        case 2: _t->itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_btn_ok_clicked(); break;
        case 4: _t->on_btn_cancel_clicked(); break;
        case 5: _t->download_templateFile_finished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->load_templateDemo_finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->purchaseFinished(); break;
        case 8: _t->checkUnfinishedTransation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDocTemplateDialog::*_t)(const TemplateData & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocTemplateDialog::documentTemplateSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizDocTemplateDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocTemplateDialog::upgradeVipRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizDocTemplateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WizDocTemplateDialog.data,
      qt_meta_data_WizDocTemplateDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocTemplateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocTemplateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocTemplateDialog.stringdata0))
        return static_cast<void*>(const_cast< WizDocTemplateDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WizDocTemplateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WizDocTemplateDialog::documentTemplateSelected(const TemplateData & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizDocTemplateDialog::upgradeVipRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
