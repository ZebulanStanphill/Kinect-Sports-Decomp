// Intersection of the segments a-b and c-d in the xz plane. Fails when they are parallel or when
// either parameter is outside [0, 1]; otherwise stores the parameter on a-b and the point.

#include "xdk/vectorintrinsics.h"

double fabs(double);
float __fres(float);

extern const float lbl_8218EC10;
extern const float lbl_821CA45C[2];

int fn_823DC6E8(const __vector4 *a, const __vector4 *b, const __vector4 *c, const __vector4 *d,
                __vector4 *out, float *tOut)
{
    __vector4 cd = __vsubfp(*d, *c);
    __vector4 start = *a;
    __vector4 ab = __vsubfp(*b, start);
    __vector4 ca;
    float denom, inv, t, u;

    denom = ab.vector4_f32[0] * cd.vector4_f32[2] - ab.vector4_f32[2] * cd.vector4_f32[0];
    if (fabs(denom) >= lbl_8218EC10) {
        ca = __vsubfp(start, *c);
        inv = __fres(denom);
        t = (ca.vector4_f32[2] * cd.vector4_f32[0] - ca.vector4_f32[0] * cd.vector4_f32[2]) * inv;
        if (t >= 0.0f && t <= lbl_821CA45C[1]) {
            u = (ca.vector4_f32[2] * ab.vector4_f32[0] - ca.vector4_f32[0] * ab.vector4_f32[2]) * inv;
            if (u >= 0.0f && u <= lbl_821CA45C[1]) {
                *tOut = t;
                *out = __vmaddfp(ab, __vspltw(__lvlx(&t, 0), 0), start);
                return 1;
            }
        }
    }
    return 0;
}
