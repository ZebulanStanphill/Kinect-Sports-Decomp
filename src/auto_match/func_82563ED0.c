#include "xdk/vectorintrinsics.h"

typedef struct Box_82563ED0 {
    __vector4 center; /* 0x0 */
    float scale;      /* 0x10 */
    float limit;      /* 0x14 */
} Box_82563ED0;

static __forceinline __vector4 Replicate(const float *s)
{
    return __vspltw(__lvlx(s, 0), 0);
}

static __forceinline float Clamp(float value, float limit)
{
    value = value - -limit >= 0.0f ? value : -limit;
    return value - limit >= 0.0f ? limit : value;
}

/* Writes the scaled offset of point from the box centre, each axis clamped to the box's limit. */
void fn_82563ED0(Box_82563ED0 *self, __vector4 point, float *out)
{
    __vector4 offset = __vmulfp(__vsubfp(self->center, point), Replicate(&self->scale));

    out[0] = Clamp(offset.vector4_f32[0], self->limit);
    out[1] = Clamp(offset.vector4_f32[1], self->limit);
    out[2] = Clamp(offset.vector4_f32[2], self->limit);
}
