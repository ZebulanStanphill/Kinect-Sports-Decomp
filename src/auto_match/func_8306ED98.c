#include "xdk/vectorintrinsics.h"

float fn_8306ED98(__vector4 a, __vector4 b)
{
    __vector4 dot;

    dot = __vmsum3fp(a, b);
    return dot.vector4_f32[0];
}
