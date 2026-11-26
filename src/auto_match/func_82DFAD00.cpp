// hkpVehicleData::hkpVehicleData() (Physics/Vehicle/hkpVehicleData.cpp), /O2 /QVMXReserve: a leaf, so the
// zero vector used by hkMatrix3::setZero lives in the red zone. 0.1f and 30.0f are literals; the rename map
// names the game's copies __real@3dcccccd and __real@41f00000.
#include "havok/hkpVehicleData.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

hkpVehicleData::hkpVehicleData()
{
    m_numWheels = 0;
    m_chassisOrientation.setZero();
    m_torqueRollFactor = 0.0f;
    m_torquePitchFactor = 0.0f;
    m_torqueYawFactor = 1.0f;
    m_extraTorqueFactor = 0.0f;
    m_maxVelocityForPositionalFriction = 10.0f;
    m_chassisUnitInertiaYaw = 1.0f;
    m_chassisUnitInertiaRoll = 1.0f;
    m_chassisUnitInertiaPitch = 1.0f;
    m_frictionEqualizer = 0.0f;
    m_normalClippingAngleCos = 0.1f;
    m_chassisFrictionInertiaInvDiag.setZero4();
    m_gravity.setZero4();
    m_alreadyInitialised = false;
    m_maxFrictionSolverMassRatio = 30.0f;
}
