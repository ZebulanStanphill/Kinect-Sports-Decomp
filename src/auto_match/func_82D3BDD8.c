// Havok: closest point to p on the segment [a, b], written to out.

#include "xdk/vectorintrinsics.h"

static __forceinline __vector4 SimdReal(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

void fn_82D3BDD8(const __vector4 *p, const __vector4 *a, const __vector4 *b, __vector4 *out)
{
    __vector4 dir = __vsubfp(*b, *a);
    __vector4 ap = __vsubfp(*a, *p);
    float proj;
    float len2;

    __stvewx(__vmsum3fp(dir, ap), &proj, 0);
    __stvewx(__vmsum3fp(dir, dir), &len2, 0);
    proj = -proj;
    if (proj <= 0.0f) {
        *out = *a;
    } else if (proj >= len2) {
        *out = *b;
    } else {
        *out = __vmaddfp(dir, SimdReal(proj / len2), *a);
    }
}
