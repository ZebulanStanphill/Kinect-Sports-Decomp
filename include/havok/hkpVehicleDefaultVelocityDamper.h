// hkpVehicleDefaultVelocityDamper (Physics/Vehicle/VelocityDamper/Default/hkpVehicleDefaultVelocityDamper.h),
// 0x14 bytes. Its vtable (??_7hkpVehicleDefaultVelocityDamper@@6B@, 4 slots): the folded trivial deleting
// destructor, hkReferencedObject's two, applyVelocityDamping (82DFBF08). The default constructor is out of line
// (??0hkpVehicleDefaultVelocityDamper@@QAA@XZ, 82DFBED0). The member names follow Havok's header.
#ifndef HAVOK_HKPVEHICLEDEFAULTVELOCITYDAMPER_H
#define HAVOK_HKPVEHICLEDEFAULTVELOCITYDAMPER_H

#include "havok/hkpVehicleVelocityDamper.h"

class hkpVehicleDefaultVelocityDamper : public hkpVehicleVelocityDamper {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultVelocityDamper();
    hkpVehicleDefaultVelocityDamper(hkFinishLoadedObjectFlag flag) : hkpVehicleVelocityDamper(flag) {}
    virtual void applyVelocityDamping(hkReal deltaTime, hkpVehicleInstance &vehicle);   // +0xC

    hkReal m_normalSpinDamping;      // +0x8
    hkReal m_collisionSpinDamping;   // +0xC
    hkReal m_collisionThreshold;     // +0x10
};

#endif
