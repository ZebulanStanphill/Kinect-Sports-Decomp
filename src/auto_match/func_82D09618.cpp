#include "havok/hkSphere.h"

extern "C" hkSphere fn_82D09330(const hkVector4 &a, const hkVector4 &b, hkReal eps);
extern "C" hkSphere fn_82D093B8(const hkVector4 &a, const hkVector4 &b, const hkVector4 &c, hkReal eps);
extern "C" hkSphere fn_82D094B8(const hkVector4 &a, const hkVector4 &b, const hkVector4 &c, const hkVector4 &d, hkReal eps);

extern "C" hkSphere fn_82D09618(hkVector4 *points, int numPoints, unsigned int numBoundary, hkReal eps)
{
    hkSphere sphere;
    switch (numBoundary) {
    case 0: {
        hkVector4 zero;
        zero.setZero4();
        sphere = hkSphere(zero, -1.0f);
        break;
    }
    case 1:
        sphere = hkSphere(points[-1], eps);
        break;
    case 2:
        sphere = fn_82D09330(points[-1], points[-2], eps);
        break;
    case 3:
        sphere = fn_82D093B8(points[-1], points[-2], points[-3], eps);
        break;
    default:
        sphere = fn_82D094B8(points[-1], points[-2], points[-3], points[-4], eps);
        return sphere;
    }

    for (int i = 0; i < numPoints; i++) {
        hkVector4 d;
        d.setSub4(points[i], sphere.getPosition());
        if (d.length3() > sphere.getRadius()) {
            for (int j = i; j > 0; j--) {
                hkVector4 t;
                t = points[j];
                points[j] = points[j - 1];
                points[j - 1] = t;
            }
            sphere = fn_82D09618(points + 1, i, numBoundary + 1, eps);
        }
    }
    return sphere;
}
