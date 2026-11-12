typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vcfsx(__vector4 v, int shift);
void __stvewx(__vector4 v, void *base, int offset);
__vector4 __VMXGetReg(int n);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);

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
