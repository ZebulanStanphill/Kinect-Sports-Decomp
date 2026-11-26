// hkpVehicleDefaultTransmission::calcTransmission (vtable slot +0xC): the reverse flag, the main torque and the
// RPM from the class's own virtual functions, the torque split over the wheels, then the gear update. It keeps
// its fn_ name.
#include "havok/hkpVehicleDefaultTransmission.h"

extern "C" void fn_82DFBB78(hkpVehicleDefaultTransmission *self, float deltaTime, const hkpVehicleInstance *vehicle,
                            hkpVehicleTransmission::TransmissionOutput *output)
{
    int i;
    output->m_isReversing = self->calcIsReversing(vehicle, *output);
    output->m_mainTransmittedTorque = self->calcMainTransmittedTorque(vehicle, *output);
    output->m_transmissionRPM = self->calcTransmissionRPM(vehicle, *output);
    for (i = 0; i < self->m_wheelsTorqueRatio.m_size; ++i) {
        output->m_wheelsTransmittedTorque[i] = self->m_wheelsTorqueRatio.m_data[i] * output->m_mainTransmittedTorque;
    }
    self->updateCurrentGear(deltaTime, vehicle, *output);
}
