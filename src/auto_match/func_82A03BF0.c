typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern float lbl_82015BE0; /* 1/3 */

static __forceinline __vector4 Replicate(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

static __forceinline __vector4 ReplicateP(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

__vector4 *fn_82A03BF0(__vector4 *result, void *self, __vector4 a, __vector4 b, __vector4 c)
{
    __vector4 d1 = __vsubfp(b, a);
    __vector4 d2 = __vsubfp(c, b);
    __vector4 r = c;
    __vector4 n1 = Normalize3(d1);
    __vector4 n2 = Normalize3(d2);
    __vector4 dot = __vmsum3fp(n1, n2);

    if (dot.vector4_f32[0] < 0.0f) {
        __vector4 len = Length3(d1);
        float l = len.vector4_f32[0];
        r = __vmaddfp(__vmulfp(n1, ReplicateP(&l)), Replicate(0.333333343f), b);
        r.vector4_f32[3] = b.vector4_f32[3];
    }
    *result = r;
    return result;
}
