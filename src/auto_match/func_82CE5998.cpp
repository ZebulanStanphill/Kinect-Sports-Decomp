// Havok: a unit vector perpendicular to the given float3 (hkVector4Util::calculatePerpendicularVector
// - swap the two largest components with one negated, zero the smallest - then normalize3), w = 0.
#include <math.h>  // C++ fabs(float) overload (hkMath::fabs)
#include "havok/hkVector4.h"

static __forceinline void CalculatePerpendicularVector(const float *vectorIn, hkVector4 &biVectorOut)
{
    int min = 0;
    int ok1 = 1;
    int ok2 = 2;

    float a0 = fabs(vectorIn[0]);
    float a1 = fabs(vectorIn[1]);
    float a2 = fabs(vectorIn[2]);

    if (a1 < a0) {
        ok1 = 0;
        min = 1;
        a0 = a1;
    }
    if (a2 < a0) {
        ok2 = min;
        min = 2;
    }
    biVectorOut.setZero4();
    biVectorOut(ok1) = vectorIn[ok2];
    biVectorOut(ok2) = -vectorIn[ok1];
}

extern "C" void fn_82CE5998(hkVector4 *out, const float *in)
{
    hkVector4 p;
    CalculatePerpendicularVector(in, p);
    p.normalize3();
    p(3) = 0.0f;
    *out = p;
}
