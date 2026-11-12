// Havok: direction = normalize(b - a); perpendicular vector of it (smallest component zeroed,
// other two swapped and one negated), normalized; then cross(direction, perpendicular).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
__vector4 __vxor(__vector4, __vector4);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}
#include <math.h>

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    __forceinline void normalize3()
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        m_quad = __vmulfp(m_quad, __vspltw(e, 0));
    }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

static __forceinline void calculatePerpendicularVector(const hkVector4 &in, hkVector4 &out)
{
    int min = 0;
    int ok1 = 1;
    int ok2 = 2;
    float a0 = fabs(in(0));
    float a1 = fabs(in(1));
    float a2 = fabs(in(2));

    if (a1 < a0) {
        ok1 = 0;
        min = 1;
        a0 = a1;
    }
    if (a2 < a0) {
        ok2 = min;
    }
    out.setZero4();
    out(ok1) = in(ok2);
    out(ok2) = -in(ok1);
}

struct Frame_82D408C8 {
    char pad0[0x20];
    hkVector4 m_pointA;      // 0x20
    hkVector4 m_pointB;      // 0x30
    hkVector4 m_perp;        // 0x40
    hkVector4 m_binormal;    // 0x50
};

extern "C" void fn_82D408C8(Frame_82D408C8 *self)
{
    hkVector4 dir;

    dir.setSub4(self->m_pointB, self->m_pointA);
    dir.normalize3();
    calculatePerpendicularVector(dir, self->m_perp);
    self->m_perp.normalize3();
    self->m_binormal.setCross(dir, self->m_perp);
}
