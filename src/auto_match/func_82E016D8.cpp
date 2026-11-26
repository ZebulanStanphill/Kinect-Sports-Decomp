// hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection(const hkpVehicleInstance *)
// (Physics/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.cpp): moves the phantom to the box of
// all the wheels (calcWheelsAABB, the virtual function at +0x34: 82E019A8 takes the min and max over the
// wheels). Havok code, /O2. This function fills slot +0x18 of ??_7hkpVehicleRayCastWheelCollide@@6B@, which
// the header declares as removeFromWorld.
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"

// The vtable's slots from +0x20 to +0x34 (82E01778, 82E01788, 82E01798, 82BA02A8, 82E01E28, 82E019A8); only
// the last is identified.
class hkpVehicleRayCastWheelCollideSlots : public hkpVehicleRayCastWheelCollide {
public:
    virtual void unknown20();
    virtual void unknown24();
    virtual void unknown28();
    virtual void unknown2C();
    virtual void unknown30();
    virtual void calcWheelsAABB(const hkpVehicleInstance *vehicle, hkAabb &aabbOut) const;   // +0x34
};

extern "C" void fn_82E016D8(hkpVehicleRayCastWheelCollide *self, const hkpVehicleInstance *vehicle)
{
    hkAabb aabb;
    static_cast<hkpVehicleRayCastWheelCollideSlots *>(self)->calcWheelsAABB(vehicle, aabb);
    self->m_phantom->setAabb(aabb);
}
