#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 fn_824AA980(__vector4 a, __vector4 b)
{
    if (fabs(a.vector4_f32[0]) > fabs(b.vector4_f32[0]))
        return a;
    return b;
}
