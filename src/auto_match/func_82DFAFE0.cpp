// hkpVehicleDefaultAnalogDriverInput::calcDriverInput (Havok 2010, Physics/Vehicle/DriverInput/Default/
// hkpVehicleDefaultAnalogDriverInput.cpp; slot +0xC of ??_7hkpVehicleDefaultAnalogDriverInput@@6B@): fills the
// filtered output from the class's own virtual calc functions and copies the handbrake button.
#include "havok/hkpVehicleDefaultAnalogDriverInput.h"

void hkpVehicleDefaultAnalogDriverInput::calcDriverInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                                         const hkpVehicleDriverInputStatus *deltaStatus,
                                                         FilteredDriverInputOutput &filteredInputOut)
{
    const hkpVehicleDriverInputAnalogStatus *status = (const hkpVehicleDriverInputAnalogStatus *)deltaStatus;
    filteredInputOut.m_acceleratorPedalInput = calcAcceleratorInput(deltaTime, vehicle, deltaStatus, filteredInputOut);
    filteredInputOut.m_brakePedalInput = calcBrakeInput(deltaTime, vehicle, deltaStatus, filteredInputOut);
    filteredInputOut.m_steeringWheelInput = calcSteeringInput(deltaTime, vehicle, deltaStatus, filteredInputOut);
    filteredInputOut.m_handbrakeOn = status->m_handbrakeButtonPressed;
    filteredInputOut.m_tryingToReverse = calcReverseInput(deltaTime, vehicle, deltaStatus, filteredInputOut);
}
