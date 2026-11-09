// hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper() (Havok's
// Physics/Vehicle/VelocityDamper/Default/hkpVehicleDefaultVelocityDamper.cpp).
// The original source used the literal 1.0f, whose load the compiler schedules
// between the base and vtable stores because it knows the constant cannot change.
#include "havok/hkBase.h"


class hkpVehicleVelocityDamper : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleVelocityDamper() {}
};

class hkpVehicleDefaultVelocityDamper : public hkpVehicleVelocityDamper {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultVelocityDamper();

    hkReal m_normalSpinDamping;     // +0x8
    hkReal m_collisionSpinDamping;  // +0xC
    hkReal m_collisionThreshold;    // +0x10
};

hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper()
{
    m_normalSpinDamping = 0.0f;
    m_collisionSpinDamping = 0.0f;
    m_collisionThreshold = 1.0f;
}
