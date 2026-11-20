#include "havok/hkMatrix3.h"
#include "havok/hkSimdReal.h"


typedef struct Obj_82DE6268 {
    float base;
    float value;
    char pad8[0x18];
    hkMatrix3 target;
} Obj_82DE6268;


extern "C" void fn_82DE6268(Obj_82DE6268 *self, float scale)
{
    hkSimdReal v;
    float old = self->value;
    float ratio;
    self->value = self->base * scale;
    ratio = self->value / old;
    v.m_real = __vspltw(__lvlx(&ratio, 0), 0);
    self->target.mul(v);
}
