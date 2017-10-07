/****************************************************************************
** Meta object code from reading C++ file 'WizTagBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizTagBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizTagBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizStringListCompleter_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizStringListCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizStringListCompleter_t qt_meta_stringdata_WizStringListCompleter = {
    {
QT_MOC_LITERAL(0, 0, 22) // "WizStringListCompleter"

    },
    "WizStringListCompleter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizStringListCompleter[] = {

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

void WizStringListCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WizStringListCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_WizStringListCompleter.data,
      qt_meta_data_WizStringListCompleter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizStringListCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizStringListCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizStringListCompleter.stringdata0))
        return static_cast<void*>(const_cast< WizStringListCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int WizStringListCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_WizTagLineEdit_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizTagLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizTagLineEdit_t qt_meta_stringdata_WizTagLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WizTagLineEdit"
QT_MOC_LITERAL(1, 15, 17), // "completerFinished"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "WizTagLineEdit\0completerFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizTagLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WizTagLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizTagLineEdit *_t = static_cast<WizTagLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completerFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizTagLineEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTagLineEdit::completerFinished)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizTagLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_WizTagLineEdit.data,
      qt_meta_data_WizTagLineEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizTagLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizTagLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizTagLineEdit.stringdata0))
        return static_cast<void*>(const_cast< WizTagLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int WizTagLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WizTagLineEdit::completerFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_WizTagItem_t {
    QByteArrayData data[13];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizTagItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizTagItem_t qt_meta_stringdata_WizTagItem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WizTagItem"
QT_MOC_LITERAL(1, 11, 16), // "deleteTagRequest"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "guid"
QT_MOC_LITERAL(4, 34, 16), // "removeTagRequest"
QT_MOC_LITERAL(5, 51, 19), // "selectedItemChanged"
QT_MOC_LITERAL(6, 71, 11), // "WizTagItem*"
QT_MOC_LITERAL(7, 83, 4), // "item"
QT_MOC_LITERAL(8, 88, 16), // "renameTagRequest"
QT_MOC_LITERAL(9, 105, 7), // "newName"
QT_MOC_LITERAL(10, 113, 19), // "on_menuActionRename"
QT_MOC_LITERAL(11, 133, 19), // "on_menuActionRemove"
QT_MOC_LITERAL(12, 153, 19) // "on_menuActionDelete"

    },
    "WizTagItem\0deleteTagRequest\0\0guid\0"
    "removeTagRequest\0selectedItemChanged\0"
    "WizTagItem*\0item\0renameTagRequest\0"
    "newName\0on_menuActionRename\0"
    "on_menuActionRemove\0on_menuActionDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizTagItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       8,    2,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizTagItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizTagItem *_t = static_cast<WizTagItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteTagRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->removeTagRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->selectedItemChanged((*reinterpret_cast< WizTagItem*(*)>(_a[1]))); break;
        case 3: _t->renameTagRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->on_menuActionRename(); break;
        case 5: _t->on_menuActionRemove(); break;
        case 6: _t->on_menuActionDelete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WizTagItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizTagItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTagItem::deleteTagRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizTagItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTagItem::removeTagRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizTagItem::*_t)(WizTagItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTagItem::selectedItemChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizTagItem::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTagItem::renameTagRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject WizTagItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WizTagItem.data,
      qt_meta_data_WizTagItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizTagItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizTagItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizTagItem.stringdata0))
        return static_cast<void*>(const_cast< WizTagItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int WizTagItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WizTagItem::deleteTagRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizTagItem::removeTagRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizTagItem::selectedItemChanged(WizTagItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizTagItem::renameTagRequest(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_WizTagBar_t {
    QByteArrayData data[26];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizTagBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizTagBar_t qt_meta_stringdata_WizTagBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WizTagBar"
QT_MOC_LITERAL(1, 10, 19), // "widgetStatusChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "on_removeTagRequest"
QT_MOC_LITERAL(4, 51, 4), // "guid"
QT_MOC_LITERAL(5, 56, 19), // "on_deleteTagRequest"
QT_MOC_LITERAL(6, 76, 19), // "on_renameTagRequest"
QT_MOC_LITERAL(7, 96, 7), // "newName"
QT_MOC_LITERAL(8, 104, 24), // "on_lineEditReturnPressed"
QT_MOC_LITERAL(9, 129, 22), // "on_selectedItemChanged"
QT_MOC_LITERAL(10, 152, 11), // "WizTagItem*"
QT_MOC_LITERAL(11, 164, 4), // "item"
QT_MOC_LITERAL(12, 169, 20), // "on_buttonMoreClicked"
QT_MOC_LITERAL(13, 190, 19), // "on_buttonAddClicked"
QT_MOC_LITERAL(14, 210, 13), // "on_tagCreated"
QT_MOC_LITERAL(15, 224, 10), // "WIZTAGDATA"
QT_MOC_LITERAL(16, 235, 3), // "tag"
QT_MOC_LITERAL(17, 239, 14), // "on_tagModified"
QT_MOC_LITERAL(18, 254, 6), // "tagOld"
QT_MOC_LITERAL(19, 261, 6), // "tagNew"
QT_MOC_LITERAL(20, 268, 13), // "on_tagDeleted"
QT_MOC_LITERAL(21, 282, 22), // "on_documentTagModified"
QT_MOC_LITERAL(22, 305, 15), // "WIZDOCUMENTDATA"
QT_MOC_LITERAL(23, 321, 8), // "document"
QT_MOC_LITERAL(24, 330, 22), // "on_lineEditTextChanged"
QT_MOC_LITERAL(25, 353, 4) // "text"

    },
    "WizTagBar\0widgetStatusChanged\0\0"
    "on_removeTagRequest\0guid\0on_deleteTagRequest\0"
    "on_renameTagRequest\0newName\0"
    "on_lineEditReturnPressed\0"
    "on_selectedItemChanged\0WizTagItem*\0"
    "item\0on_buttonMoreClicked\0on_buttonAddClicked\0"
    "on_tagCreated\0WIZTAGDATA\0tag\0"
    "on_tagModified\0tagOld\0tagNew\0on_tagDeleted\0"
    "on_documentTagModified\0WIZDOCUMENTDATA\0"
    "document\0on_lineEditTextChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizTagBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   80,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       6,    2,   86,    2, 0x0a /* Public */,
       8,    0,   91,    2, 0x0a /* Public */,
       9,    1,   92,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x0a /* Public */,
      14,    1,   97,    2, 0x0a /* Public */,
      17,    2,  100,    2, 0x0a /* Public */,
      20,    1,  105,    2, 0x0a /* Public */,
      21,    1,  108,    2, 0x0a /* Public */,
      24,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   18,   19,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void WizTagBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizTagBar *_t = static_cast<WizTagBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetStatusChanged(); break;
        case 1: _t->on_removeTagRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_deleteTagRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_renameTagRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->on_lineEditReturnPressed(); break;
        case 5: _t->on_selectedItemChanged((*reinterpret_cast< WizTagItem*(*)>(_a[1]))); break;
        case 6: _t->on_buttonMoreClicked(); break;
        case 7: _t->on_buttonAddClicked(); break;
        case 8: _t->on_tagCreated((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 9: _t->on_tagModified((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1])),(*reinterpret_cast< const WIZTAGDATA(*)>(_a[2]))); break;
        case 10: _t->on_tagDeleted((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 11: _t->on_documentTagModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 12: _t->on_lineEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WizTagItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizTagBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTagBar::widgetStatusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizTagBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WizTagBar.data,
      qt_meta_data_WizTagBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizTagBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizTagBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizTagBar.stringdata0))
        return static_cast<void*>(const_cast< WizTagBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int WizTagBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void WizTagBar::widgetStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
