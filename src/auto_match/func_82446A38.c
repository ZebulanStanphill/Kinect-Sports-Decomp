// Interpolates a frame: the base part through fn_823BEB30, then the vector at +0x1a0 as
// self + (other - self) * t.

#include "xdk/vectorintrinsics.h"

typedef struct Frame_82446A38 {
    char pad000[0x1a0];
    __vector4 vector;   // 0x1a0
} Frame_82446A38;

extern void fn_823BEB30(const Frame_82446A38 *self, Frame_82446A38 *out,
                        const Frame_82446A38 *other, float t);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

void fn_82446A38(const Frame_82446A38 *self, Frame_82446A38 *out, const Frame_82446A38 *other,
                 float t)
{
    fn_823BEB30(self, out, other, t);
    out->vector = __vmaddfp(Replicate(t), __vsubfp(other->vector, self->vector), self->vector);
}
