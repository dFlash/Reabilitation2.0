/****************************************************************************
** Meta object code from reading C++ file 'process.h'
**
** Created: Wed May 28 18:43:28 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "process.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'process.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_View__Process[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   14,   14,   14, 0x0a,
      43,   14,   14,   14, 0x0a,
      52,   14,   14,   14, 0x0a,
      67,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_View__Process[] = {
    "View::Process\0\0singalToMenu()\0"
    "toMainMenu()\0toExit()\0startProcess()\0"
    "startForDecision()\0"
};

void View::Process::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Process *_t = static_cast<Process *>(_o);
        switch (_id) {
        case 0: _t->singalToMenu(); break;
        case 1: _t->toMainMenu(); break;
        case 2: _t->toExit(); break;
        case 3: _t->startProcess(); break;
        case 4: _t->startForDecision(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData View::Process::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject View::Process::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_View__Process,
      qt_meta_data_View__Process, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &View::Process::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *View::Process::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *View::Process::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_View__Process))
        return static_cast<void*>(const_cast< Process*>(this));
    return QWidget::qt_metacast(_clname);
}

int View::Process::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void View::Process::singalToMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
