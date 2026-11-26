extern "C" {
double __fsel(double, double, double);
}
#include <math.h>
#include "havok/hkVector4.h"

namespace hkMath {
    __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }
    __forceinline float min2(float x, float y) { return (float)__fsel(x - y, y, x); }
}

struct Transformed_82DDA618 {
    char pad0[0xc0];
    hkVector4 m_plane;        // 0xc0 (w: distance)
    hkVector4 m_position;     // 0xd0
    char pad_e0[0x50];
};

struct Input_82DDA618 {
    float m_distance;         // 0x0
    char pad4[0xc];
    float m_tolerance;        // 0x10
};

struct Result_82DDA618 {
    float m_time;             // 0x0
    char pad4[0xc];
    hkVector4 m_point;        // 0x10
};

extern "C" void fn_82DDA4B8(void *ctx, float time, Transformed_82DDA618 *out);

extern "C" float fn_82DDA618(void *ctx, const Input_82DDA618 *input, const hkVector4 *point,
                             float t0, float t1, float d0, float d1, int unused,
                             Result_82DDA618 *result)
{
    float tolerance = input->m_tolerance * 0.25f;
    float t = t0;
    Transformed_82DDA618 tr;
    for (int i = 0; i < 10; i++) {
        if (d0 <= input->m_distance)
            break;
        float dd = d1 - d0;
        if (dd > -tolerance)
            break;
        float frac = (input->m_distance - d0) / dd;
        if ((i & 1) == 0) {
            frac = hkMath::min2(hkMath::max2(frac, 0.1f), 0.9f);
        }
        t = (1.0f - frac) * t0 + frac * t1;
        fn_82DDA4B8(ctx, t, &tr);
        hkVector4 rel;
        rel.setSub4(*point, tr.m_position);
        float d = tr.m_plane.dot4xyz1(rel);
        hkBool done = fabs(d - input->m_distance) < tolerance;
        if (done)
            break;
        if (d < input->m_distance) {
            t1 = t;
            d1 = d;
        } else {
            t0 = t;
            d0 = d;
        }
    }
    if (t < result->m_time) {
        result->m_time = t;
        result->m_point = *point;
    }
    return result->m_time;
}
