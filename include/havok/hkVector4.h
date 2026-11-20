#ifndef HAVOK_HKVECTOR4_H
#define HAVOK_HKVECTOR4_H

#include "havok/hkBaseTypes.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    hkReal vector4_f32[4];
    hkUint32 vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vaddfp(__vector4, __vector4);
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
void __stvewx(__vector4, void *, int);
__vector4 __vxor(__vector4, __vector4);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
extern const hkQuadReal lbl_8209AB20; // Sign mask.
}

class hkMatrix3;
class hkRotation;
class hkTransform;

// One 16-byte VMX vector, with lanes x, y, z and w.
class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4() {}
    HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    HK_FORCE_INLINE void normalize3()
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
    void setTransformedPos(const hkTransform &t, const hkVector4 &v);
    void setTransformedInversePos(const hkTransform &t, const hkVector4 &v);
    HK_FORCE_INLINE void add4(const hkVector4 &v) { m_quad = __vaddfp(m_quad, v.m_quad); }
    HK_FORCE_INLINE void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE float length3() const
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

    HK_FORCE_INLINE void setNeg4(const hkVector4 &v) { m_quad = __vxor(v.m_quad, lbl_8209AB20); }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }

    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return m_quad.vector4_f32[i]; }

    hkQuadReal m_quad;
};

#endif
