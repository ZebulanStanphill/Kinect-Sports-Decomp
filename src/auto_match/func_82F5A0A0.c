typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

extern void fn_82273AF8(float *sinOut, float *cosOut, float angle);

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

static __forceinline __vector4 RotationNormal(__vector4 normal, float angle)
{
    __vector4 n, scale;

    n = __vrlimi(__vupkd3d(__vspltisw(0), 1), normal, 0xe, 0);
    fn_82273AF8(&scale.vector4_f32[2], &scale.vector4_f32[3], 0.5f * angle);
    scale.vector4_f32[0] = scale.vector4_f32[1] = scale.vector4_f32[2];
    return __vmulfp(n, scale);
}

__vector4 fn_82F5A0A0(__vector4 axis, float angle)
{
    __vector4 normal;

    normal = Normalize3(axis);
    return RotationNormal(normal, angle);
}
