/****************************************************************************
** Meta object code from reading C++ file 'widgetbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Components/widgetbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetBase_t {
    QByteArrayData data[7];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetBase_t qt_meta_stringdata_WidgetBase = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WidgetBase"
QT_MOC_LITERAL(1, 11, 6), // "sArrow"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "AREA_OPERATE"
QT_MOC_LITERAL(4, 32, 2), // "op"
QT_MOC_LITERAL(5, 35, 4), // "para"
QT_MOC_LITERAL(6, 40, 8) // "sOperate"

    },
    "WidgetBase\0sArrow\0\0AREA_OPERATE\0op\0"
    "para\0sOperate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,

       0        // eod
};

void WidgetBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetBase *_t = static_cast<WidgetBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sArrow((*reinterpret_cast< AREA_OPERATE(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->sOperate((*reinterpret_cast< AREA_OPERATE(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WidgetBase::*_t)(AREA_OPERATE , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WidgetBase::sArrow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WidgetBase::*_t)(AREA_OPERATE , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WidgetBase::sOperate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WidgetBase::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetBase.data,
      qt_meta_data_WidgetBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WidgetBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetBase.stringdata0))
        return static_cast<void*>(const_cast< WidgetBase*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void WidgetBase::sArrow(AREA_OPERATE _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetBase::sOperate(AREA_OPERATE _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
