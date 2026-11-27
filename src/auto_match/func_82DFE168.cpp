// hkpVehicleInstance::~hkpVehicleInstance() (Havok 2010, Physics/Vehicle/hkpVehicleInstance.cpp): releases
// the components, then the arrays and hkpUnaryAction are destroyed.
#include "havok/hkpVehicleInstance.h"
#include "havok/hkpVehicleData.h"
#include "havok/hkpVehicleDriverInput.h"
#include "havok/hkpVehicleSteering.h"
#include "havok/hkpVehicleEngine.h"
#include "havok/hkpVehicleTransmission.h"
#include "havok/hkpVehicleBrake.h"
#include "havok/hkpVehicleSuspension.h"
#include "havok/hkpVehicleAerodynamics.h"
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpTyremarksInfo.h"
#include "havok/hkpVehicleVelocityDamper.h"

hkpVehicleInstance::~hkpVehicleInstance()
{
    if (m_data) m_data->removeReference();
    if (m_driverInput) m_driverInput->removeReference();
    if (m_steering) m_steering->removeReference();
    if (m_engine) m_engine->removeReference();
    if (m_transmission) m_transmission->removeReference();
    if (m_brake) m_brake->removeReference();
    if (m_suspension) m_suspension->removeReference();
    if (m_aerodynamics) m_aerodynamics->removeReference();
    if (m_wheelCollide) m_wheelCollide->removeReference();
    if (m_velocityDamper) m_velocityDamper->removeReference();
    if (m_deviceStatus) m_deviceStatus->removeReference();
    if (m_tyreMarks) m_tyreMarks->removeReference();
}
