#include "xdk/vectorintrinsics.h"

struct XMMATRIX {
    __vector4 r[4];

    XMMATRIX()
    {
    }

    XMMATRIX &operator=(const XMMATRIX &m)
    {
        r[0] = m.r[0];
        r[1] = m.r[1];
        r[2] = m.r[2];
        r[3] = m.r[3];
        return *this;
    }
};

extern "C" XMMATRIX fn_82F59850(float x, float y, float z);
extern "C" __vector4 fn_82F597F0(__vector4 v, XMMATRIX m);

extern "C" __vector4 fn_82F53780(const float *angles, __vector4 v)
{
    XMMATRIX rotation;
    rotation = fn_82F59850(angles[0], angles[1], angles[2]);
    return fn_82F597F0(v, rotation);
}
