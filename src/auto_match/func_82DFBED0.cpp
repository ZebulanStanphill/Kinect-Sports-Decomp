// hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper() (Havok's
// Physics/Vehicle/VelocityDamper/Default/hkpVehicleDefaultVelocityDamper.cpp).
// The original source used the literal 1.0f, whose load the compiler schedules
// between the base and vtable stores because it knows the constant cannot change.
#include "havok/hkpVehicleDefaultVelocityDamper.h"

hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper()
{
    m_normalSpinDamping = 0.0f;
    m_collisionSpinDamping = 0.0f;
    m_collisionThreshold = 1.0f;
}
