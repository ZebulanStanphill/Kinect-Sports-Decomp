// hkMath (Common/Base/Math/hkMath.h): the scalar helpers, a namespace as in Havok. Only the functions the game's
// units are seen to inline are declared, in their Xbox 360 forms:
//  - min2 and max2 of two hkReals are branch-free __fsel selects (82D48170, 82D8B4B8, 82D5B3B0, 82D74A90:
//    __fsel(x - y, y, x) for min2, __fsel(x - y, x, y) for max2);
//  - min2 of any other type is the plain compare (82DAB050 and 82DAB540 take the smaller of two ints);
//  - sqrt is the fsqrts instruction (82D27D00) and fabs is the C library's fabs, which the compiler expands
//    inline (82DF0C68).
// The names follow Havok's header.
#ifndef HAVOK_HKMATH_H
#define HAVOK_HKMATH_H

#include "havok/hkBaseTypes.h"

extern "C" {
double __fsel(double a, double b, double c);   // PPC intrinsic: a >= 0 ? b : c
float __fsqrts(float x);                       // PPC intrinsic
double fabs(double x);
}

namespace hkMath {
template <typename T>
HK_FORCE_INLINE T HK_CALL min2(T a, T b) { return a < b ? a : b; }
HK_FORCE_INLINE hkReal HK_CALL min2(hkReal x, hkReal y) { return hkReal(__fsel(x - y, y, x)); }
HK_FORCE_INLINE hkReal HK_CALL max2(hkReal x, hkReal y) { return hkReal(__fsel(x - y, x, y)); }
HK_FORCE_INLINE hkReal HK_CALL sqrt(hkReal r) { return __fsqrts(r); }
HK_FORCE_INLINE hkReal HK_CALL fabs(hkReal r) { return hkReal(::fabs(r)); }
}

#endif
