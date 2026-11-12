// Swing decomposition helper: normalizes `direction`, stores its dot with `axis`, then the z row of
// the rotation that takes the y axis onto the direction (axis-angle about (dz, 0, -dx)) applied to
// `axis`; when the direction is (anti)parallel to y the rotation is the identity.
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

double sqrt(double);

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

void fn_829DD770(__vector4 direction, __vector4 axis, float *outDot, float *outZ)
{
    __vector4 dot;
    float x, z, length;

    direction = Normalize3(direction);
    dot = __vmsum3fp(direction, axis);
    z = direction.vector4_f32[2];
    x = -direction.vector4_f32[0];
    *outDot = dot.vector4_f32[0];
    length = (float)sqrt(x * x + z * z);
    if (length < 1e-6) {
        *outZ = axis.vector4_f32[2];
    } else {
        float c, s, inv;

        c = direction.vector4_f32[1];
        s = (float)sqrt(1.0f - c * c);
        inv = 1.0f / length;
        x *= inv;
        z *= inv;
        *outZ = (1.0f - c) * axis.vector4_f32[0] * x * z - s * axis.vector4_f32[1] * z
              + ((1.0f - c) * x * x + c) * axis.vector4_f32[2];
    }
}
