#include "xdk/vectorintrinsics.h"

typedef struct Obj_82D74A58 {
    char pad0[0x18];
    float value;
    char pad1c[4];
    __vector4 vec;
} Obj_82D74A58;

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

void fn_82D74A58(Obj_82D74A58 *self, float from, float to)
{
    if (self->value == from) {
        self->value = to;
        return;
    }
    self->value = -1.0f;
    SetZero(&self->vec);
}
