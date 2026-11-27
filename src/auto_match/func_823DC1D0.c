#include "xdk/vectorintrinsics.h"

static __forceinline float DistanceSq(__vector4 a, __vector4 b)
{
    __vector4 d = __vsubfp(b, a);
    __vector4 r = __vmsum3fp(d, d);
    return r.vector4_f32[0];
}

unsigned int fn_823DC1D0(const __vector4 *points, unsigned int count, __vector4 target)
{
    unsigned int best = 0;
    float bestDist = DistanceSq(points[0], target);
    unsigned int i;
    for (i = 1; i < count; i++) {
        float dist = DistanceSq(points[i], target);
        if (dist < bestDist) {
            bestDist = dist;
            best = i;
        }
    }
    return best;
}
