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
__vector4 __vxor(__vector4, __vector4);
__vector4 __vand(__vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
extern const hkQuadReal lbl_8209AB20;   // sign mask
}

class hkSimdReal {
public:
    __forceinline void operator=(const hkSimdReal &s) { m_real = s.m_real; }
    hkQuadReal m_real;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setCross(const hkVector4 &a, const hkVector4 &b)
    {
        const hkQuadReal t0 = __vmulfp(__vpermwi(a.m_quad, 99), __vpermwi(b.m_quad, 135));
        const hkQuadReal t1 = __vmulfp(__vpermwi(a.m_quad, 135), __vpermwi(b.m_quad, 99));
        m_quad = __vsubfp(t0, t1);
    }
    __forceinline hkSimdReal dot3(const hkVector4 &v) const { hkSimdReal r; r.m_real = __vmsum3fp(m_quad, v.m_quad); return r; }
    __forceinline void setFlipSign(const hkVector4 &v, const hkSimdReal &s)
    {
        m_quad = __vxor(v.m_quad, __vand(__vspltw(s.m_real, 0), lbl_8209AB20));
    }
    __forceinline hkSimdReal lengthInverse3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        hkSimdReal r;
        r.m_real = __vsel(e, zero, __vcmpeqfp(zero, len2));
        return r;
    }
    __forceinline void mul4(const hkSimdReal &s) { m_quad = __vmulfp(m_quad, s.m_real); }
    hkQuadReal m_quad;
};

extern "C" void fn_82DD3A78(hkSimdReal &distanceOut, const hkVector4 &point, const hkVector4 *triangle,
                            const hkVector4 &direction, hkVector4 &normalOut)
{
    hkVector4 e0, e1;
    e0.setSub4(triangle[0], triangle[2]);
    e1.setSub4(triangle[2], triangle[1]);
    normalOut.setCross(e1, e0);
    const hkSimdReal invLen = normalOut.lengthInverse3();
    normalOut.setFlipSign(normalOut, normalOut.dot3(direction));
    normalOut.mul4(invLen);
    hkVector4 d;
    d.setSub4(point, triangle[0]);
    distanceOut = d.dot3(normalOut);
}
