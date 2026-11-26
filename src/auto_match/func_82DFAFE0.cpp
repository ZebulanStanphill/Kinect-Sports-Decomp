// hkpVehicleDefaultAnalogDriverInput::calcDriverInput (vtable slot 3 of ??_7hkpVehicleDefaultAnalogDriverInput@@6B@):
// fills the filtered output from the class's own virtual calc functions and copies the handbrake button.
#include "havok/hkpVehicleDefaultAnalogDriverInput.h"

extern "C" void fn_82DFAFE0(hkpVehicleDefaultAnalogDriverInput *self, hkReal deltaTime,
                            const hkpVehicleInstance *vehicle, const hkpVehicleDriverInputStatus *deltaStatus,
                            hkpVehicleDriverInput::FilteredDriverInputOutput &out)
{
    const hkpVehicleDriverInputAnalogStatus *status = (const hkpVehicleDriverInputAnalogStatus *)deltaStatus;
    out.m_acceleratorPedalInput = self->calcAcceleratorInput(deltaTime, vehicle, deltaStatus, out);
    out.m_brakePedalInput = self->calcBrakeInput(deltaTime, vehicle, deltaStatus, out);
    out.m_steeringWheelInput = self->calcSteeringInput(deltaTime, vehicle, deltaStatus, out);
    out.m_handbrakeOn = status->m_handbrakeButtonPressed;
    out.m_tryingToReverse = self->calcReverseInput(deltaTime, vehicle, deltaStatus, out);
}
