/****************************************************************************
** Meta object code from reading C++ file 'WizSearchWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizSearchWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizSearchWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizSearchEdit_t {
    QByteArrayData data[6];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSearchEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSearchEdit_t qt_meta_stringdata_WizSearchEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WizSearchEdit"
QT_MOC_LITERAL(1, 14, 20), // "advanceSearchRequest"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "addCustomSearchRequest"
QT_MOC_LITERAL(4, 59, 23), // "on_actionAdvancedSearch"
QT_MOC_LITERAL(5, 83, 18) // "on_addCustomSearch"

    },
    "WizSearchEdit\0advanceSearchRequest\0\0"
    "addCustomSearchRequest\0on_actionAdvancedSearch\0"
    "on_addCustomSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSearchEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizSearchEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizSearchEdit *_t = static_cast<WizSearchEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->advanceSearchRequest(); break;
        case 1: _t->addCustomSearchRequest(); break;
        case 2: _t->on_actionAdvancedSearch(); break;
        case 3: _t->on_addCustomSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizSearchEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchEdit::advanceSearchRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizSearchEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchEdit::addCustomSearchRequest)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizSearchEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_WizSearchEdit.data,
      qt_meta_data_WizSearchEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSearchEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSearchEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSearchEdit.stringdata0))
        return static_cast<void*>(const_cast< WizSearchEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int WizSearchEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void WizSearchEdit::advanceSearchRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WizSearchEdit::addCustomSearchRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_WizSearchView_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSearchView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSearchView_t qt_meta_stringdata_WizSearchView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WizSearchView"
QT_MOC_LITERAL(1, 14, 22), // "addCustomSearchRequest"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "doSearch"
QT_MOC_LITERAL(4, 47, 8), // "keywords"
QT_MOC_LITERAL(5, 56, 23), // "on_search_returnPressed"
QT_MOC_LITERAL(6, 80, 20), // "on_searchTextChanged"
QT_MOC_LITERAL(7, 101, 3), // "str"
QT_MOC_LITERAL(8, 105, 12), // "setWidthHint"
QT_MOC_LITERAL(9, 118, 6) // "nWidth"

    },
    "WizSearchView\0addCustomSearchRequest\0"
    "\0doSearch\0keywords\0on_search_returnPressed\0"
    "on_searchTextChanged\0str\0setWidthHint\0"
    "nWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSearchView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void WizSearchView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizSearchView *_t = static_cast<WizSearchView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addCustomSearchRequest(); break;
        case 1: _t->doSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_search_returnPressed(); break;
        case 3: _t->on_searchTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setWidthHint((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizSearchView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchView::addCustomSearchRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizSearchView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearchView::doSearch)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizSearchView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WizSearchView.data,
      qt_meta_data_WizSearchView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSearchView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSearchView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSearchView.stringdata0))
        return static_cast<void*>(const_cast< WizSearchView*>(this));
    return QWidget::qt_metacast(_clname);
}

int WizSearchView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WizSearchView::addCustomSearchRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WizSearchView::doSearch(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
