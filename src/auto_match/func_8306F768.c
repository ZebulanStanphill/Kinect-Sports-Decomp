#include "xdk/vectorintrinsics.h"

extern float fn_83075D40(void *source, int index);
extern __vector4 *fn_83075D30(__vector4 *out, void *source, int index);
extern float fn_8306E7D8(float a, float b);
extern float fn_8306E7E8(float a, float b);
extern float lbl_8217EB78;

void fn_8306F768(void *source, int first, int second, __vector4 *out, float *timer, float *elapsed, float dt)
{
    float secondWeight = fn_83075D40(source, second);
    float weight = fn_8306E7D8(fn_83075D40(source, first), secondWeight);
    if (weight > 0.8f) {
        *timer = fn_8306E7D8(0.08f, *timer) - dt;
    } else {
        *timer = fn_8306E7E8(0.0f, *timer + dt);
    }
    if (*timer < lbl_8217EB78) {
        __vector4 value;
        *out = *fn_83075D30(&value, source, first);
        *elapsed = 0.0f;
    } else {
        *elapsed = *elapsed + dt;
    }
}
