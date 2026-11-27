#include "xdk/vectorintrinsics.h"

double sqrt(double);

double fn_822F7668(__vector4 a, __vector4 b)
{
    __vector4 d = __vsubfp(a, b);
    return (double)sqrt(d.vector4_f32[0] * d.vector4_f32[0] + d.vector4_f32[2] * d.vector4_f32[2]);
}
