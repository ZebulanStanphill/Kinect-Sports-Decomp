#include "havok/hkVector4.h"

extern "C" hkBool fn_83083C88(const hkQuadReal *a, const hkQuadReal *b, int mask)
{
    hkQuadReal zero, d;
    int i;
    hkBool ret = true;
    hkBool result = true;
    hkVector4Comparison::Mask m = (hkVector4Comparison::Mask)mask;

    zero = __vxor(zero, zero);
    for (i = 0; i < 3; i++) {
        d = __vsubfp(b[i], a[i]);
        hkVector4Comparison less, equal, greater;
        less.m_mask = __vcmpgtfp(zero, d);
        equal.m_mask = __vcmpeqfp(zero, d);
        greater.m_mask = __vcmpgtfp(d, zero);
        hkBool same = less.allAreSet(m) || equal.allAreSet(m) || greater.allAreSet(m);
        result = result && same;
    }
    ret = result;
    return ret;
}
