// Skeleton limb bend: from the three joints at index, index+1, index+2 (shifted by two) takes the
// side lengths a = |j0 - j1|, b = |j2 - j1|, c = |j2 - j0|; the reach of the limb bent to the
// reference angle lbl_831BADA8[17] (law of cosines, capped at a + b) minus c, negated, is
// returned as is when the current angle is below the reference, else capped at limit.
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

extern double sqrt(double);
extern float lbl_831BADA8[];

float fn_82F593C8(float a, float b);
float fn_82F59428(float x);
double fn_82F643F8(double x);

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

float fn_82F54420(void *self, const __vector4 *joints, float limit, int index)
{
    __vector4 p0, p1, p2, la, lb, lc;
    float a, b, c, sq, reach, angle, result;
    float cosRef;

    p0 = joints[index + 2];
    p1 = joints[index + 3];
    p2 = joints[index + 4];
    la = Length3(__vsubfp(p0, p1));
    lb = Length3(__vsubfp(p2, p1));
    lc = Length3(__vsubfp(p2, p0));
    a = la.vector4_f32[0];
    b = lb.vector4_f32[0];
    cosRef = (float)fn_82F643F8(lbl_831BADA8[17]);
    sq = a * a + b * b;
    reach = fn_82F593C8((float)sqrt(sq - cosRef * b * a * 2.0f), b + a);
    c = lc.vector4_f32[0];
    result = (reach - c) * -1.0f;
    angle = fn_82F59428((sq - c * c) / (b * a * 2.0f));
    if (angle < lbl_831BADA8[17])
        return result;
    return fn_82F593C8(result, limit);
}
