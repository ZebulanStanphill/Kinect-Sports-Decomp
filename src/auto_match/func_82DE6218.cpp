#include "havok/hkMatrix3.h"

typedef struct Obj_82DE6218 {
    float base;
    float value;
    char pad8[0x18];
    hkMatrix3 target;
} Obj_82DE6218;

extern "C" void fn_82DE6218(Obj_82DE6218 *self, float value)
{
    hkSimdReal v;
    float ratio = value / self->value;
    self->value = value;
    v.m_real = __vspltw(__lvlx(&ratio, 0), 0);
    self->target.mul(v);
}
