// hkpVehicleDefaultAerodynamics (Physics/Vehicle/AeroDynamics/Default/hkpVehicleDefaultAerodynamics.h),
// 0x30 bytes. Its vtable (??_7hkpVehicleDefaultAerodynamics@@6B@, 6 slots): the folded trivial deleting
// destructor, hkReferencedObject's two, calcAerodynamics (82DFAE90), then two functions of the forward speed:
// +0x10 (82DFAE60) returns -0.5 * |v| * v * m_dragCoefficient * m_frontalArea * m_airDensity and +0x14
// (82DFADF0) 0.5 * v * v * m_liftCoefficient * m_frontalArea * m_airDensity. Those two names are descriptive
// (not checked against Havok's header). The default constructor is out of line
// (??0hkpVehicleDefaultAerodynamics@@QAA@XZ, 82DFAE20).
#ifndef HAVOK_HKPVEHICLEDEFAULTAERODYNAMICS_H
#define HAVOK_HKPVEHICLEDEFAULTAERODYNAMICS_H

#include "havok/hkpVehicleAerodynamics.h"
#include "havok/hkVector4.h"

class hkpVehicleDefaultAerodynamics : public hkpVehicleAerodynamics {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultAerodynamics();
    hkpVehicleDefaultAerodynamics(hkFinishLoadedObjectFlag flag) : hkpVehicleAerodynamics(flag) {}
    virtual void calcAerodynamics(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  AerodynamicsDragOutput &dragInfoOut);   // +0xC
    virtual hkReal calcAerodynamicDrag(hkReal forwardVelocity) const;    // +0x10
    virtual hkReal calcAerodynamicLift(hkReal forwardVelocity) const;    // +0x14

    hkReal m_airDensity;          // +0x8
    hkReal m_frontalArea;         // +0xC
    hkReal m_dragCoefficient;     // +0x10
    hkReal m_liftCoefficient;     // +0x14
    hkVector4 m_extraGravityws;   // +0x20
};

#endif
