// Havok: a unit vector perpendicular to the given float3 (hkVector4Util::calculatePerpendicularVector
// - swap the two largest components with one negated, zero the smallest - then normalize3), w = 0.
#include <math.h>  // C++ fabs(float) overload (hkMath::fabs)

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vxor(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __forceinline void normalize3()
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
    hkQuadReal m_quad;
};

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
