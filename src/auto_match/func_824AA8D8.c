#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 fn_824AA980(__vector4 a, __vector4 b);
extern __vector4 *fn_824AA3D8(__vector4 *out, void *meter, void *source, int kind,
                              __vector4 (*pick)(__vector4, __vector4));
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

float fn_824AA8D8(void *meter, void *source)
{
    __vector4 result;
    __vector4 sample;
    float x;
    float r;

    sample = *fn_824AA3D8(&result, meter, source, 6, fn_824AA980);
    x = sample.vector4_f32[0];
    r = fn_82539560((float)fabs(x), 3.0f, 7.0f, 0.0f, 0.5f);
    return 0.5f - r * (x >= 0.0f ? 1.0f : -1.0f);
}
