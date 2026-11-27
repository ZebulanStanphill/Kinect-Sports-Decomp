#include "xdk/vectorintrinsics.h"

typedef struct Aabb_8307EC30 {
    __vector4 m_min; /* 0x00 */
    __vector4 m_max; /* 0x10 */
} Aabb_8307EC30;

static __forceinline void SetAll(__vector4 *v, float x)
{
    v->vector4_f32[0] = x;
    *v = __vspltw(*v, 0);
}

void fn_8307EC30(const __vector4 **points, int count, Aabb_8307EC30 *out)
{
    int i;
    if (count == 0) {
        SetAll(&out->m_min, 3.40282e+38f);
        SetAll(&out->m_max, -3.40282e+38f);
        return;
    }
    out->m_min = *points[0];
    out->m_max = *points[0];
    for (i = 1; i < count; i++) {
        out->m_min = __vminfp(*points[i], out->m_min);
        out->m_max = __vmaxfp(*points[i], out->m_max);
    }
    out->m_min.vector4_f32[3] = 0.0f;
    out->m_max.vector4_f32[3] = 0.0f;
}
