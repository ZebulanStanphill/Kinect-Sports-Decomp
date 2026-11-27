#include "xdk/vectorintrinsics.h"

typedef __declspec(align(16)) struct Matrix_82565F50 {
    __vector4 r[4];
} Matrix_82565F50;

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 Transform3(__vector4 v, Matrix_82565F50 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmaddfp(m.r[2], z, m.r[3]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}

static __forceinline __vector4 SetW0(__vector4 v)
{
    __vector4 zero, mask;

    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
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

extern const float lbl_821916FC;
__vector4 fn_82565F50(const Matrix_82565F50 *m, __vector4 v)
{
    __vector4 p0, p1, d;

    p0 = Transform3(v, *m);
    p1 = Transform3(__vmulfp(v, Replicate(lbl_821916FC)), *m);
    p0 = SetW0(p0);
    p1 = SetW0(p1);
    d = __vsubfp(p1, p0);
    return Normalize3(d);
}
