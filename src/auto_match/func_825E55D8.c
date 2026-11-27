#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82196750;
extern __vector4 lbl_8329E9E0;      /* all false */
extern __vector4 lbl_8329E9F0;      /* all true */

static __forceinline int EqualInt(__vector4 a, __vector4 b)
{
    unsigned int cr = 0;
    __vcmpequwR(a, b, &cr);
    return (cr & 0x80) == 0x80;
}

static __forceinline __vector4 SetW(__vector4 v)
{
    __vector4 mask = __VMXGetReg(67);
    return __vsel(v, lbl_82196750, mask);
}

int fn_825E55D8(const __vector4 *planes, __vector4 min, __vector4 max)
{
    __vector4 lo, hi, outside, inside, mask;
    int i;

    lo = SetW(min);
    hi = SetW(max);
    outside = lbl_8329E9E0;
    inside = lbl_8329E9E0;
    for (i = 0; i < 6; i++) {
        __vector4 p = planes[i];
        __vector4 sel = __vcmpgtfp(p, __VMXGetReg(77));
        __vector4 farPoint = __vsel(hi, lo, sel);
        __vector4 nearPoint = __vsel(lo, hi, sel);
        outside = __vor(outside, __vcmpgtfp(__vmsum4fp(p, farPoint), __VMXGetReg(77)));
        inside = __vor(inside, __vcmpgtfp(__vmsum4fp(p, nearPoint), __VMXGetReg(77)));
    }
    if (EqualInt(outside, lbl_8329E9F0))
        return 0;
    if (EqualInt(inside, lbl_8329E9F0))
        return 1;
    return 2;
}
