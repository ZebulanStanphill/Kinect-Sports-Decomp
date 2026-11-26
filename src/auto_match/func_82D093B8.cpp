#include "havok/hkVector4.h"

extern "C" void fn_82D093B8(hkVector4 *sphere, const hkVector4 *a, const hkVector4 *b, const hkVector4 *c, float extraRadius)
{
    hkVector4 ab, ac, n, t0, t1, center, pos;

    ab.setSub4(*b, *a);
    ac.setSub4(*c, *a);
    n.setCross(ab, ac);
    t0.setCross(n, ab);
    t1.setCross(ac, n);
    center.setZero4();
    center.addMul4(ac.lengthSquared3(), t0);
    center.addMul4(ab.lengthSquared3(), t1);
    center.mul4(hkSimdReal(0.5f / n.lengthSquared3()));
    pos.setAdd4(*a, center);
    float radius = center.length3();
    *sphere = pos;
    sphere->setW(radius + extraRadius);
}
