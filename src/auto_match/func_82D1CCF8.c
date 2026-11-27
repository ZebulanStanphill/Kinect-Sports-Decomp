#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82132D10;    /* (1, 1, 1, 1) */
extern const __vector4 lbl_82132D00;    /* (0, 0, 0, 0) */

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 Reciprocal(__vector4 x)
{
    __vector4 r = __vrefp(x);
    __vector4 e = __vnmsubfp(r, x, lbl_82132D10);
    return __vmaddfp(e, r, r);
}

float fn_82D1CCF8(const __vector4 *point, const __vector4 *start, const __vector4 *end, float *t)
{
    __vector4 dir = __vsubfp(*end, *start);
    __vector4 diff = __vsubfp(*start, *point);
    __vector4 lenSq = __vmsum3fp(dir, dir);
    __vector4 proj = __vmsum3fp(dir, diff);
    __vector4 v;
    float x;

    x = GetReal(__vmulfp(__vsubfp(lbl_82132D00, proj), Reciprocal(lenSq)));
    *t = x;
    if (x < 0.0f)
        *t = 0.0f;
    else if (x > 1.0f)
        *t = 1.0f;
    v = __vmaddfp(dir, __vspltw(__lvlx(t, 0), 0), diff);
    return GetReal(__vmsum3fp(v, v));
}
