#ifndef HAVOK_HKSIMDREAL_H
#define HAVOK_HKSIMDREAL_H

#include "havok/hkVector4.h"

extern "C" hkQuadReal __lvlx(const void *, int);

// A scalar replicated in the four lanes of one VMX vector.
class hkSimdReal {
public:
    HK_FORCE_INLINE hkSimdReal() {}
    HK_FORCE_INLINE explicit hkSimdReal(hkReal r) { m_real = __vspltw(__lvlx(&r, 0), 0); }

    hkQuadReal m_real;
};

#endif
