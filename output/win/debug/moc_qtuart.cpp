/****************************************************************************
** Meta object code from reading C++ file 'qtuart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Drivers/qtuart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtuart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommPort_t {
    QByteArrayData data[5];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommPort_t qt_meta_stringdata_CommPort = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CommPort"
QT_MOC_LITERAL(1, 9, 10), // "sReadyRead"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "pData"
QT_MOC_LITERAL(4, 27, 4) // "pLen"

    },
    "CommPort\0sReadyRead\0\0pData\0pLen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommPort[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar, QMetaType::Int,    3,    4,

       0        // eod
};

void CommPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommPort *_t = static_cast<CommPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sReadyRead((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CommPort::*_t)(void * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommPort::sReadyRead)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CommPort::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_CommPort.data,
      qt_meta_data_CommPort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CommPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommPort.stringdata0))
        return static_cast<void*>(const_cast< CommPort*>(this));
    return QIODevice::qt_metacast(_clname);
}

int CommPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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
void CommPort::sReadyRead(void * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_BaseSerialport_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseSerialport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseSerialport_t qt_meta_stringdata_BaseSerialport = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BaseSerialport"
QT_MOC_LITERAL(1, 15, 10), // "dsrChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6) // "status"

    },
    "BaseSerialport\0dsrChanged\0\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseSerialport[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void BaseSerialport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseSerialport *_t = static_cast<BaseSerialport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dsrChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BaseSerialport::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseSerialport::dsrChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BaseSerialport::staticMetaObject = {
    { &CommPort::staticMetaObject, qt_meta_stringdata_BaseSerialport.data,
      qt_meta_data_BaseSerialport,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseSerialport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseSerialport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseSerialport.stringdata0))
        return static_cast<void*>(const_cast< BaseSerialport*>(this));
    return CommPort::qt_metacast(_clname);
}

int BaseSerialport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommPort::qt_metacall(_c, _id, _a);
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
void BaseSerialport::dsrChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SerialMonitorThread_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialMonitorThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialMonitorThread_t qt_meta_stringdata_SerialMonitorThread = {
    {
QT_MOC_LITERAL(0, 0, 19) // "SerialMonitorThread"

    },
    "SerialMonitorThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialMonitorThread[] = {

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

void SerialMonitorThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SerialMonitorThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SerialMonitorThread.data,
      qt_meta_data_SerialMonitorThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialMonitorThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialMonitorThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialMonitorThread.stringdata0))
        return static_cast<void*>(const_cast< SerialMonitorThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SerialMonitorThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SerialPort_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialPort_t qt_meta_stringdata_SerialPort = {
    {
QT_MOC_LITERAL(0, 0, 10) // "SerialPort"

    },
    "SerialPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPort[] = {

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

void SerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SerialPort::staticMetaObject = {
    { &BaseSerialport::staticMetaObject, qt_meta_stringdata_SerialPort.data,
      qt_meta_data_SerialPort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPort.stringdata0))
        return static_cast<void*>(const_cast< SerialPort*>(this));
    return BaseSerialport::qt_metacast(_clname);
}

int SerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseSerialport::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
