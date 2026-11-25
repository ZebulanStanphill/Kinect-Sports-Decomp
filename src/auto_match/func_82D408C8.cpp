#include <math.h>
#include "havok/hkVector4.h"

static __forceinline void calculatePerpendicularVector(const hkVector4 &in, hkVector4 &out)
{
    int min = 0;
    int ok1 = 1;
    int ok2 = 2;
    float a0 = fabs(in(0));
    float a1 = fabs(in(1));
    float a2 = fabs(in(2));

    if (a1 < a0) {
        ok1 = 0;
        min = 1;
        a0 = a1;
    }
    if (a2 < a0) {
        ok2 = min;
    }
    out.setZero4();
    out(ok1) = in(ok2);
    out(ok2) = -in(ok1);
}

struct Frame_82D408C8 {
    char pad0[0x20];
    hkVector4 m_pointA;      // 0x20
    hkVector4 m_pointB;      // 0x30
    hkVector4 m_perp;        // 0x40
    hkVector4 m_binormal;    // 0x50
};

extern "C" void fn_82D408C8(Frame_82D408C8 *self)
{
    hkVector4 dir;

    dir.setSub4(self->m_pointB, self->m_pointA);
    dir.normalize3();
    calculatePerpendicularVector(dir, self->m_perp);
    self->m_perp.normalize3();
    self->m_binormal.setCross(dir, self->m_perp);
}
