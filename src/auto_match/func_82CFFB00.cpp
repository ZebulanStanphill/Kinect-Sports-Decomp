#include "havok/hkClass.h"

typedef struct VT2c_82CFFB00 { int pad[11]; int (*f2c)(void *, int, int); } VT2c_82CFFB00;
typedef struct Svc_82CFFB00 { VT2c_82CFFB00 *vt; } Svc_82CFFB00;
typedef struct VT14_82CFFB00 { int pad[5]; void (*f14)(void *, int, int, int, int, int); } VT14_82CFFB00;
typedef struct Obj_82CFFB00 { VT14_82CFFB00 *vt; } Obj_82CFFB00;

extern "C" void fn_82CFFB00(Obj_82CFFB00 *param_1, const hkClass *klass, int param_3, int param_4)
{
  if ((param_4 & 1) == 0) {
    int a = klass->getObjectSize();
    Svc_82CFFB00 *svc = (Svc_82CFFB00 *)&hkMemoryRouter::getInstance().heap();
    int b = svc->vt->f2c(svc, param_3, a);
    param_1->vt->f14(param_1, 0, 0, param_3, a, b);
  }
}
