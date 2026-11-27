#include "xdk/vectorintrinsics.h"

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 Replicate(float f)
{
    __vector4 v = __lvlx(&f, 0);
    return __vspltw(v, 0);
}

int fn_8307FAB8(const __vector4 *point, const __vector4 *a, const __vector4 *b, __vector4 *out)
{
    __vector4 ab = __vsubfp(*b, *a);
    __vector4 ap = __vsubfp(*point, *a);
    float proj = GetReal(__vmsum3fp(ab, ap));
    float lenSq = GetReal(__vmsum3fp(ab, ab));

    if (proj <= 0.0f) {
        *out = *a;
        return 8;
    }
    if (proj >= lenSq) {
        *out = *b;
        return 4;
    }
    *out = __vmaddfp(ab, Replicate(proj / lenSq), *a);
    return 0;
}
