#include "havok/hkVector4.h"

struct RigidBody_82DFD840 {
    char pad0[0x1b0];
    hkVector4 linearVelocity;   // 0x1b0
};

struct VehicleInstance_82DFD840 {
    char pad0[0x18];
    RigidBody_82DFD840 *chassis;   // 0x18
};

extern "C" float fn_82DFD840(const VehicleInstance_82DFD840 *self)
{
    return self->chassis->linearVelocity.length3() * 3.6f;
}
