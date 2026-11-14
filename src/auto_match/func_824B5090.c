#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void fn_824B5090(__vector4 *out, __vector4 a, __vector4 b)
{
    const __vector4 *p = &a;
    if (fabsf(a.vector4_f32[0]) <= fabsf(b.vector4_f32[0]))
        p = &b;
    *out = *p;
}
