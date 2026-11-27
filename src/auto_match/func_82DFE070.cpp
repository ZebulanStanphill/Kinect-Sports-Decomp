// hkpVehicleInstance::hkpVehicleInstance(hkpRigidBody *chassis) (Havok 2010,
// Physics/Vehicle/hkpVehicleInstance.cpp). Havok code, /O2 (flag file).
#include "havok/hkpVehicleInstance.h"

// The pointers are assigned in the body (stored after the members are built).
hkpVehicleInstance::hkpVehicleInstance(hkpRigidBody *chassis)
    : hkpUnaryAction(chassis)
{
    m_data = HK_NULL;
    m_driverInput = HK_NULL;
    m_steering = HK_NULL;
    m_engine = HK_NULL;
    m_transmission = HK_NULL;
    m_brake = HK_NULL;
    m_suspension = HK_NULL;
    m_aerodynamics = HK_NULL;
    m_wheelCollide = HK_NULL;
    m_tyreMarks = HK_NULL;
    m_velocityDamper = HK_NULL;
    m_deviceStatus = HK_NULL;
}
