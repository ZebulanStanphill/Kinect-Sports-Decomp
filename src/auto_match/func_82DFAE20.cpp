// hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics() (Physics/Vehicle/AeroDynamics/Default/hkpVehicleDefaultAerodynamics.cpp).
#include "havok/hkpVehicleDefaultAerodynamics.h"

hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics()
{
    m_airDensity = 0.0f;
    m_frontalArea = 0.0f;
    m_dragCoefficient = 0.0f;
    m_liftCoefficient = 0.0f;
    m_extraGravityws.setZero4();
}
