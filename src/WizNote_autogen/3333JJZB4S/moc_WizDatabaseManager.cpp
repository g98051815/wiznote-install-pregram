/****************************************************************************
** Meta object code from reading C++ file 'WizDatabaseManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizDatabaseManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizDatabaseManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizDatabaseManager_t {
    QByteArrayData data[67];
    char stringdata0[962];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDatabaseManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDatabaseManager_t qt_meta_stringdata_WizDatabaseManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WizDatabaseManager"
QT_MOC_LITERAL(1, 19, 14), // "databaseOpened"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "strKbGUID"
QT_MOC_LITERAL(4, 45, 14), // "databaseClosed"
QT_MOC_LITERAL(5, 60, 14), // "databaseRename"
QT_MOC_LITERAL(6, 75, 25), // "databasePermissionChanged"
QT_MOC_LITERAL(7, 101, 18), // "databaseBizchanged"
QT_MOC_LITERAL(8, 120, 13), // "userIdChanged"
QT_MOC_LITERAL(9, 134, 5), // "oldId"
QT_MOC_LITERAL(10, 140, 5), // "newId"
QT_MOC_LITERAL(11, 146, 10), // "tagCreated"
QT_MOC_LITERAL(12, 157, 10), // "WIZTAGDATA"
QT_MOC_LITERAL(13, 168, 3), // "tag"
QT_MOC_LITERAL(14, 172, 11), // "tagModified"
QT_MOC_LITERAL(15, 184, 6), // "tagOld"
QT_MOC_LITERAL(16, 191, 6), // "tagNew"
QT_MOC_LITERAL(17, 198, 10), // "tagDeleted"
QT_MOC_LITERAL(18, 209, 12), // "styleCreated"
QT_MOC_LITERAL(19, 222, 12), // "WIZSTYLEDATA"
QT_MOC_LITERAL(20, 235, 5), // "style"
QT_MOC_LITERAL(21, 241, 13), // "styleModified"
QT_MOC_LITERAL(22, 255, 8), // "styleOld"
QT_MOC_LITERAL(23, 264, 8), // "styleNew"
QT_MOC_LITERAL(24, 273, 12), // "styleDeleted"
QT_MOC_LITERAL(25, 286, 15), // "documentCreated"
QT_MOC_LITERAL(26, 302, 15), // "WIZDOCUMENTDATA"
QT_MOC_LITERAL(27, 318, 8), // "document"
QT_MOC_LITERAL(28, 327, 16), // "documentModified"
QT_MOC_LITERAL(29, 344, 11), // "documentOld"
QT_MOC_LITERAL(30, 356, 11), // "documentNew"
QT_MOC_LITERAL(31, 368, 15), // "documentDeleted"
QT_MOC_LITERAL(32, 384, 20), // "documentDataModified"
QT_MOC_LITERAL(33, 405, 24), // "documentAbstractModified"
QT_MOC_LITERAL(34, 430, 19), // "documentTagModified"
QT_MOC_LITERAL(35, 450, 26), // "documentAccessDateModified"
QT_MOC_LITERAL(36, 477, 24), // "documentReadCountChanged"
QT_MOC_LITERAL(37, 502, 16), // "documentUploaded"
QT_MOC_LITERAL(38, 519, 7), // "strGUID"
QT_MOC_LITERAL(39, 527, 32), // "groupDocumentUnreadCountModified"
QT_MOC_LITERAL(40, 560, 17), // "attachmentCreated"
QT_MOC_LITERAL(41, 578, 25), // "WIZDOCUMENTATTACHMENTDATA"
QT_MOC_LITERAL(42, 604, 10), // "attachment"
QT_MOC_LITERAL(43, 615, 18), // "attachmentModified"
QT_MOC_LITERAL(44, 634, 13), // "attachmentOld"
QT_MOC_LITERAL(45, 648, 13), // "attachmentNew"
QT_MOC_LITERAL(46, 662, 17), // "attachmentDeleted"
QT_MOC_LITERAL(47, 680, 13), // "folderCreated"
QT_MOC_LITERAL(48, 694, 11), // "strLocation"
QT_MOC_LITERAL(49, 706, 13), // "folderDeleted"
QT_MOC_LITERAL(50, 720, 21), // "folderPositionChanged"
QT_MOC_LITERAL(51, 742, 19), // "tagsPositionChanged"
QT_MOC_LITERAL(52, 762, 14), // "messageCreated"
QT_MOC_LITERAL(53, 777, 14), // "WIZMESSAGEDATA"
QT_MOC_LITERAL(54, 792, 3), // "msg"
QT_MOC_LITERAL(55, 796, 15), // "messageModified"
QT_MOC_LITERAL(56, 812, 6), // "msgOld"
QT_MOC_LITERAL(57, 819, 6), // "msgNew"
QT_MOC_LITERAL(58, 826, 14), // "messageDeleted"
QT_MOC_LITERAL(59, 841, 16), // "favoritesChanged"
QT_MOC_LITERAL(60, 858, 9), // "favorites"
QT_MOC_LITERAL(61, 868, 22), // "on_groupDatabaseOpened"
QT_MOC_LITERAL(62, 891, 12), // "WizDatabase*"
QT_MOC_LITERAL(63, 904, 2), // "db"
QT_MOC_LITERAL(64, 907, 23), // "on_groupsInfoDownloaded"
QT_MOC_LITERAL(65, 931, 18), // "CWizGroupDataArray"
QT_MOC_LITERAL(66, 950, 11) // "arrayGroups"

    },
    "WizDatabaseManager\0databaseOpened\0\0"
    "strKbGUID\0databaseClosed\0databaseRename\0"
    "databasePermissionChanged\0databaseBizchanged\0"
    "userIdChanged\0oldId\0newId\0tagCreated\0"
    "WIZTAGDATA\0tag\0tagModified\0tagOld\0"
    "tagNew\0tagDeleted\0styleCreated\0"
    "WIZSTYLEDATA\0style\0styleModified\0"
    "styleOld\0styleNew\0styleDeleted\0"
    "documentCreated\0WIZDOCUMENTDATA\0"
    "document\0documentModified\0documentOld\0"
    "documentNew\0documentDeleted\0"
    "documentDataModified\0documentAbstractModified\0"
    "documentTagModified\0documentAccessDateModified\0"
    "documentReadCountChanged\0documentUploaded\0"
    "strGUID\0groupDocumentUnreadCountModified\0"
    "attachmentCreated\0WIZDOCUMENTATTACHMENTDATA\0"
    "attachment\0attachmentModified\0"
    "attachmentOld\0attachmentNew\0"
    "attachmentDeleted\0folderCreated\0"
    "strLocation\0folderDeleted\0"
    "folderPositionChanged\0tagsPositionChanged\0"
    "messageCreated\0WIZMESSAGEDATA\0msg\0"
    "messageModified\0msgOld\0msgNew\0"
    "messageDeleted\0favoritesChanged\0"
    "favorites\0on_groupDatabaseOpened\0"
    "WizDatabase*\0db\0on_groupsInfoDownloaded\0"
    "CWizGroupDataArray\0arrayGroups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDatabaseManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      33,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x06 /* Public */,
       4,    1,  192,    2, 0x06 /* Public */,
       5,    1,  195,    2, 0x06 /* Public */,
       6,    1,  198,    2, 0x06 /* Public */,
       7,    1,  201,    2, 0x06 /* Public */,
       8,    2,  204,    2, 0x06 /* Public */,
      11,    1,  209,    2, 0x06 /* Public */,
      14,    2,  212,    2, 0x06 /* Public */,
      17,    1,  217,    2, 0x06 /* Public */,
      18,    1,  220,    2, 0x06 /* Public */,
      21,    2,  223,    2, 0x06 /* Public */,
      24,    1,  228,    2, 0x06 /* Public */,
      25,    1,  231,    2, 0x06 /* Public */,
      28,    2,  234,    2, 0x06 /* Public */,
      31,    1,  239,    2, 0x06 /* Public */,
      32,    1,  242,    2, 0x06 /* Public */,
      33,    1,  245,    2, 0x06 /* Public */,
      34,    1,  248,    2, 0x06 /* Public */,
      35,    1,  251,    2, 0x06 /* Public */,
      36,    1,  254,    2, 0x06 /* Public */,
      37,    2,  257,    2, 0x06 /* Public */,
      39,    1,  262,    2, 0x06 /* Public */,
      40,    1,  265,    2, 0x06 /* Public */,
      43,    2,  268,    2, 0x06 /* Public */,
      46,    1,  273,    2, 0x06 /* Public */,
      47,    1,  276,    2, 0x06 /* Public */,
      49,    1,  279,    2, 0x06 /* Public */,
      50,    0,  282,    2, 0x06 /* Public */,
      51,    1,  283,    2, 0x06 /* Public */,
      52,    1,  286,    2, 0x06 /* Public */,
      55,    2,  289,    2, 0x06 /* Public */,
      58,    1,  294,    2, 0x06 /* Public */,
      59,    1,  297,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      61,    2,  300,    2, 0x08 /* Private */,
      64,    1,  305,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   15,   16,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   22,   23,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 26,   29,   30,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   38,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 41, 0x80000000 | 41,   44,   45,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 53, 0x80000000 | 53,   56,   57,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, QMetaType::QString,   60,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 62, QMetaType::QString,   63,    3,
    QMetaType::Void, 0x80000000 | 65,   66,

       0        // eod
};

void WizDatabaseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDatabaseManager *_t = static_cast<WizDatabaseManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->databaseOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->databaseClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->databaseRename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->databasePermissionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->databaseBizchanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->userIdChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->tagCreated((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 7: _t->tagModified((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1])),(*reinterpret_cast< const WIZTAGDATA(*)>(_a[2]))); break;
        case 8: _t->tagDeleted((*reinterpret_cast< const WIZTAGDATA(*)>(_a[1]))); break;
        case 9: _t->styleCreated((*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[1]))); break;
        case 10: _t->styleModified((*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[1])),(*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[2]))); break;
        case 11: _t->styleDeleted((*reinterpret_cast< const WIZSTYLEDATA(*)>(_a[1]))); break;
        case 12: _t->documentCreated((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 13: _t->documentModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[2]))); break;
        case 14: _t->documentDeleted((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 15: _t->documentDataModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 16: _t->documentAbstractModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 17: _t->documentTagModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 18: _t->documentAccessDateModified((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 19: _t->documentReadCountChanged((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 20: _t->documentUploaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->groupDocumentUnreadCountModified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->attachmentCreated((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1]))); break;
        case 23: _t->attachmentModified((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1])),(*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[2]))); break;
        case 24: _t->attachmentDeleted((*reinterpret_cast< const WIZDOCUMENTATTACHMENTDATA(*)>(_a[1]))); break;
        case 25: _t->folderCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->folderDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->folderPositionChanged(); break;
        case 28: _t->tagsPositionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->messageCreated((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        case 30: _t->messageModified((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1])),(*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[2]))); break;
        case 31: _t->messageDeleted((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        case 32: _t->favoritesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->on_groupDatabaseOpened((*reinterpret_cast< WizDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: _t->on_groupsInfoDownloaded((*reinterpret_cast< const CWizGroupDataArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::databaseOpened)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::databaseClosed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::databaseRename)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::databasePermissionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::databaseBizchanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::userIdChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZTAGDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::tagCreated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZTAGDATA & , const WIZTAGDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::tagModified)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZTAGDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::tagDeleted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZSTYLEDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::styleCreated)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZSTYLEDATA & , const WIZSTYLEDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::styleModified)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZSTYLEDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::styleDeleted)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentCreated)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & , const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentModified)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentDeleted)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentDataModified)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentAbstractModified)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentTagModified)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentAccessDateModified)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentReadCountChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::documentUploaded)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::groupDocumentUnreadCountModified)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTATTACHMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::attachmentCreated)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTATTACHMENTDATA & , const WIZDOCUMENTATTACHMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::attachmentModified)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZDOCUMENTATTACHMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::attachmentDeleted)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::folderCreated)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::folderDeleted)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::folderPositionChanged)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::tagsPositionChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZMESSAGEDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::messageCreated)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZMESSAGEDATA & , const WIZMESSAGEDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::messageModified)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const WIZMESSAGEDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::messageDeleted)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (WizDatabaseManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDatabaseManager::favoritesChanged)) {
                *result = 32;
                return;
            }
        }
    }
}

