// hkpVehicleAerodynamics (Physics/Vehicle/AeroDynamics/hkpVehicleAerodynamics.h): the aerodynamics component's
// interface. 0x8 bytes. No vtable of its own in the game (it is abstract; only its RTTI,
// ??_R3hkpVehicleAerodynamics@@8); the destructor is the implicit one.
#ifndef HAVOK_HKPVEHICLEAERODYNAMICS_H
#define HAVOK_HKPVEHICLEAERODYNAMICS_H

#include "havok/hkBase.h"

class hkpVehicleInstance;

// One virtual function after hkReferencedObject's: calcAerodynamics (+0xC; hkpVehicleDefaultAerodynamics's is
// 82DFAE90). Its name follows Havok's header.
class hkpVehicleAerodynamics : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // What calcAerodynamics fills; not declared further here.
    struct AerodynamicsDragOutput;
    hkpVehicleAerodynamics() {}
    hkpVehicleAerodynamics(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void calcAerodynamics(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  AerodynamicsDragOutput &dragInfoOut) = 0;   // +0xC
};

#endif
