/****************************************************************************
** Meta object code from reading C++ file 'mainmenu.h'
**
** Created: Sat May 24 20:26:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_View__MainMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      23,   15,   15,   15, 0x0a,
      41,   34,   15,   15, 0x0a,
      59,   15,   15,   15, 0x0a,
      74,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_View__MainMenu[] = {
    "View::MainMenu\0\0quit()\0settings()\0"
    "camNum\0getCameraNum(int)\0startProcess()\0"
    "showMenu()\0"
};

void View::MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainMenu *_t = static_cast<MainMenu *>(_o);
        switch (_id) {
        case 0: _t->quit(); break;
        case 1: _t->settings(); break;
        case 2: _t->getCameraNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->startProcess(); break;
        case 4: _t->showMenu(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData View::MainMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject View::MainMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_View__MainMenu,
      qt_meta_data_View__MainMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &View::MainMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *View::MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *View::MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_View__MainMenu))
        return static_cast<void*>(const_cast< MainMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int View::MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
