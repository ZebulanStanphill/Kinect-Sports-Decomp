#include "havok/hkVector4.h"

extern "C" {
extern const float lbl_82187DEC;
float fn_82CECE68(float y, float x);    // hkMath::atan2
}

extern "C" void fn_830A6D10(const hkVector4 &a, const hkVector4 &b, const hkVector4 &reference,
                            const hkVector4 &dir, hkVector4 &axisOut, float &angleOut)
{
    hkVector4 axis;
    axis.setAdd4(b, a);
    float len = axis.length3();
    if (len > lbl_82187DEC) {
        float inv = 1.0f / len;
        axis.mul4(inv);
    } else {
        axis = b;
    }
    hkVector4 c1;
    c1.setCross(axis, dir);
    hkVector4 c2;
    c2.setCross(c1, axis);
    float y = c1.dot3(reference);
    float x = c2.dot3(reference);
    angleOut = fn_82CECE68(y, x);
    axisOut = axis;
}
