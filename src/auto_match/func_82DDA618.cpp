typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
void __stvewx(__vector4, void *, int);
double __fsel(double, double, double);
}
#include <math.h>

class hkBool {
public:
    __forceinline hkBool(bool b) { m_bool = (char)b; }
    __forceinline operator bool() const { return m_bool != 0; }
    char m_bool;
};

namespace hkMath {
    __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }
    __forceinline float min2(float x, float y) { return (float)__fsel(x - y, y, x); }
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline float dot4xyz1(const hkVector4 &v) const
    {
        float r;
        __stvewx(__vaddfp(__vspltw(m_quad, 3), __vmsum3fp(m_quad, v.m_quad)), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

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
