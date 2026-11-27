#include "xdk/vectorintrinsics.h"

typedef struct Shape_8257EC30 {
    int type;                   // 0x00
    char pad4[0xc];
    __vector4 p0;               // 0x10
    __vector4 p1;               // 0x20
    __vector4 p2;               // 0x30
} Shape_8257EC30;

typedef struct Object_8257EC30 {
    char pad0[0x10];
    __vector4 normal;           // 0x10
    char pad20[0x10];
    Shape_8257EC30 shape;       // 0x30
} Object_8257EC30;

static __forceinline __vector4 Cross3(__vector4 a, __vector4 b)
{
    __vector4 a1 = __vpermwi(a, 99);
    __vector4 b1 = __vpermwi(b, 135);
    __vector4 b2 = __vpermwi(b, 99);
    __vector4 a2 = __vpermwi(a, 135);
    __vector4 r = __vmulfp(a1, b1);
    return __vnmsubfp(a2, b2, r);
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

__vector4 fn_8257EC30(Object_8257EC30 *self)
{
    Shape_8257EC30 *s = &self->shape;

    switch (s->type) {
    case 0: {
        __vector4 e1 = __vsubfp(s->p1, s->p0);
        __vector4 e2 = __vsubfp(s->p2, s->p0);
        __vector4 n = Cross3(e1, e2);
        return Normalize3(n);
    }
    case 5:
        return s->p1;
    default:
        return self->normal;
    }
}
