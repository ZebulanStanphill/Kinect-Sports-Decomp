// Havok: rotation axis from the sum of two directions (normalised, or the second direction when
// the sum is degenerate) and the signed angle about it, measured with two cross products against
// a reference direction (hkMath atan2 at fn_82CECE68).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
extern const float lbl_82187DEC;
float fn_82CECE68(float y, float x);    // hkMath::atan2
}

class hkSimdReal {
public:
    __forceinline hkSimdReal(const float &x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal m_real;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    __forceinline void mul4(const hkSimdReal &s) { m_quad = __vmulfp(m_quad, s.m_real); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal a135 = __vpermwi(v1.m_quad, 135);
        const hkQuadReal a99 = __vpermwi(v1.m_quad, 99);
        const hkQuadReal b99 = __vpermwi(v2.m_quad, 99);
        const hkQuadReal b135 = __vpermwi(v2.m_quad, 135);
        m_quad = __vsubfp(__vmulfp(a99, b135), __vmulfp(a135, b99));
    }
    __forceinline float dot3(const hkVector4 &v) const
    {
        float r;
        __stvewx(__vmsum3fp(m_quad, v.m_quad), &r, 0);
        return r;
    }
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
    hkQuadReal m_quad;
};

extern "C" void fn_830A6D10(const hkVector4 &a, const hkVector4 &b, const hkVector4 &reference,
                            const hkVector4 &dir, hkVector4 &axisOut, float &angleOut)
{
    hkVector4 axis;
    axis.setAdd4(b, a);
    float len = axis.length3();
    if (len > lbl_82187DEC) {
        float inv = 1.0f / len;
        axis.mul4(inv);
    } else {
        axis = b;
    }
    hkVector4 c1;
    c1.setCross(axis, dir);
    hkVector4 c2;
    c2.setCross(c1, axis);
    float y = c1.dot3(reference);
    float x = c2.dot3(reference);
    angleOut = fn_82CECE68(y, x);
    axisOut = axis;
}
