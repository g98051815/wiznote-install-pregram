/****************************************************************************
** Meta object code from reading C++ file 'WizEmailShareDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizEmailShareDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizEmailShareDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizEmailShareDialog_t {
    QByteArrayData data[22];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizEmailShareDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizEmailShareDialog_t qt_meta_stringdata_WizEmailShareDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizEmailShareDialog"
QT_MOC_LITERAL(1, 20, 26), // "insertCommentToNoteRequest"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "docGUID"
QT_MOC_LITERAL(4, 56, 7), // "comment"
QT_MOC_LITERAL(5, 64, 26), // "on_toolButton_send_clicked"
QT_MOC_LITERAL(6, 91, 30), // "on_toolButton_contacts_clicked"
QT_MOC_LITERAL(7, 122, 26), // "on_contactsListItemClicked"
QT_MOC_LITERAL(8, 149, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 166, 4), // "item"
QT_MOC_LITERAL(10, 171, 18), // "on_networkFinished"
QT_MOC_LITERAL(11, 190, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 205, 5), // "reply"
QT_MOC_LITERAL(13, 211, 15), // "on_networkError"
QT_MOC_LITERAL(14, 227, 8), // "errorMsg"
QT_MOC_LITERAL(15, 236, 21), // "on_mailShare_finished"
QT_MOC_LITERAL(16, 258, 5), // "nCode"
QT_MOC_LITERAL(17, 264, 13), // "returnMessage"
QT_MOC_LITERAL(18, 278, 30), // "on_toolButton_settings_clicked"
QT_MOC_LITERAL(19, 309, 28), // "signature_text_edit_finished"
QT_MOC_LITERAL(20, 338, 24), // "autoInsert_state_changed"
QT_MOC_LITERAL(21, 363, 7) // "checked"

    },
    "WizEmailShareDialog\0insertCommentToNoteRequest\0"
    "\0docGUID\0comment\0on_toolButton_send_clicked\0"
    "on_toolButton_contacts_clicked\0"
    "on_contactsListItemClicked\0QListWidgetItem*\0"
    "item\0on_networkFinished\0QNetworkReply*\0"
    "reply\0on_networkError\0errorMsg\0"
    "on_mailShare_finished\0nCode\0returnMessage\0"
    "on_toolButton_settings_clicked\0"
    "signature_text_edit_finished\0"
    "autoInsert_state_changed\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizEmailShareDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   69,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,
      15,    2,   80,    2, 0x08 /* Private */,
      18,    0,   85,    2, 0x08 /* Private */,
      19,    0,   86,    2, 0x08 /* Private */,
      20,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void WizEmailShareDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizEmailShareDialog *_t = static_cast<WizEmailShareDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertCommentToNoteRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->on_toolButton_send_clicked(); break;
        case 2: _t->on_toolButton_contacts_clicked(); break;
        case 3: _t->on_contactsListItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_networkFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->on_networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_mailShare_finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->on_toolButton_settings_clicked(); break;
        case 8: _t->signature_text_edit_finished(); break;
        case 9: _t->autoInsert_state_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizEmailShareDialog::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizEmailShareDialog::insertCommentToNoteRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizEmailShareDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WizEmailShareDialog.data,
      qt_meta_data_WizEmailShareDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizEmailShareDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizEmailShareDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizEmailShareDialog.stringdata0))
        return static_cast<void*>(const_cast< WizEmailShareDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WizEmailShareDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizEmailShareDialog::insertCommentToNoteRequest(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
