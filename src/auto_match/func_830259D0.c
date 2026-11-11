#include <math.h>
extern float lbl_82015BE0; /* 1/3 */

void fn_830259D0(float a, float b, float *out)
{
    float third = lbl_82015BE0;
    float s = (2.0f - a * 2.0f) * third;
    float t = 1.0f - a;
    float r = 1.0f - (s + third);
    float w, k;
    if (b >= 0.5f)
        w = (4.0f - b * 4.0f) * 0.2f;
    else
        w = 1.0f - b * 1.2f;
    k = 1.0f - w;
    out[5] = 0.0f;
    out[3] = sqrtf(w * t);
    out[2] = sqrtf(k * third);
    out[0] = sqrtf(k * s);
    out[1] = sqrtf(k * r);
    out[4] = sqrtf(w * a);
}
