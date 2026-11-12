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
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
__vector4 __vxor(__vector4, __vector4);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}
#include <math.h>

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    __forceinline void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __forceinline void setCross(const hkVector4 &v1, const hkVector4 &v2)
    {
        const hkQuadReal cross0 = __vmulfp(__vpermwi(v1.m_quad, 99), __vpermwi(v2.m_quad, 135));
        const hkQuadReal cross1 = __vmulfp(__vpermwi(v1.m_quad, 135), __vpermwi(v2.m_quad, 99));
        m_quad = __vsubfp(cross0, cross1);
    }
    __forceinline float dot3(const hkVector4 &v) const
    {
        float r;
        __stvewx(__vmsum3fp(m_quad, v.m_quad), &r, 0);
        return r;
    }
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

/* hkTransform::getIdentity() (columns), filled at startup */
extern "C" hkVector4 lbl_8323B1D0[4];

static __forceinline void calculatePerpendicularVector(const hkVector4 &vectorIn, hkVector4 &biVectorOut)
{
    int min = 0;
    int ok1 = 1;
    int ok2 = 2;
    float a0 = fabs(vectorIn(0));
    float a1 = fabs(vectorIn(1));
    float a2 = fabs(vectorIn(2));
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
    biVectorOut(ok1) = vectorIn(ok2);
    biVectorOut(ok2) = -vectorIn(ok1);
}

class hkpLinearParametricCurve {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void getTangent(float t, hkVector4 &tangent);
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void getBinormal(float t, hkVector4 &up);
    hkVector4 m_dirNotParallelToTangentAlongWholePath; /* 0x10 (vfptr padded to 16) */
};

void hkpLinearParametricCurve::getBinormal(float t, hkVector4 &up)
{
    hkVector4 tangent;
    getTangent(t, tangent);
    if (tangent.dot3(lbl_8323B1D0[1]) < 0.98f) {
        up.setCross(tangent, m_dirNotParallelToTangentAlongWholePath);
    } else {
        calculatePerpendicularVector(tangent, up);
    }
    up.normalize3();
}
