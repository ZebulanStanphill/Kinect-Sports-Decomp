#include "havok/hkMatrix3.h"

typedef struct Obj_82DE5718 {
    float base;
    float value;
    char pad8[0x18];
    hkMatrix3 target;
} Obj_82DE5718;

extern "C" void fn_82DE5718(float scale, Obj_82DE5718 *self)
{
    hkSimdReal v;
    self->value *= scale;
    v.m_real = __vspltw(__lvlx(&scale, 0), 0);
    self->target.mul(v);
}
