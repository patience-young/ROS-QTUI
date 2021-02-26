/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/robot_hmi/include/robot_hmi/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_robot_hmi__MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_robot_hmi__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_robot_hmi__MainWindow_t qt_meta_stringdata_robot_hmi__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 21), // "robot_hmi::MainWindow"
QT_MOC_LITERAL(1, 22, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 25), // "on_button_connect_clicked"
QT_MOC_LITERAL(4, 74, 5), // "check"
QT_MOC_LITERAL(5, 80, 40), // "on_checkbox_use_environment_s..."
QT_MOC_LITERAL(6, 121, 5), // "state"
QT_MOC_LITERAL(7, 127, 17), // "updateLoggingView"
QT_MOC_LITERAL(8, 145, 24), // "slot_linera_value_change"
QT_MOC_LITERAL(9, 170, 21), // "slot_raw_value_change"
QT_MOC_LITERAL(10, 192, 18), // "slot_pushbtn_click"
QT_MOC_LITERAL(11, 211, 21), // "slot_update_dashboard"
QT_MOC_LITERAL(12, 233, 17), // "slot_update_power"
QT_MOC_LITERAL(13, 251, 17), // "slot_update_image"
QT_MOC_LITERAL(14, 269, 14), // "slot_sub_image"
QT_MOC_LITERAL(15, 284, 22), // "slot_quick_cmd_clicked"
QT_MOC_LITERAL(16, 307, 17) // "slot_quick_output"

    },
    "robot_hmi::MainWindow\0on_actionAbout_triggered\0"
    "\0on_button_connect_clicked\0check\0"
    "on_checkbox_use_environment_stateChanged\0"
    "state\0updateLoggingView\0"
    "slot_linera_value_change\0slot_raw_value_change\0"
    "slot_pushbtn_click\0slot_update_dashboard\0"
    "slot_update_power\0slot_update_image\0"
    "slot_sub_image\0slot_quick_cmd_clicked\0"
    "slot_quick_output"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_robot_hmi__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    1,   80,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       7,    0,   86,    2, 0x0a /* Public */,
       8,    1,   87,    2, 0x0a /* Public */,
       9,    1,   90,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    2,   94,    2, 0x0a /* Public */,
      12,    1,   99,    2, 0x0a /* Public */,
      13,    1,  102,    2, 0x0a /* Public */,
      14,    0,  105,    2, 0x0a /* Public */,
      15,    0,  106,    2, 0x0a /* Public */,
      16,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void robot_hmi::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateLoggingView(); break;
        case 4: _t->slot_linera_value_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slot_raw_value_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_pushbtn_click(); break;
        case 7: _t->slot_update_dashboard((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->slot_update_power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->slot_update_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 10: _t->slot_sub_image(); break;
        case 11: _t->slot_quick_cmd_clicked(); break;
        case 12: _t->slot_quick_output(); break;
        default: ;
        }
    }
}

const QMetaObject robot_hmi::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_robot_hmi__MainWindow.data,
      qt_meta_data_robot_hmi__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *robot_hmi::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *robot_hmi::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_robot_hmi__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int robot_hmi::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
