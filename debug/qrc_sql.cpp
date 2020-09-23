/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // E:/QT 5.8/AircraftBattle-master/sql/game.db
  
  
  
static const unsigned char qt_resource_data[434] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // sql
  0x0,0x3,
  0x0,0x0,0x7a,0x7c,
  0x0,0x73,
  0x0,0x71,0x0,0x6c,
    // game.db
  0x0,0x7,
  0xd,0x83,0x84,0x62,
  0x0,0x67,
  0x0,0x61,0x0,0x6d,0x0,0x65,0x0,0x2e,0x0,0x64,0x0,0x62,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/sql
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/sql/game.db
  0x0,0x0,0x0,0xc,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x6f,0xa,0x9,0xad,0x60,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_sql)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_sql)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x02, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_sql)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_sql)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x02, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_sql)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_sql)(); }
   } dummy;
}
