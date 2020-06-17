/****************************************************************************
** Meta object code from reading C++ file 'fortisconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Plugins/SkifDiagnosticPlugin/fortisconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fortisconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FortisConnection_t {
    QByteArrayData data[15];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FortisConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FortisConnection_t qt_meta_stringdata_FortisConnection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FortisConnection"
QT_MOC_LITERAL(1, 17, 14), // "statusReceived"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "QHash<int,bool>"
QT_MOC_LITERAL(4, 49, 6), // "drones"
QT_MOC_LITERAL(5, 56, 9), // "connected"
QT_MOC_LITERAL(6, 66, 12), // "disconnected"
QT_MOC_LITERAL(7, 79, 11), // "onConnected"
QT_MOC_LITERAL(8, 91, 14), // "onDisconnected"
QT_MOC_LITERAL(9, 106, 21), // "onTextMessageReceived"
QT_MOC_LITERAL(10, 128, 7), // "message"
QT_MOC_LITERAL(11, 136, 9), // "reconnect"
QT_MOC_LITERAL(12, 146, 9), // "getDrones"
QT_MOC_LITERAL(13, 156, 10), // "checkState"
QT_MOC_LITERAL(14, 167, 9) // "forcePing"

    },
    "FortisConnection\0statusReceived\0\0"
    "QHash<int,bool>\0drones\0connected\0"
    "disconnected\0onConnected\0onDisconnected\0"
    "onTextMessageReceived\0message\0reconnect\0"
    "getDrones\0checkState\0forcePing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FortisConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FortisConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FortisConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusReceived((*reinterpret_cast< QHash<int,bool>(*)>(_a[1]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->onConnected(); break;
        case 4: _t->onDisconnected(); break;
        case 5: _t->onTextMessageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->reconnect(); break;
        case 7: _t->getDrones(); break;
        case 8: _t->checkState(); break;
        case 9: _t->forcePing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FortisConnection::*)(QHash<int,bool> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FortisConnection::statusReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FortisConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FortisConnection::connected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FortisConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FortisConnection::disconnected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FortisConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectionIFace::staticMetaObject>(),
    qt_meta_stringdata_FortisConnection.data,
    qt_meta_data_FortisConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FortisConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FortisConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FortisConnection.stringdata0))
        return static_cast<void*>(this);
    return ConnectionIFace::qt_metacast(_clname);
}

int FortisConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectionIFace::qt_metacall(_c, _id, _a);
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
void FortisConnection::statusReceived(QHash<int,bool> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FortisConnection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FortisConnection::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
