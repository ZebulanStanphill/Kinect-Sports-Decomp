// hkpVehicleVelocityDamper (Physics/Vehicle/VelocityDamper/hkpVehicleVelocityDamper.h): the velocity damper
// component's interface. 0x8 bytes. No vtable of its own in the game (it is abstract; only its RTTI,
// ??_R3hkpVehicleVelocityDamper@@8); the destructor is the implicit one.
#ifndef HAVOK_HKPVEHICLEVELOCITYDAMPER_H
#define HAVOK_HKPVEHICLEVELOCITYDAMPER_H

#include "havok/hkBase.h"

class hkpVehicleInstance;

// One virtual function after hkReferencedObject's: applyVelocityDamping (+0xC;
// hkpVehicleDefaultVelocityDamper's is 82DFBF08). Its name and arguments follow Havok's header.
class hkpVehicleVelocityDamper : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleVelocityDamper() {}
    hkpVehicleVelocityDamper(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void applyVelocityDamping(hkReal deltaTime, hkpVehicleInstance &vehicle) = 0;   // +0xC
};

#endif
