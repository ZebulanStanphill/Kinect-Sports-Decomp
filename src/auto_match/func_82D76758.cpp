#include "havok/hkVector4.h"

extern "C" void fn_82D76758(const hkVector4 *vertices, float *out)
{
    hkVector4 e0, e1, n;

    e0.setSub4(vertices[0], vertices[1]);
    e1.setSub4(vertices[2], vertices[1]);
    float d00 = e0.lengthSquared3();
    float d11 = e1.lengthSquared3();
    float d01 = e1.dot3(e0);
    n.setCross(e0, e1);
    float inv = 1.0f / (d11 * d00 - d01 * d01);
    out[0] = d00 * inv;
    out[1] = d11 * inv;
    out[2] = d01 * inv;
    out[3] = 1.0f / n.length3();
}
