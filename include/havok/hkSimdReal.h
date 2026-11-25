#ifndef HAVOK_HKSIMDREAL_H
#define HAVOK_HKSIMDREAL_H

#include "havok/hkQuadReal.h"

// A scalar kept in a VMX register, replicated in its four lanes.
class hkSimdReal {
public:
    HK_FORCE_INLINE hkSimdReal() {}
    HK_FORCE_INLINE hkSimdReal(const hkQuadReal &x) { m_real = x; }
    HK_FORCE_INLINE hkSimdReal(const hkReal &x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
    HK_FORCE_INLINE operator hkReal() const
    {
        hkReal r;
        __stvewx(m_real, &r, 0);
        return r;
    }
    HK_FORCE_INLINE hkSimdReal operator-() const
    {
        hkSimdReal r;
        r.m_real = __vsubfp(lbl_82132D00, m_real);
        return r;
    }

    hkQuadReal m_real;
};
typedef const hkSimdReal &hkSimdRealParameter;

#endif
