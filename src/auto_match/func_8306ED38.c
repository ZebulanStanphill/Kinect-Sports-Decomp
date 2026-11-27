#include "xdk/vectorintrinsics.h"

__vector4 fn_8306ED38(__vector4 v, float s)
{
    __vector4 t;
    t.vector4_f32[3] = s;
    t.vector4_f32[2] = s;
    t.vector4_f32[1] = s;
    t.vector4_f32[0] = s;
    return __vmulfp(v, t);
}
