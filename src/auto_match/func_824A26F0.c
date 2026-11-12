// Returns whether the two skeleton segments joint 4 -> 6 and joint 13 -> 8 are (anti)parallel
// enough: |dot(normalize(a), normalize(b))| above the threshold at +0x14.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern double fabs(double);

typedef struct Skeleton_824A26F0 {
    char pad00[0x14];
    float threshold;    // 0x14
} Skeleton_824A26F0;

extern void fn_82F512E8(__vector4 *out, Skeleton_824A26F0 *skeleton, int joint, int space);

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

int fn_824A26F0(Skeleton_824A26F0 *self)
{
    __vector4 a0, a1, b0, b1, a, b, dot;

    fn_82F512E8(&a0, self, 4, 1);
    fn_82F512E8(&a1, self, 6, 1);
    a = Normalize3(__vsubfp(a1, a0));
    fn_82F512E8(&b0, self, 13, 1);
    fn_82F512E8(&b1, self, 8, 1);
    b = Normalize3(__vsubfp(b1, b0));
    dot = __vmsum3fp(a, b);
    return fabs(dot.vector4_f32[0]) > self->threshold;
}
