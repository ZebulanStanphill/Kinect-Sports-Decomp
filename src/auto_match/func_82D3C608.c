#include "xdk/vectorintrinsics.h"

typedef struct Obj_82D3C608 {
    char pad0[0x10];
    float value;
} Obj_82D3C608;

__vector4 *fn_82D3C608(const Obj_82D3C608 *self, __vector4 *out)
{
    *out = __vxor(*out, *out);
    out->vector4_f32[3] = self->value;
    return out;
}
