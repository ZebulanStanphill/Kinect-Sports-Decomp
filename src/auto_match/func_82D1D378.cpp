typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vpermwi(__vector4, int);
void __stvewx(__vector4, void *, int);
}

class hkSimdReal
{
  public:
    __forceinline operator float() const
    {
        float r;
        __stvewx(m_real, &r, 0);
        return r;
    }

    hkQuadReal m_real;
};

class hkVector4
{
  public:
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b)
    {
        m_quad = __vsubfp(a.m_quad, b.m_quad);
    }

    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }

    __forceinline hkSimdReal dot3(const hkVector4 &a) const
    {
        hkSimdReal r;
        r.m_real = __vmsum3fp(m_quad, a.m_quad);
        return r;
    }

    __forceinline hkSimdReal lengthSquared3() const
    {
        return dot3(*this);
    }

    hkQuadReal m_quad;
};

// Havok: a point lies inside a triangle (within the tolerance) when the cross products of the
// point's corner vectors all point along the triangle normal.
extern "C" bool fn_82D1D378(const hkVector4 &p, const hkVector4 &a, const hkVector4 &b, const hkVector4 &c,
                            float tolerance)
{
    hkVector4 ab;
    hkVector4 ac;
    hkVector4 normal;

    ab.setSub4(b, a);
    ac.setSub4(c, a);
    normal.setCross(ab, ac);
    {
        hkVector4 pa;
        hkVector4 pb;
        hkVector4 cross;
        pa.setSub4(a, p);
        pb.setSub4(b, p);
        cross.setCross(pa, pb);
        if (cross.dot3(normal) < tolerance) {
            return false;
        }
    }
    {
        hkVector4 pb;
        hkVector4 pc;
        hkVector4 cross;
        pb.setSub4(b, p);
        pc.setSub4(c, p);
        cross.setCross(pb, pc);
        if (cross.dot3(normal) < tolerance) {
            return false;
        }
    }
    {
        hkVector4 pc;
        hkVector4 pa;
        hkVector4 cross;
        pc.setSub4(c, p);
        pa.setSub4(a, p);
        cross.setCross(pc, pa);
        if (cross.dot3(normal) < tolerance) {
            return false;
        }
    }
    return true;
}
