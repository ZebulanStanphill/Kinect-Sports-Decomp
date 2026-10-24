// hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper() (Havok's
// Physics/Vehicle/VelocityDamper/Default/hkpVehicleDefaultVelocityDamper.cpp).
// The original source used the literal 1.0f, whose load the compiler schedules
// between the base and vtable stores because it knows the constant cannot change;
// the game's copy of that constant is lbl_82002AE0 (the linker merged
// __real@3f800000 into it). A plain extern lbl_82002AE0 keeps the load after the
// stores, so it is declared here as a known constant (as in func_83096D00.cpp).
#include "havok/hkBase.h"

extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;

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
    m_collisionThreshold = lbl_82002AE0;
}
