/****************************************************************************
** Meta object code from reading C++ file 'WizDatabase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizDatabase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizDatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizDocument_t {
    QByteArrayData data[12];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocument_t qt_meta_stringdata_WizDocument = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WizDocument"
QT_MOC_LITERAL(1, 12, 6), // "Delete"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 17), // "PermanentlyDelete"
QT_MOC_LITERAL(4, 38, 6), // "moveTo"
QT_MOC_LITERAL(5, 45, 7), // "pFolder"
QT_MOC_LITERAL(6, 53, 15), // "UpdateDocument4"
QT_MOC_LITERAL(7, 69, 7), // "strHtml"
QT_MOC_LITERAL(8, 77, 6), // "strURL"
QT_MOC_LITERAL(9, 84, 6), // "nFlags"
QT_MOC_LITERAL(10, 91, 13), // "deleteToTrash"
QT_MOC_LITERAL(11, 105, 15) // "deleteFromTrash"

    },
    "WizDocument\0Delete\0\0PermanentlyDelete\0"
    "moveTo\0pFolder\0UpdateDocument4\0strHtml\0"
    "strURL\0nFlags\0deleteToTrash\0deleteFromTrash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocument[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x02 /* Public */,
       3,    0,   45,    2, 0x02 /* Public */,
       4,    1,   46,    2, 0x02 /* Public */,
       6,    3,   49,    2, 0x02 /* Public */,
      10,    0,   56,    2, 0x02 /* Public */,
      11,    0,   57,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocument *_t = static_cast<WizDocument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Delete(); break;
        case 1: _t->PermanentlyDelete(); break;
        case 2: _t->moveTo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->UpdateDocument4((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->deleteToTrash(); break;
        case 5: _t->deleteFromTrash(); break;
        default: ;
        }
    }
}

const QMetaObject WizDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizDocument.data,
      qt_meta_data_WizDocument,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocument.stringdata0))
        return static_cast<void*>(const_cast< WizDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int WizDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WizFolder_t {
    QByteArrayData data[13];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizFolder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizFolder_t qt_meta_stringdata_WizFolder = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WizFolder"
QT_MOC_LITERAL(1, 10, 12), // "moveDocument"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "nTotal"
QT_MOC_LITERAL(4, 31, 10), // "nProcessed"
QT_MOC_LITERAL(5, 42, 14), // "strOldLocation"
QT_MOC_LITERAL(6, 57, 14), // "strNewLocation"
QT_MOC_LITERAL(7, 72, 15), // "WIZDOCUMENTDATA"
QT_MOC_LITERAL(8, 88, 4), // "data"
QT_MOC_LITERAL(9, 93, 6), // "Delete"
QT_MOC_LITERAL(10, 100, 6), // "moveTo"
QT_MOC_LITERAL(11, 107, 4), // "dest"
QT_MOC_LITERAL(12, 112, 8) // "location"

    },
    "WizFolder\0moveDocument\0\0nTotal\0"
    "nProcessed\0strOldLocation\0strNewLocation\0"
    "WIZDOCUMENTDATA\0data\0Delete\0moveTo\0"
    "dest\0location"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizFolder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   45,    2, 0x02 /* Public */,
      10,    1,   46,    2, 0x02 /* Public */,
      12,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    3,    4,    5,    6,    8,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   11,
    QMetaType::QString,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095001,

       0        // eod
};

void WizFolder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizFolder *_t = static_cast<WizFolder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveDocument((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[5]))); break;
        case 1: _t->Delete(); break;
        case 2: _t->moveTo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->location();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizFolder::*_t)(int , int , const QString & , const QString & , const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizFolder::moveDocument)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        WizFolder *_t = static_cast<WizFolder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->location(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject WizFolder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizFolder.data,
      qt_meta_data_WizFolder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizFolder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizFolder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizFolder.stringdata0))
        return static_cast<void*>(const_cast< WizFolder*>(this));
    return QObject::qt_metacast(_clname);
}

