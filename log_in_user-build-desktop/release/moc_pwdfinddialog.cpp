/****************************************************************************
** Meta object code from reading C++ file 'pwdfinddialog.h'
**
** Created: Sat Jan 20 20:23:10 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../log_in_user/pwdfinddialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pwdfinddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PwdFindDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      45,   14,   14,   14, 0x08,
      73,   14,   14,   14, 0x08,
      86,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PwdFindDialog[] = {
    "PwdFindDialog\0\0on_pushButtonCancel_clicked()\0"
    "on_pushButtonSave_clicked()\0onRecvChat()\0"
    "onClientConneeced()\0"
};

const QMetaObject PwdFindDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PwdFindDialog,
      qt_meta_data_PwdFindDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PwdFindDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PwdFindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PwdFindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PwdFindDialog))
        return static_cast<void*>(const_cast< PwdFindDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PwdFindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonCancel_clicked(); break;
        case 1: on_pushButtonSave_clicked(); break;
        case 2: onRecvChat(); break;
        case 3: onClientConneeced(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
