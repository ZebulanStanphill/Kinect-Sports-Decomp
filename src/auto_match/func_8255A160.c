#include "xdk/vectorintrinsics.h"

extern void fn_8253FDC8(float angle, float *s, float *c);

__vector4 fn_8255A160(__vector4 pos, float angle, float distance)
{
    float s;
    float c;

    fn_8253FDC8(angle, &s, &c);
    pos.vector4_f32[0] = s * distance + pos.vector4_f32[0];
    pos.vector4_f32[2] = c * distance + pos.vector4_f32[2];
    return pos;
}
