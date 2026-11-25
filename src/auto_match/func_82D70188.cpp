#include "havok/hkVector4.h"

extern "C" {
extern float lbl_821344F4;   // 0.9999
extern float lbl_82005340;   // -2.0
}

struct Segment_82D70188 {
    hkVector4 m_point;        // 0x00
    hkVector4 m_direction;    // 0x10 (w at 0x1c = length)
    unsigned int m_id;        // 0x20
};

static __forceinline float GetReal(hkQuadReal v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

extern "C" int fn_82D70188(void *self, const Segment_82D70188 *a, const float *distance, float radiusA,
                           const Segment_82D70188 *b, float radiusB)
{
    float sum = radiusA + radiusB;
    hkQuadReal d = __vsubfp(b->m_point.m_quad, a->m_point.m_quad);
    float dA = GetReal(__vmsum3fp(a->m_direction.m_quad, d));
    float dB = GetReal(__vmsum3fp(b->m_direction.m_quad, d));
    float dAB = GetReal(__vmsum3fp(a->m_direction.m_quad, b->m_direction.m_quad));
    float nB = -dB;
    float sB = (dAB - 1.0f) * radiusA + nB;
    float sA = (dAB - 1.0f) * radiusA + dA;
    float offset;

    if (sB > sum) {
        return 0;
    }
    if (dAB > lbl_821344F4 && b->m_id == 0xffff) {
        return 0;
    }
    if (b->m_id == 0xffff && dAB < 0.8f && sA + sB < 0.1f &&
        a->m_direction.m_quad.vector4_f32[3] + b->m_direction.m_quad.vector4_f32[3] < sum * -2.0f) {
        return 2;
    }
    offset = 0.0f;
    if (b->m_id != 0xffff) {
        offset = *distance * 0.05f;
    }
    if (a->m_direction.m_quad.vector4_f32[3] <= b->m_direction.m_quad.vector4_f32[3] - offset) {
        return 0;
    }
    return 1;
}
