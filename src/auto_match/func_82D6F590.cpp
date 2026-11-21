// Havok: a triangle is degenerate when either corner cross product is shorter than the tolerance
// or the Gram determinant of two of its edges is zero. The hkBool result goes through the hidden
// result pointer. The edge a - b is computed twice (ab and edge0): the compiler shares the value
// and keeps a copy of it for the first cross product.
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

class hkBool
{
  public:
    __forceinline hkBool(bool b)
    {
        m_bool = (char)b;
    }

    char m_bool;
};

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

extern "C" hkBool fn_82D6F590(const hkVector4 &a, const hkVector4 &b, const hkVector4 &c, float tolerance)
{
    hkVector4 ab;
    hkVector4 ac;
    hkVector4 ba;
    hkVector4 bc;
    hkVector4 normalA;
    hkVector4 normalB;
    hkVector4 edge0;
    hkVector4 edge1;
    float abab;
    float cbcb;
    float cbab;

    ab.setSub4(a, b);
    ac.setSub4(a, c);
    ba.setSub4(b, a);
    bc.setSub4(b, c);
    normalA.setCross(ab, ac);
    normalB.setCross(ba, bc);
    if (normalA.lengthSquared3() < tolerance || normalB.lengthSquared3() < tolerance) {
        return true;
    }
    edge0.setSub4(a, b);
    edge1.setSub4(c, b);
    abab = edge0.dot3(edge0);
    cbcb = edge1.dot3(edge1);
    cbab = edge1.dot3(edge0);
    if (cbcb * abab - cbab * cbab != 0.0f) {
        return false;
    }
    return true;
}
