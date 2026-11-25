// hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics() (Physics/Vehicle/AeroDynamics/Default/hkpVehicleDefaultAerodynamics.cpp).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpVehicleAerodynamics : public hkReferencedObject {
public:
    hkpVehicleAerodynamics() {}
};

class hkpVehicleDefaultAerodynamics : public hkpVehicleAerodynamics {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultAerodynamics();

    hkReal m_airDensity;          // +0x8
    hkReal m_frontalArea;         // +0xC
    hkReal m_dragCoefficient;     // +0x10
    hkReal m_liftCoefficient;     // +0x14
    hkVector4 m_extraGravityws;   // +0x20
};

hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics()
{
    m_airDensity = 0.0f;
    m_frontalArea = 0.0f;
    m_dragCoefficient = 0.0f;
    m_liftCoefficient = 0.0f;
    m_extraGravityws.setZero4();
}
