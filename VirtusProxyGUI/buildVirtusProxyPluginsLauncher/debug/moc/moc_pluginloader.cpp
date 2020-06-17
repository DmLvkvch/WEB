/****************************************************************************
** Meta object code from reading C++ file 'pluginloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../VirtusProxyPluginsLauncher/pluginloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginLoader_t {
    QByteArrayData data[17];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginLoader_t qt_meta_stringdata_PluginLoader = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PluginLoader"
QT_MOC_LITERAL(1, 13, 13), // "pluginCreated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "PluginIFace*"
QT_MOC_LITERAL(4, 41, 11), // "loadFromDir"
QT_MOC_LITERAL(5, 53, 19), // "QList<PluginIFace*>"
QT_MOC_LITERAL(6, 73, 7), // "dirPath"
QT_MOC_LITERAL(7, 81, 4), // "QDir"
QT_MOC_LITERAL(8, 86, 3), // "dir"
QT_MOC_LITERAL(9, 90, 7), // "loadLib"
QT_MOC_LITERAL(10, 98, 7), // "libPath"
QT_MOC_LITERAL(11, 106, 19), // "handleLoadNewPlugin"
QT_MOC_LITERAL(12, 126, 11), // "libraryPath"
QT_MOC_LITERAL(13, 138, 12), // "deletePlugin"
QT_MOC_LITERAL(14, 151, 6), // "plugin"
QT_MOC_LITERAL(15, 158, 7), // "plugins"
QT_MOC_LITERAL(16, 166, 19) // "handlePluginStopped"

    },
    "PluginLoader\0pluginCreated\0\0PluginIFace*\0"
    "loadFromDir\0QList<PluginIFace*>\0dirPath\0"
    "QDir\0dir\0loadLib\0libPath\0handleLoadNewPlugin\0"
    "libraryPath\0deletePlugin\0plugin\0plugins\0"
    "handlePluginStopped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       4,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      13,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      16,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    0x80000000 | 5, QMetaType::QString,    6,
    0x80000000 | 5, 0x80000000 | 7,    8,
    0x80000000 | 3, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 3,   14,
    QMetaType::Void, 0x80000000 | 5,   15,
    QMetaType::Void, 0x80000000 | 3,   14,

       0        // eod
};

void PluginLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginCreated((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 1: { QList<PluginIFace*> _r = _t->loadFromDir((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<PluginIFace*>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QList<PluginIFace*> _r = _t->loadFromDir((*reinterpret_cast< QDir(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<PluginIFace*>*>(_a[0]) = std::move(_r); }  break;
        case 3: { PluginIFace* _r = _t->loadLib((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PluginIFace**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->handleLoadNewPlugin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->deletePlugin((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        case 6: _t->deletePlugin((*reinterpret_cast< QList<PluginIFace*>(*)>(_a[1]))); break;
        case 7: _t->handlePluginStopped((*reinterpret_cast< PluginIFace*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PluginLoader::*)(PluginIFace * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginLoader::pluginCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PluginLoader.data,
    qt_meta_data_PluginLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PluginLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PluginLoader::pluginCreated(PluginIFace * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
