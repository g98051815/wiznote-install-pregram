/****************************************************************************
** Meta object code from reading C++ file 'WizNoteInfoForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizNoteInfoForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizNoteInfoForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizNoteInfoForm_t {
    QByteArrayData data[11];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizNoteInfoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizNoteInfoForm_t qt_meta_stringdata_WizNoteInfoForm = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WizNoteInfoForm"
QT_MOC_LITERAL(1, 16, 19), // "widgetStatusChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 34), // "on_labelOpenDocument_linkActi..."
QT_MOC_LITERAL(4, 72, 4), // "link"
QT_MOC_LITERAL(5, 77, 26), // "on_editURL_editingFinished"
QT_MOC_LITERAL(6, 104, 29), // "on_editAuthor_editingFinished"
QT_MOC_LITERAL(7, 134, 25), // "on_checkEncrypted_clicked"
QT_MOC_LITERAL(8, 160, 7), // "checked"
QT_MOC_LITERAL(9, 168, 29), // "on_labelHistory_linkActivated"
QT_MOC_LITERAL(10, 198, 29) // "on_labelOpenURL_linkActivated"

    },
    "WizNoteInfoForm\0widgetStatusChanged\0"
    "\0on_labelOpenDocument_linkActivated\0"
    "link\0on_editURL_editingFinished\0"
    "on_editAuthor_editingFinished\0"
    "on_checkEncrypted_clicked\0checked\0"
    "on_labelHistory_linkActivated\0"
    "on_labelOpenURL_linkActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizNoteInfoForm[] = {

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
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void WizNoteInfoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizNoteInfoForm *_t = static_cast<WizNoteInfoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetStatusChanged(); break;
        case 1: _t->on_labelOpenDocument_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_editURL_editingFinished(); break;
        case 3: _t->on_editAuthor_editingFinished(); break;
        case 4: _t->on_checkEncrypted_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_labelHistory_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_labelOpenURL_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizNoteInfoForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizNoteInfoForm::widgetStatusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizNoteInfoForm::staticMetaObject = {
    { &WizPopupWidget::staticMetaObject, qt_meta_stringdata_WizNoteInfoForm.data,
      qt_meta_data_WizNoteInfoForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizNoteInfoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizNoteInfoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizNoteInfoForm.stringdata0))
        return static_cast<void*>(const_cast< WizNoteInfoForm*>(this));
    return WizPopupWidget::qt_metacast(_clname);
}

int WizNoteInfoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizPopupWidget::qt_metacall(_c, _id, _a);
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
void WizNoteInfoForm::widgetStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
