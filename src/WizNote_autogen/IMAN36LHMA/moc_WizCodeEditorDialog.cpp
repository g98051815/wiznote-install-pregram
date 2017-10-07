/****************************************************************************
** Meta object code from reading C++ file 'WizCodeEditorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizCodeEditorDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizCodeEditorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizCodeEditorDialog_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizCodeEditorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizCodeEditorDialog_t qt_meta_stringdata_WizCodeEditorDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizCodeEditorDialog"
QT_MOC_LITERAL(1, 20, 17), // "insertHtmlRequest"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "strHtml"
QT_MOC_LITERAL(4, 47, 10), // "insertHtml"
QT_MOC_LITERAL(5, 58, 12), // "strResultDiv"
QT_MOC_LITERAL(6, 71, 15), // "getLastCodeType"
QT_MOC_LITERAL(7, 87, 16), // "saveLastCodeType"
QT_MOC_LITERAL(8, 104, 8) // "codeType"

    },
    "WizCodeEditorDialog\0insertHtmlRequest\0"
    "\0strHtml\0insertHtml\0strResultDiv\0"
    "getLastCodeType\0saveLastCodeType\0"
    "codeType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizCodeEditorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void WizCodeEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizCodeEditorDialog *_t = static_cast<WizCodeEditorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertHtmlRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->insertHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->getLastCodeType();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->saveLastCodeType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizCodeEditorDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizCodeEditorDialog::insertHtmlRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizCodeEditorDialog::staticMetaObject = {
    { &WizWebEngineViewContainerDialog::staticMetaObject, qt_meta_stringdata_WizCodeEditorDialog.data,
      qt_meta_data_WizCodeEditorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizCodeEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizCodeEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizCodeEditorDialog.stringdata0))
        return static_cast<void*>(const_cast< WizCodeEditorDialog*>(this));
    return WizWebEngineViewContainerDialog::qt_metacast(_clname);
}

int WizCodeEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizWebEngineViewContainerDialog::qt_metacall(_c, _id, _a);
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
void WizCodeEditorDialog::insertHtmlRequest(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
