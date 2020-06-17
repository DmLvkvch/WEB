/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../VirtusProxyPluginsLauncher/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "loadNewPlugin"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "libraryPath"
QT_MOC_LITERAL(4, 38, 18), // "deletePluginWidget"
QT_MOC_LITERAL(5, 57, 8), // "QWidget*"
QT_MOC_LITERAL(6, 66, 12), // "styleChanged"
QT_MOC_LITERAL(7, 79, 5), // "style"
QT_MOC_LITERAL(8, 85, 24), // "handleDeleteWidgetPlugin"
QT_MOC_LITERAL(9, 110, 17), // "PluginWidgetForm*"
QT_MOC_LITERAL(10, 128, 21), // "handleAddPluginWidget"
QT_MOC_LITERAL(11, 150, 17), // "handleShowMessage"
QT_MOC_LITERAL(12, 168, 5), // "title"
QT_MOC_LITERAL(13, 174, 7), // "message"
QT_MOC_LITERAL(14, 182, 18), // "handleStyleChanged"
QT_MOC_LITERAL(15, 201, 14), // "handleSettings"
QT_MOC_LITERAL(16, 216, 19), // "handleLoadNewPlugin"
QT_MOC_LITERAL(17, 236, 17), // "handleGridChanged"
QT_MOC_LITERAL(18, 254, 4), // "rows"
QT_MOC_LITERAL(19, 259, 7), // "columns"
QT_MOC_LITERAL(20, 267, 19), // "handleIconActivated"
QT_MOC_LITERAL(21, 287, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(22, 321, 6) // "reason"

    },
    "MainWindow\0loadNewPlugin\0\0libraryPath\0"
    "deletePluginWidget\0QWidget*\0styleChanged\0"
    "style\0handleDeleteWidgetPlugin\0"
    "PluginWidgetForm*\0handleAddPluginWidget\0"
    "handleShowMessage\0title\0message\0"
    "handleStyleChanged\0handleSettings\0"
    "handleLoadNewPlugin\0handleGridChanged\0"
    "rows\0columns\0handleIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   78,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x0a /* Public */,
      11,    2,   84,    2, 0x0a /* Public */,
      14,    1,   89,    2, 0x0a /* Public */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,
      17,    2,   94,    2, 0x08 /* Private */,
      20,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadNewPlugin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->deletePluginWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->styleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->handleDeleteWidgetPlugin((*reinterpret_cast< PluginWidgetForm*(*)>(_a[1]))); break;
        case 4: _t->handleAddPluginWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 5: _t->handleShowMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->handleStyleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->handleSettings(); break;
        case 8: _t->handleLoadNewPlugin(); break;
        case 9: _t->handleGridChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->handleIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::loadNewPlugin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::deletePluginWidget)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::styleChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::loadNewPlugin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::deletePluginWidget(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::styleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
