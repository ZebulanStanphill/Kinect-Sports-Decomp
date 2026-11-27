#include "xdk/vectorintrinsics.h"

extern double fn_82F65E18(double);

float fn_82F53608(__vector4 a, __vector4 b)
{
    __vector4 d = __vmsum3fp(a, b);
    float x = d.vector4_f32[0];

    if (x > 1.0f) {
        x = 1.0f;
    } else if (x < -1.0f) {
        x = -1.0f;
    }
    return (float)fn_82F65E18(x);
}
