#include "xdk/vectorintrinsics.h"

class Obj_82DA56E0 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void Apply(const __vector4 *v, int arg);   /* 0x50 */
};

extern "C" void fn_82DA56E0(Obj_82DA56E0 *self, float scale, const __vector4 *v, int arg)
{
    __vector4 scaled;
    scaled = __vmulfp(*v, __vspltw(__lvlx(&scale, 0), 0));
    self->Apply(&scaled, arg);
}