const QMetaObject WizDatabaseManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizDatabaseManager.data,
      qt_meta_data_WizDatabaseManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDatabaseManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDatabaseManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDatabaseManager.stringdata0))
        return static_cast<void*>(const_cast< WizDatabaseManager*>(this));
    return QObject::qt_metacast(_clname);
}

int WizDatabaseManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void WizDatabaseManager::databaseOpened(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizDatabaseManager::databaseClosed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizDatabaseManager::databaseRename(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizDatabaseManager::databasePermissionChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WizDatabaseManager::databaseBizchanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WizDatabaseManager::userIdChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WizDatabaseManager::tagCreated(const WIZTAGDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WizDatabaseManager::tagModified(const WIZTAGDATA & _t1, const WIZTAGDATA & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WizDatabaseManager::tagDeleted(const WIZTAGDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WizDatabaseManager::styleCreated(const WIZSTYLEDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WizDatabaseManager::styleModified(const WIZSTYLEDATA & _t1, const WIZSTYLEDATA & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WizDatabaseManager::styleDeleted(const WIZSTYLEDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WizDatabaseManager::documentCreated(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WizDatabaseManager::documentModified(const WIZDOCUMENTDATA & _t1, const WIZDOCUMENTDATA & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WizDatabaseManager::documentDeleted(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void WizDatabaseManager::documentDataModified(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WizDatabaseManager::documentAbstractModified(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void WizDatabaseManager::documentTagModified(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void WizDatabaseManager::documentAccessDateModified(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void WizDatabaseManager::documentReadCountChanged(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void WizDatabaseManager::documentUploaded(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void WizDatabaseManager::groupDocumentUnreadCountModified(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void WizDatabaseManager::attachmentCreated(const WIZDOCUMENTATTACHMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void WizDatabaseManager::attachmentModified(const WIZDOCUMENTATTACHMENTDATA & _t1, const WIZDOCUMENTATTACHMENTDATA & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void WizDatabaseManager::attachmentDeleted(const WIZDOCUMENTATTACHMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void WizDatabaseManager::folderCreated(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void WizDatabaseManager::folderDeleted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void WizDatabaseManager::folderPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, Q_NULLPTR);
}

// SIGNAL 28
void WizDatabaseManager::tagsPositionChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void WizDatabaseManager::messageCreated(const WIZMESSAGEDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void WizDatabaseManager::messageModified(const WIZMESSAGEDATA & _t1, const WIZMESSAGEDATA & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void WizDatabaseManager::messageDeleted(const WIZMESSAGEDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void WizDatabaseManager::favoritesChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}
QT_END_MOC_NAMESPACE