int WizFolder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WizFolder::moveDocument(int _t1, int _t2, const QString & _t3, const QString & _t4, const WIZDOCUMENTDATA & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizDatabase_t {
    QByteArrayData data[37];
    char stringdata0[507];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDatabase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDatabase_t qt_meta_stringdata_WizDatabase = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WizDatabase"
QT_MOC_LITERAL(1, 12, 15), // "userInfoChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "groupsInfoDownloaded"
QT_MOC_LITERAL(4, 50, 18), // "CWizGroupDataArray"
QT_MOC_LITERAL(5, 69, 10), // "arrayGroup"
QT_MOC_LITERAL(6, 80, 17), // "bizInfoDownloaded"
QT_MOC_LITERAL(7, 98, 16), // "CWizBizDataArray"
QT_MOC_LITERAL(8, 115, 8), // "arrayBiz"
QT_MOC_LITERAL(9, 124, 14), // "databaseOpened"
QT_MOC_LITERAL(10, 139, 12), // "WizDatabase*"
QT_MOC_LITERAL(11, 152, 2), // "db"
QT_MOC_LITERAL(12, 155, 9), // "strKbGUID"
QT_MOC_LITERAL(13, 165, 14), // "databaseRename"
QT_MOC_LITERAL(14, 180, 25), // "databasePermissionChanged"
QT_MOC_LITERAL(15, 206, 18), // "databaseBizChanged"
QT_MOC_LITERAL(16, 225, 11), // "updateError"
QT_MOC_LITERAL(17, 237, 3), // "msg"
QT_MOC_LITERAL(18, 241, 10), // "processLog"
QT_MOC_LITERAL(19, 252, 18), // "attachmentsUpdated"
QT_MOC_LITERAL(20, 271, 21), // "folderPositionChanged"
QT_MOC_LITERAL(21, 293, 19), // "tagsPositionChanged"
QT_MOC_LITERAL(22, 313, 16), // "documentUploaded"
QT_MOC_LITERAL(23, 330, 7), // "strGUID"
QT_MOC_LITERAL(24, 338, 13), // "userIdChanged"
QT_MOC_LITERAL(25, 352, 5), // "oldId"
QT_MOC_LITERAL(26, 358, 5), // "newId"
QT_MOC_LITERAL(27, 364, 16), // "favoritesChanged"
QT_MOC_LITERAL(28, 381, 9), // "favorites"
QT_MOC_LITERAL(29, 391, 20), // "onAttachmentModified"
QT_MOC_LITERAL(30, 412, 11), // "strFileName"
QT_MOC_LITERAL(31, 424, 6), // "strMD5"
QT_MOC_LITERAL(32, 431, 14), // "dtLastModified"
QT_MOC_LITERAL(33, 446, 21), // "GetDeletedItemsFolder"
QT_MOC_LITERAL(34, 468, 19), // "GetFolderByLocation"
QT_MOC_LITERAL(35, 488, 11), // "strLocation"
QT_MOC_LITERAL(36, 500, 6) // "create"

    },
    "WizDatabase\0userInfoChanged\0\0"
    "groupsInfoDownloaded\0CWizGroupDataArray\0"
    "arrayGroup\0bizInfoDownloaded\0"
    "CWizBizDataArray\0arrayBiz\0databaseOpened\0"
    "WizDatabase*\0db\0strKbGUID\0databaseRename\0"
    "databasePermissionChanged\0databaseBizChanged\0"
    "updateError\0msg\0processLog\0"
    "attachmentsUpdated\0folderPositionChanged\0"
    "tagsPositionChanged\0documentUploaded\0"
    "strGUID\0userIdChanged\0oldId\0newId\0"
    "favoritesChanged\0favorites\0"
    "onAttachmentModified\0strFileName\0"
    "strMD5\0dtLastModified\0GetDeletedItemsFolder\0"
    "GetFolderByLocation\0strLocation\0create"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDatabase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       6,    1,  108,    2, 0x06 /* Public */,
       9,    2,  111,    2, 0x06 /* Public */,
      13,    1,  116,    2, 0x06 /* Public */,
      14,    1,  119,    2, 0x06 /* Public */,
      15,    1,  122,    2, 0x06 /* Public */,
      16,    1,  125,    2, 0x06 /* Public */,
      18,    1,  128,    2, 0x06 /* Public */,
      19,    0,  131,    2, 0x06 /* Public */,
      20,    0,  132,    2, 0x06 /* Public */,
      21,    1,  133,    2, 0x06 /* Public */,
      22,    2,  136,    2, 0x06 /* Public */,
      24,    2,  141,    2, 0x06 /* Public */,
      27,    1,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    5,  149,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      33,    0,  160,    2, 0x02 /* Public */,
      34,    2,  161,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   25,   26,
    QMetaType::Void, QMetaType::QString,   28,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime,   12,   23,   30,   31,   32,

 // methods: parameters
    QMetaType::QObjectStar,
    QMetaType::QObjectStar, QMetaType::QString, QMetaType::Bool,   35,   36,

       0        // eod
};

void WizDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDatabase *_t = static_cast<WizDatabase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userInfoChanged(); break;
        case 1: _t->groupsInfoDownloaded((*reinterpret_cast< const CWizGroupDataArray(*)>(_a[1]))); break;
        case 2: _t->bizInfoDownloaded((*reinterpret_cast< const CWizBizDataArray(*)>(_a[1]))); break;
        case 3: _t->databaseOpened((*reinterpret_cast< WizDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->databaseRename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->databasePermissionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->databaseBizChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->processLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->attachmentsUpdated(); break;
        case 10: _t->folderPositionChanged(); break;
        case 11: _t->tagsPositionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->documentUploaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->userIdChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->favoritesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->onAttachmentModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QDateTime(*)>(_a[5]))); break;
        case 16: { QObject* _r = _t->GetDeletedItemsFolder();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 17: { QObject* _r = _t->GetFolderByLocation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WizDatabase* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDatabase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::userInfoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const CWizGroupDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::groupsInfoDownloaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const CWizBizDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::bizInfoDownloaded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(WizDatabase * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::databaseOpened)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::databaseRename)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::databasePermissionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::databaseBizChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::updateError)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::processLog)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::attachmentsUpdated)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::folderPositionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::tagsPositionChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::documentUploaded)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::userIdChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (WizDatabase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabase::favoritesChanged)) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject WizDatabase::staticMetaObject = {
    { &WizIndex::staticMetaObject, qt_meta_stringdata_WizDatabase.data,
      qt_meta_data_WizDatabase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDatabase.stringdata0))
        return static_cast<void*>(const_cast< WizDatabase*>(this));
    if (!strcmp(_clname, "WizThumbIndex"))
        return static_cast< WizThumbIndex*>(const_cast< WizDatabase*>(this));
    if (!strcmp(_clname, "IWizSyncableDatabase"))
        return static_cast< IWizSyncableDatabase*>(const_cast< WizDatabase*>(this));
    return WizIndex::qt_metacast(_clname);
}

int WizDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizIndex::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void WizDatabase::userInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WizDatabase::groupsInfoDownloaded(const CWizGroupDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizDatabase::bizInfoDownloaded(const CWizBizDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizDatabase::databaseOpened(WizDatabase * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WizDatabase::databaseRename(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WizDatabase::databasePermissionChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WizDatabase::databaseBizChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WizDatabase::updateError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WizDatabase::processLog(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WizDatabase::attachmentsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void WizDatabase::folderPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void WizDatabase::tagsPositionChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WizDatabase::documentUploaded(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WizDatabase::userIdChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WizDatabase::favoritesChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
