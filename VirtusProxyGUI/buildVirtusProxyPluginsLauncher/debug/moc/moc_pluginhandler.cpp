/****************************************************************************
** Meta object code from reading C++ file 'pluginhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../VirtusProxyPluginsLauncher/pluginhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginHandler_t {
    QByteArrayData data[16];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginHandler_t qt_meta_stringdata_PluginHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PluginHandler"
QT_MOC_LITERAL(1, 14, 13), // "pluginStopped"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "PluginIFace*"
QT_MOC_LITERAL(4, 42, 19), // "handlePluginCreated"
QT_MOC_LITERAL(5, 62, 23), // "handlePluginViewRemoved"
QT_MOC_LITERAL(6, 86, 9), // "addPlugin"
QT_MOC_LITERAL(7, 96, 10), // "addPlugins"
QT_MOC_LITERAL(8, 107, 19), // "QList<PluginIFace*>"
QT_MOC_LITERAL(9, 127, 5), // "start"
QT_MOC_LITERAL(10, 133, 6), // "plugin"
QT_MOC_LITERAL(11, 140, 4), // "stop"
QT_MOC_LITERAL(12, 145, 5), // "reset"
QT_MOC_LITERAL(13, 151, 11), // "setSettings"
QT_MOC_LITERAL(14, 163, 19), // "QList<SettingsItem>"
QT_MOC_LITERAL(15, 183, 20) // "handleSettingChanged"

    },
    "PluginHandler\0pluginStopped\0\0PluginIFace*\0"
    "handlePluginCreated\0handlePluginViewRemoved\0"
    "addPlugin\0addPlugins\0QList<PluginIFace*>\0"
    "start\0plugin\0stop\0reset\0setSettings\0"
    "QList<SettingsItem>\0handleSettingChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   82,    2, 0x0a /* Public */,
       5,    1,   85,    2, 0x0a /* Public */,
       6,    1,   88,    2, 0x0a /* Public */,
       7,    1,   91,    2, 0x0a /* Public */,
       9,    1,   94,    2, 0x0a /* Public */,
       9,    0,   97,    2, 0x2a /* Public | MethodCloned */,
      11,    1,   98,    2, 0x0a /* Public */,
      11,    0,  101,    2, 0x2a /* Public | MethodCloned */,
      12,    1,  102,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  106,    2, 0x0a /* Public */,
      15,    2,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 14,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 14,    2,    2,

       0        // eod
};

void PluginHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginStopped((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 1: _t->handlePluginCreated((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 2: _t->handlePluginViewRemoved((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 3: _t->addPlugin((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 4: _t->addPlugins((*reinterpret_cast< QList<PluginIFace*>(*)>(_a[1]))); break;
        case 5: _t->start((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 6: _t->start(); break;
        case 7: _t->stop((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 8: _t->stop(); break;
        case 9: _t->reset((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 10: _t->reset(); break;
        case 11: _t->setSettings((*reinterpret_cast< PluginIFace*(*)>(_a[1])),(*reinterpret_cast< QList<SettingsItem>(*)>(_a[2]))); break;
        case 12: _t->handleSettingChanged((*reinterpret_cast< PluginIFace*(*)>(_a[1])),(*reinterpret_cast< QList<SettingsItem>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PluginHandler::*)(PluginIFace * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginHandler::pluginStopped)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PluginHandler.data,
    qt_meta_data_PluginHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PluginHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PluginHandler::pluginStopped(PluginIFace * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
