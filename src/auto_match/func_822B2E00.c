#include "xdk/vectorintrinsics.h"

typedef struct Points_822B2E00 {
    char pad0[0x10];
    __vector4 points[4];   // 0x10
} Points_822B2E00;

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

void fn_822B2E00(__vector4 *out, const Points_822B2E00 *self, __vector4 point)
{
    __vector4 best = self->points[0];
    int i;

    for (i = 0; i < 4; i++) {
        if (Length3(__vsubfp(self->points[i], point)).vector4_f32[0] <
            Length3(__vsubfp(best, point)).vector4_f32[0]) {
            best = self->points[i];
        }
    }
    *out = best;
}
