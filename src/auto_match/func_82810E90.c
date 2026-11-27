// Reflects the negated, normalised incident direction about the normalised normal (float3s)
// and stores the normalised result.

#include "xdk/vectorintrinsics.h"

typedef struct Float3_82810E90 {
    float x, y, z;
} Float3_82810E90;

static __forceinline __vector4 LoadFloat3(const Float3_82810E90 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
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

static __forceinline void StoreFloat3(Float3_82810E90 *dst, __vector4 v)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);
    __stvewx(x, dst, 0);
    __stvewx(y, dst, 4);
    __stvewx(z, dst, 8);
}

void fn_82810E90(const Float3_82810E90 *in, const Float3_82810E90 *normal, Float3_82810E90 *out)
{
    Float3_82810E90 d, n;
    float dot;
    __vector4 v;

    d.x = -in->x;
    d.y = -in->y;
    d.z = -in->z;
    v = LoadFloat3(&d);
    v = Normalize3(v);
    StoreFloat3(&d, v);
    v = LoadFloat3(normal);
    v = Normalize3(v);
    StoreFloat3(&n, v);
    dot = n.x * d.x + n.y * d.y + n.z * d.z;
    out->x = n.x * dot * 2.0f - d.x;
    out->y = n.y * dot * 2.0f - d.y;
    out->z = n.z * dot * 2.0f - d.z;
    v = LoadFloat3(out);
    v = Normalize3(v);
    StoreFloat3(out, v);
}
