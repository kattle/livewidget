/****************************************************************************
** Meta object code from reading C++ file 'splashform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../splashform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splashform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SplashForm_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplashForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplashForm_t qt_meta_stringdata_SplashForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SplashForm"
QT_MOC_LITERAL(1, 11, 10), // "splashOver"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "slot_handle"
QT_MOC_LITERAL(4, 35, 3), // "val"
QT_MOC_LITERAL(5, 39, 15), // "slot_handleOver"
QT_MOC_LITERAL(6, 55, 10) // "slot_timer"

    },
    "SplashForm\0splashOver\0\0slot_handle\0"
    "val\0slot_handleOver\0slot_timer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplashForm[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SplashForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SplashForm *_t = static_cast<SplashForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->splashOver(); break;
        case 1: _t->slot_handle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_handleOver(); break;
        case 3: _t->slot_timer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SplashForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SplashForm::splashOver)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SplashForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SplashForm.data,
      qt_meta_data_SplashForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SplashForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplashForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplashForm.stringdata0))
        return static_cast<void*>(const_cast< SplashForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int SplashForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SplashForm::splashOver()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
