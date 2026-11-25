#include "havok/hkQuadReal.h"

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    __forceinline void addMul4(const hkVector4 &a, const hkQuadReal &r) { m_quad = __vmaddfp(a.m_quad, r, m_quad); }
    __forceinline void mul4(float r) { m_quad = __vmulfp(m_quad, __vspltw(__lvlx(&r, 0), 0)); }
    __forceinline hkQuadReal lengthSquared3() const { return __vmsum3fp(m_quad, m_quad); }
    __forceinline float length3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        float r;
        __stvewx(__vmulfp(len2, e), &r, 0);
        return r;
    }
    __forceinline float lengthSquared3f() const
    {
        float r;
        __stvewx(__vmsum3fp(m_quad, m_quad), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

extern "C" void fn_82D093B8(hkVector4 *sphere, const hkVector4 *a, const hkVector4 *b, const hkVector4 *c, float extraRadius)
{
    hkVector4 ab, ac, n, t0, t1, center, pos;

    ab.setSub4(*b, *a);
    ac.setSub4(*c, *a);
    n.setCross(ab, ac);
    t0.setCross(n, ab);
    t1.setCross(ac, n);
    center.setZero4();
    center.addMul4(t0, ac.lengthSquared3());
    center.addMul4(t1, ab.lengthSquared3());
    center.mul4(0.5f / n.lengthSquared3f());
    pos.setAdd4(*a, center);
    float radius = center.length3();
    sphere->m_quad = pos.m_quad;
    sphere->m_quad.vector4_f32[3] = radius + extraRadius;
}
