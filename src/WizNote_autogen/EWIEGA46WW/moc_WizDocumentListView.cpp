/****************************************************************************
** Meta object code from reading C++ file 'WizDocumentListView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizDocumentListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizDocumentListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizDocumentListView_t {
    QByteArrayData data[62];
    char stringdata0[1192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocumentListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocumentListView_t qt_meta_stringdata_WizDocumentListView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizDocumentListView"
QT_MOC_LITERAL(1, 20, 20), // "documentCountChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "lastDocumentDeleted"
QT_MOC_LITERAL(4, 62, 25), // "documentsSelectionChanged"
QT_MOC_LITERAL(5, 88, 29), // "groupDocumentReadCountChanged"
QT_MOC_LITERAL(6, 118, 9), // "strKbGUID"
QT_MOC_LITERAL(7, 128, 26), // "shareDocumentByLinkRequest"
QT_MOC_LITERAL(8, 155, 7), // "strGUID"
QT_MOC_LITERAL(9, 163, 19), // "changeUploadRequest"
QT_MOC_LITERAL(10, 183, 29), // "addDocumentToShortcutsRequest"
QT_MOC_LITERAL(11, 213, 15), // "WIZDOCUMENTDATA"
QT_MOC_LITERAL(12, 229, 3), // "doc"
QT_MOC_LITERAL(13, 233, 20), // "loacteDocumetRequest"
QT_MOC_LITERAL(14, 254, 23), // "on_itemSelectionChanged"
QT_MOC_LITERAL(15, 278, 14), // "on_tag_created"
QT_MOC_LITERAL(16, 293, 10), // "WIZTAGDATA"
QT_MOC_LITERAL(17, 304, 3), // "tag"
QT_MOC_LITERAL(18, 308, 15), // "on_tag_modified"
QT_MOC_LITERAL(19, 324, 6), // "tagOld"
QT_MOC_LITERAL(20, 331, 6), // "tagNew"
QT_MOC_LITERAL(21, 338, 19), // "on_document_created"
QT_MOC_LITERAL(22, 358, 8), // "document"
QT_MOC_LITERAL(23, 367, 20), // "on_document_modified"
QT_MOC_LITERAL(24, 388, 11), // "documentOld"
QT_MOC_LITERAL(25, 400, 11), // "documentNew"
QT_MOC_LITERAL(26, 412, 19), // "on_documentUploaded"
QT_MOC_LITERAL(27, 432, 6), // "kbGuid"
QT_MOC_LITERAL(28, 439, 7), // "docGuid"
QT_MOC_LITERAL(29, 447, 19), // "on_document_deleted"
QT_MOC_LITERAL(30, 467, 29), // "on_documentAccessDate_changed"
QT_MOC_LITERAL(31, 497, 28), // "on_documentReadCount_changed"
QT_MOC_LITERAL(32, 526, 16), // "on_action_locate"
QT_MOC_LITERAL(33, 543, 20), // "on_action_selectTags"
QT_MOC_LITERAL(34, 564, 24), // "on_action_deleteDocument"
QT_MOC_LITERAL(35, 589, 25), // "on_action_encryptDocument"
QT_MOC_LITERAL(36, 615, 26), // "on_action_cancelEncryption"
QT_MOC_LITERAL(37, 642, 24), // "on_action_addToShortcuts"
QT_MOC_LITERAL(38, 667, 22), // "on_action_moveDocument"
QT_MOC_LITERAL(39, 690, 32), // "on_action_moveDocument_confirmed"
QT_MOC_LITERAL(40, 723, 6), // "result"
QT_MOC_LITERAL(41, 730, 22), // "on_action_copyDocument"
QT_MOC_LITERAL(42, 753, 32), // "on_action_copyDocument_confirmed"
QT_MOC_LITERAL(43, 786, 35), // "on_action_showDocumentInFloat..."
QT_MOC_LITERAL(44, 822, 26), // "on_action_copyDocumentLink"
QT_MOC_LITERAL(45, 849, 27), // "on_action_copyWebClientLink"
QT_MOC_LITERAL(46, 877, 25), // "on_action_documentHistory"
QT_MOC_LITERAL(47, 903, 29), // "on_action_shareDocumentByLink"
QT_MOC_LITERAL(48, 933, 19), // "on_menu_aboutToHide"
QT_MOC_LITERAL(49, 953, 26), // "on_document_abstractLoaded"
QT_MOC_LITERAL(50, 980, 11), // "WIZABSTRACT"
QT_MOC_LITERAL(51, 992, 3), // "abs"
QT_MOC_LITERAL(52, 996, 20), // "on_userAvatar_loaded"
QT_MOC_LITERAL(53, 1017, 11), // "strUserGUID"
QT_MOC_LITERAL(54, 1029, 18), // "onThumbCacheLoaded"
QT_MOC_LITERAL(55, 1048, 23), // "on_vscroll_valueChanged"
QT_MOC_LITERAL(56, 1072, 5), // "value"
QT_MOC_LITERAL(57, 1078, 26), // "on_vscroll_actionTriggered"
QT_MOC_LITERAL(58, 1105, 6), // "action"
QT_MOC_LITERAL(59, 1112, 17), // "on_vscroll_update"
QT_MOC_LITERAL(60, 1130, 32), // "on_vscrollAnimation_valueChanged"
QT_MOC_LITERAL(61, 1163, 28) // "on_vscrollAnimation_finished"

    },
    "WizDocumentListView\0documentCountChanged\0"
    "\0lastDocumentDeleted\0documentsSelectionChanged\0"
    "groupDocumentReadCountChanged\0strKbGUID\0"
    "shareDocumentByLinkRequest\0strGUID\0"
    "changeUploadRequest\0addDocumentToShortcutsRequest\0"
    "WIZDOCUMENTDATA\0doc\0loacteDocumetRequest\0"
    "on_itemSelectionChanged\0on_tag_created\0"
    "WIZTAGDATA\0tag\0on_tag_modified\0tagOld\0"
    "tagNew\0on_document_created\0document\0"
    "on_document_modified\0documentOld\0"
    "documentNew\0on_documentUploaded\0kbGuid\0"
    "docGuid\0on_document_deleted\0"
    "on_documentAccessDate_changed\0"
    "on_documentReadCount_changed\0"
    "on_action_locate\0on_action_selectTags\0"
    "on_action_deleteDocument\0"
    "on_action_encryptDocument\0"
    "on_action_cancelEncryption\0"
    "on_action_addToShortcuts\0"
    "on_action_moveDocument\0"
    "on_action_moveDocument_confirmed\0"
    "result\0on_action_copyDocument\0"
    "on_action_copyDocument_confirmed\0"
    "on_action_showDocumentInFloatWindow\0"
    "on_action_copyDocumentLink\0"
    "on_action_copyWebClientLink\0"
    "on_action_documentHistory\0"
    "on_action_shareDocumentByLink\0"
    "on_menu_aboutToHide\0on_document_abstractLoaded\0"
    "WIZABSTRACT\0abs\0on_userAvatar_loaded\0"
    "strUserGUID\0onThumbCacheLoaded\0"
    "on_vscroll_valueChanged\0value\0"
    "on_vscroll_actionTriggered\0action\0"
    "on_vscroll_update\0on_vscrollAnimation_valueChanged\0"
    "on_vscrollAnimation_finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocumentListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    0,  220,    2, 0x06 /* Public */,
       4,    0,  221,    2, 0x06 /* Public */,
       5,    1,  222,    2, 0x06 /* Public */,
       7,    2,  225,    2, 0x06 /* Public */,
       9,    1,  230,    2, 0x06 /* Public */,
      10,    1,  233,    2, 0x06 /* Public */,
      13,    1,  236,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  239,    2, 0x0a /* Public */,
      15,    1,  240,    2, 0x0a /* Public */,
      18,    2,  243,    2, 0x0a /* Public */,
      21,    1,  248,    2, 0x0a /* Public */,
      23,    2,  251,    2, 0x0a /* Public */,
      26,    2,  256,    2, 0x0a /* Public */,
      29,    1,  261,    2, 0x0a /* Public */,
      30,    1,  264,    2, 0x0a /* Public */,
      31,    1,  267,    2, 0x0a /* Public */,
      32,    0,  270,    2, 0x0a /* Public */,
      33,    0,  271,    2, 0x0a /* Public */,
      34,    0,  272,    2, 0x0a /* Public */,
      35,    0,  273,    2, 0x0a /* Public */,
      36,    0,  274,    2, 0x0a /* Public */,
      37,    0,  275,    2, 0x0a /* Public */,
      38,    0,  276,    2, 0x0a /* Public */,
      39,    1,  277,    2, 0x0a /* Public */,
      41,    0,  280,    2, 0x0a /* Public */,
      42,    1,  281,    2, 0x0a /* Public */,
      43,    0,  284,    2, 0x0a /* Public */,
      44,    0,  285,    2, 0x0a /* Public */,
      45,    0,  286,    2, 0x0a /* Public */,
      46,    0,  287,    2, 0x0a /* Public */,
      47,    0,  288,    2, 0x0a /* Public */,
      48,    0,  289,    2, 0x0a /* Public */,
      49,    1,  290,    2, 0x0a /* Public */,
      52,    1,  293,    2, 0x0a /* Public */,
      54,    2,  296,    2, 0x0a /* Public */,
      55,    1,  301,    2, 0x0a /* Public */,
      57,    1,  304,    2, 0x0a /* Public */,
      59,    0,  307,    2, 0x0a /* Public */,
      60,    1,  308,    2, 0x0a /* Public */,
      61,    0,  311,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   19,   20,
    QMetaType::Void, 0x80000000 | 11,   22,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::Void, 0x80000000 | 11,   22,
    QMetaType::Void, 0x80000000 | 11,   22,
    QMetaType::Void, 0x80000000 | 11,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    8,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   56,
    QMetaType::Void,

       0        // eod
};

void WizDocumentListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocumentListView *_t = static_cast<WizDocumentListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentCountChanged(); break;
        case 1: _t->lastDocumentDeleted(); break;
        case 2: _t->documentsSelectionChanged(); break;
        case 3: _t->groupDocumentReadCountChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->shareDocumentByLinkRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->changeUploadRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->addDocumentToShortcutsRequest((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 7: _t->loacteDocumetRequest((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 8: _t->on_itemSelectionChanged(); break;
        case 9: _t->on_tag_created((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 10: _t->on_tag_modified((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1])),(*reinterpret_cast< const WIZTAGDATA(*)>(_a[2]))); break;
        case 11: _t->on_document_created((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 12: _t->on_document_modified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 13: _t->on_documentUploaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->on_document_deleted((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 15: _t->on_documentAccessDate_changed((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 16: _t->on_documentReadCount_changed((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 17: _t->on_action_locate(); break;
        case 18: _t->on_action_selectTags(); break;
        case 19: _t->on_action_deleteDocument(); break;
        case 20: _t->on_action_encryptDocument(); break;
        case 21: _t->on_action_cancelEncryption(); break;
        case 22: _t->on_action_addToShortcuts(); break;
        case 23: _t->on_action_moveDocument(); break;
        case 24: _t->on_action_moveDocument_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_action_copyDocument(); break;
        case 26: _t->on_action_copyDocument_confirmed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_action_showDocumentInFloatWindow(); break;
        case 28: _t->on_action_copyDocumentLink(); break;
        case 29: _t->on_action_copyWebClientLink(); break;
        case 30: _t->on_action_documentHistory(); break;
        case 31: _t->on_action_shareDocumentByLink(); break;
        case 32: _t->on_menu_aboutToHide(); break;
        case 33: _t->on_document_abstractLoaded((*reinterpret_cast< const WIZABSTRACT(*)>(_a[1]))); break;
        case 34: _t->on_userAvatar_loaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->onThumbCacheLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->on_vscroll_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_vscroll_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_vscroll_update(); break;
        case 39: _t->on_vscrollAnimation_valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 40: _t->on_vscrollAnimation_finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDocumentListView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::documentCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizDocumentListView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::lastDocumentDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizDocumentListView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::documentsSelectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizDocumentListView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::groupDocumentReadCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizDocumentListView::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::shareDocumentByLinkRequest)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WizDocumentListView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::changeUploadRequest)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WizDocumentListView::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::addDocumentToShortcutsRequest)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WizDocumentListView::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentListView::loacteDocumetRequest)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject WizDocumentListView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_WizDocumentListView.data,
      qt_meta_data_WizDocumentListView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocumentListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocumentListView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocumentListView.stringdata0))
        return static_cast<void*>(const_cast< WizDocumentListView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int WizDocumentListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void WizDocumentListView::documentCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WizDocumentListView::lastDocumentDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WizDocumentListView::documentsSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void WizDocumentListView::groupDocumentReadCountChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WizDocumentListView::shareDocumentByLinkRequest(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WizDocumentListView::changeUploadRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WizDocumentListView::addDocumentToShortcutsRequest(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WizDocumentListView::loacteDocumetRequest(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
