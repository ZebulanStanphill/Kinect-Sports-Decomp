#include "xdk/vectorintrinsics.h"

int fn_82539A00(const __vector4 *normal, float distance, const __vector4 *origin,
                const __vector4 *direction, float *t);

int fn_823017D8(__vector4 start, __vector4 end, __vector4 center, __vector4 normal,
                float radius, float *out)
{
    __vector4 dir, dist, hit, diff, lenSq;
    float t;

    dir = __vsubfp(end, start);
    dist = __vmsum3fp(normal, center);
    if (fn_82539A00(&normal, dist.vector4_f32[0], &start, &dir, &t)) {
        hit = __vmaddfp(dir, __vspltw(__lvlx(&t, 0), 0), start);
        diff = __vsubfp(hit, center);
        lenSq = __vmsum3fp(diff, diff);
        if (lenSq.vector4_f32[0] < radius * radius) {
            *out = t;
            return 1;
        }
    }
    *out = 0.0f;
    return 0;
}
