/* Point a fixed distance (lbl_821917A8[11]) beyond bone 12/13 along the direction from bone 10/11
   (index + 1 unless side == 1). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern const float lbl_821917A8[];

__vector4 *fn_822B6A58(__vector4 *out, void *source, int index);

static __forceinline __vector4 Replicate(const float *value)
{
    return __vspltw(__lvlx(value, 0), 0);
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

__vector4 *fn_822C09B0(__vector4 *out, void *source, int side)
{
    __vector4 t0, t1, t2;
    int first, second;
    const __vector4 *p;
    __vector4 from, to, dir, scale;

    first = side == 1 ? 10 : 11;
    second = side == 1 ? 12 : 13;
    from = *fn_822B6A58(&t0, source, first);
    to = *fn_822B6A58(&t1, source, second);
    dir = Normalize3(__vsubfp(to, from));
    p = fn_822B6A58(&t2, source, second);
    scale = Replicate(&lbl_821917A8[11]);
    *out = __vmaddfp(dir, scale, *p);
    return out;
}
