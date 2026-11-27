#include "xdk/vectorintrinsics.h"

typedef struct Transform_82563B68 {
    __vector4 rotation[3];
    __vector4 translation;
} Transform_82563B68;

class Shape_82563B68
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Slot0C();
    virtual void Slot10();
    virtual void Slot14();
    virtual void Slot18();
    virtual void GetBounds(const Transform_82563B68 *, float, __vector4 *);
};

typedef struct Body_82563B68 {
    char pad0[8];
    void *motion;
    char padC[4];
    Shape_82563B68 *shape;
    char pad14[0xe0 - 0x14];
    char motionState[0xa0]; /* 0xe0 */
} Body_82563B68;

extern "C" float fn_82D80A40(const void *);
extern "C" void fn_82D93168(const void *, float, Transform_82563B68 *);

extern "C" void fn_82563B68(Body_82563B68 *body, __vector4 *minimum, __vector4 *maximum)
{
    __vector4 bounds[2];
    Transform_82563B68 sampled;
    Transform_82563B68 transform;
    float time = fn_82D80A40(body->motion);
    __vector4 lo;
    __vector4 hi;
    __vector4 zeroLo;
    __vector4 zeroHi;
    __vector4 maskLo;
    __vector4 maskHi;

    fn_82D93168(body->motionState, time, &sampled);
    transform.rotation[0] = sampled.rotation[0];
    transform.rotation[1] = sampled.rotation[1];
    transform.rotation[2] = sampled.rotation[2];
    transform.translation = sampled.translation;
    body->shape->GetBounds(&transform, 0.0f, bounds);
    zeroLo = __VMXGetReg(77);
    maskLo = __VMXGetReg(67);
    lo = bounds[0];
    maskHi = __VMXGetReg(67);
    zeroHi = __VMXGetReg(77);
    hi = bounds[1];
    *minimum = __vsel(lo, zeroLo, maskLo);
    *maximum = __vsel(hi, zeroHi, maskHi);
}
