#include "xdk/vectorintrinsics.h"

extern const float lbl_821954B0[];

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

int fn_823E5C00(unsigned int count, const __vector4 *points, const int *valid, __vector4 target)
{
    int best = -1;
    float bestDistance = lbl_821954B0[0x20];    /* FLT_MAX, LTCG pool base + 0x80 */
    unsigned int i;

    for (i = 0; i < count; i++) {
        if (valid[i] != 0) {
            __vector4 l = Length3(__vsubfp(points[i], target));
            float d = l.vector4_f32[0];
            if (d < bestDistance) {
                best = i;
                bestDistance = d;
            }
        }
    }
    return best;
}
