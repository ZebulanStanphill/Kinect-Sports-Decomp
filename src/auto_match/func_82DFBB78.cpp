// hkpVehicleDefaultTransmission::calcTransmission (Havok 2010, Physics/Vehicle/Transmission/Default/
// hkpVehicleDefaultTransmission.cpp; slot +0xC of its vtable): the reverse flag, the main torque and the RPM from
// the class's own virtual functions, the torque split over the wheels, then the gear update.
#include "havok/hkpVehicleDefaultTransmission.h"

void hkpVehicleDefaultTransmission::calcTransmission(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                                     TransmissionOutput &transmissionOut)
{
    transmissionOut.m_isReversing = calcIsReversing(vehicle, transmissionOut);
    transmissionOut.m_mainTransmittedTorque = calcMainTransmittedTorque(vehicle, transmissionOut);
    transmissionOut.m_transmissionRPM = calcTransmissionRPM(vehicle, transmissionOut);
    for (int i = 0; i < m_wheelsTorqueRatio.getSize(); ++i)
        transmissionOut.m_wheelsTransmittedTorque[i] = m_wheelsTorqueRatio[i] * transmissionOut.m_mainTransmittedTorque;
    updateCurrentGear(deltaTime, vehicle, transmissionOut);
}
