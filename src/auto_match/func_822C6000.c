#include "xdk/vectorintrinsics.h"

extern const float lbl_82192730[7];

static __forceinline __vector4 QuaternionMultiply(__vector4 q1, __vector4 q2, __vector4 signMask)
{
    __vector4 q2wzyx, q2zwxy, q2yxwz, negated, nx, ny, nz, nw, x, y, z, w;

    q2zwxy = __vpermwi(q2, 177);
    q2yxwz = __vpermwi(q2, 78);
    q2wzyx = __vpermwi(q2, 228);
    negated = __vxor(q1, signMask);
    nx = __vrlimi(negated, q1, 0xb, 0);
    nw = __vrlimi(negated, q1, 0x1, 0);
    ny = __vrlimi(negated, q1, 0xd, 0);
    nz = __vrlimi(negated, q1, 0x7, 0);
    x = __vmsum4fp(nx, q2wzyx);
    w = __vmsum4fp(nw, q2);
    y = __vmsum4fp(ny, q2zwxy);
    z = __vmsum4fp(nz, q2yxwz);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
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

static __forceinline __vector4 Replicate(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

int fn_822C6000(const __vector4 *frame, __vector4 point)
{
    __vector4 signMask, a, c, r, q, axis, pos, n, d;

    signMask = __vspltisw(-1);
    a = __vspltisw(0);
    signMask = __vslw(signMask, signMask);
    q = frame[1];
    axis = __VMXGetReg(71);
    a = __vrlimi(a, axis, 0xe, 0);
    c = __vrlimi(__vxor(q, signMask), q, 1, 0);
    r = QuaternionMultiply(c, a, signMask);
    r = QuaternionMultiply(r, q, signMask);
    pos = __vmaddfp(r, Replicate(&lbl_82192730[1]), frame[0]);
    n = Normalize3(__vsubfp(point, pos));
    d = __vmsum3fp(r, n);
    return d.vector4_f32[0] > 0.0f;
}
