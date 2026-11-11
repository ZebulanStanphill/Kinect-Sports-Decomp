// Remaps dot3(normalize(direction from fn_824B4730), reserved axis v72) from [inMin, inMax] to [0, 1]
// with fn_82539560. Needs the pool alias __real@00000000=ltcg_pool_0_0f.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

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
__vector4 __VMXGetReg(int n);

extern const float lbl_821CA45C[2];

__vector4 *fn_824B4730(__vector4 *out, void *a, void *b, void *c);
float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline __vector4 GetDirection(void *a, void *b, void *c)
{
    __vector4 r;

    fn_824B4730(&r, a, b, c);
    return r;
}

float fn_824B5CF0(void *a, void *b, void *c, float inMin, float inMax)
{
    __vector4 n;
    __vector4 axis;
    __vector4 dot;

    n = Normalize3(GetDirection(a, b, c));
    axis = __VMXGetReg(72);
    dot = __vmsum3fp(n, axis);
    return fn_82539560(dot.vector4_f32[0], inMin, inMax, 0.0f, lbl_821CA45C[1]);
}
