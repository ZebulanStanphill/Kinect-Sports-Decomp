#include <math.h>
#include "xdk/vectorintrinsics.h"

void fn_824B5090(__vector4 *out, __vector4 a, __vector4 b)
{
    const __vector4 *p = &a;
    if (fabsf(a.vector4_f32[0]) <= fabsf(b.vector4_f32[0]))
        p = &b;
    *out = *p;
}
