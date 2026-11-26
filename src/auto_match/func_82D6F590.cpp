#include "havok/hkVector4.h"

extern "C" hkBool fn_82D6F590(const hkVector4 &a, const hkVector4 &b, const hkVector4 &c, float tolerance)
{
    hkVector4 ab;
    hkVector4 ac;
    hkVector4 ba;
    hkVector4 bc;
    hkVector4 normalA;
    hkVector4 normalB;
    hkVector4 edge0;
    hkVector4 edge1;
    float abab;
    float cbcb;
    float cbab;

    ab.setSub4(a, b);
    ac.setSub4(a, c);
    ba.setSub4(b, a);
    bc.setSub4(b, c);
    normalA.setCross(ab, ac);
    normalB.setCross(ba, bc);
    if (normalA.lengthSquared3() < tolerance || normalB.lengthSquared3() < tolerance) {
        return true;
    }
    edge0.setSub4(a, b);
    edge1.setSub4(c, b);
    abab = edge0.dot3(edge0);
    cbcb = edge1.dot3(edge1);
    cbab = edge1.dot3(edge0);
    if (cbcb * abab - cbab * cbab != 0.0f) {
        return false;
    }
    return true;
}
