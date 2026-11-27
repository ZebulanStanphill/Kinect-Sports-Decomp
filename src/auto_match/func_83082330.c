// Initialises a swept state from a position and an orientation: both position slots get the
// position with w cleared, both orientation slots get the orientation, and the delta is zeroed.

#include "xdk/vectorintrinsics.h"

typedef struct Sweep_83082330 {
    __vector4 position0;     // 0x00
    __vector4 position1;     // 0x10
    __vector4 rotation0;     // 0x20
    __vector4 rotation1;     // 0x30
    __vector4 delta;         // 0x40
} Sweep_83082330;

static __forceinline void SetXyz0(__vector4 *out, const __vector4 *v)
{
    __vector4 zero = __vspltisw(0);
    *out = __vrlimi(*v, zero, 1, 0);
}

static __forceinline void SetZero4(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

void fn_83082330(Sweep_83082330 *self, const __vector4 *position, const __vector4 *rotation)
{
    SetXyz0(&self->position0, position);
    SetXyz0(&self->position1, position);
    self->rotation0 = *rotation;
    self->rotation1 = *rotation;
    SetZero4(&self->delta);
}
