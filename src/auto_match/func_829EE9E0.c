#include "xdk/vectorintrinsics.h"

typedef struct Object_829EE9E0 {
    __vector4 direction;   // 0x00
    char pad10[0x20];
    __vector4 forward;     // 0x30
    char pad40[0x244];
    int mode;              // 0x284
} Object_829EE9E0;

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
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

static __forceinline unsigned char IsMode2(const Object_829EE9E0 *o)
{
    return o->mode == 2;
}

__vector4 fn_829EE9E0(const Object_829EE9E0 *obj)
{
    __vector4 r;

    if (obj == 0) {
        return __vspltisw(0);
    }
    if (!(IsMode2(obj) & 1)) {
        r = obj->direction;
        r = __vmulfp(Normalize3(r), Replicate(-1.0f));
        r.vector4_f32[3] = 0.0f;
        return r;
    }
    return obj->forward;
}
