#include "havok/hkVector4.h"

extern "C" void fn_82DD3A78(hkSimdReal &distanceOut, const hkVector4 &point, const hkVector4 *triangle,
                            const hkVector4 &direction, hkVector4 &normalOut)
{
    hkVector4 e0, e1;
    e0.setSub4(triangle[0], triangle[2]);
    e1.setSub4(triangle[2], triangle[1]);
    normalOut.setCross(e1, e0);
    const hkSimdReal invLen = normalOut.lengthInverse3();
    normalOut.setFlipSign(normalOut, normalOut.dot3(direction));
    normalOut.mul4(invLen);
    hkVector4 d;
    d.setSub4(point, triangle[0]);
    // Through m_real: hkSimdReal.h declares no operator=, and the implicit one copies doublewords.
    distanceOut.m_real = d.dot3(normalOut).m_real;
}
