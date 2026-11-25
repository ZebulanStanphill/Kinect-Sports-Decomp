#include <math.h>
#include "havok/hkVector4.h"

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
