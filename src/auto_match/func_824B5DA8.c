#include "xdk/vectorintrinsics.h"

void fn_824B5DA8(__vector4 *out, __vector4 a, __vector4 b)
{
    const __vector4 *p = &a;
    if (a.vector4_f32[1] <= b.vector4_f32[1])
        p = &b;
    *out = *p;
}
