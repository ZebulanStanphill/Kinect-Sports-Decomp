// hkpVehicleDefaultAnalogDriverInput::calcDriverInput (vtable slot 3 of ??_7hkpVehicleDefaultAnalogDriverInput@@6B@):
// fills the filtered output from the class's own virtual calc functions and copies the handbrake button.
#include "havok/hkBase.h"

class hkpVehicleInstance;

class hkpVehicleDriverInputStatus : public hkReferencedObject {
};

class hkpVehicleDriverInputAnalogStatus : public hkpVehicleDriverInputStatus {
public:
    hkReal m_positionX;                // +0x8
    hkReal m_positionY;                // +0xC
    hkBool m_handbrakeButtonPressed;   // +0x10
    hkBool m_reverseButtonPressed;     // +0x11
};

struct FilteredDriverInputOutput_82DFAFE0 {
    hkReal m_steeringWheelInput;       // +0x0
    hkReal m_acceleratorPedalInput;    // +0x4
    hkReal m_brakePedalInput;          // +0x8
    hkBool m_handbrakeOn;              // +0xC
    hkBool m_tryingToReverse;          // +0xD
};

// Vtable: hkReferencedObject's three slots, calcDriverInput (+0xC), then the calc functions (+0x10..+0x1C).
class hkpVehicleDefaultAnalogDriverInput : public hkReferencedObject {
public:
    virtual void calcDriverInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                 const hkpVehicleDriverInputStatus *deltaStatus,
                                 FilteredDriverInputOutput_82DFAFE0 &out);                                 // +0x0C
    virtual hkReal calcSteeringInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                     const hkpVehicleDriverInputStatus *deltaStatus,
                                     FilteredDriverInputOutput_82DFAFE0 &out);                             // +0x10
    virtual hkReal calcAcceleratorInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                        const hkpVehicleDriverInputStatus *deltaStatus,
                                        FilteredDriverInputOutput_82DFAFE0 &out);                          // +0x14
    virtual hkBool calcReverseInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                    const hkpVehicleDriverInputStatus *deltaStatus,
                                    FilteredDriverInputOutput_82DFAFE0 &out);                              // +0x18
    virtual hkReal calcBrakeInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  const hkpVehicleDriverInputStatus *deltaStatus,
                                  FilteredDriverInputOutput_82DFAFE0 &out);                                // +0x1C

    hkReal m_slopeChangePointX;   // +0x8
    hkReal m_initialSlope;        // +0xC
    hkReal m_deadZone;            // +0x10
    hkBool m_autoReverse;         // +0x14
};

extern "C" void fn_82DFAFE0(hkpVehicleDefaultAnalogDriverInput *self, hkReal deltaTime,
                            const hkpVehicleInstance *vehicle, const hkpVehicleDriverInputStatus *deltaStatus,
                            FilteredDriverInputOutput_82DFAFE0 &out)
{
    const hkpVehicleDriverInputAnalogStatus *status = (const hkpVehicleDriverInputAnalogStatus *)deltaStatus;
    out.m_steeringWheelInput = self->calcSteeringInput(deltaTime, vehicle, deltaStatus, out);
    out.m_acceleratorPedalInput = self->calcAcceleratorInput(deltaTime, vehicle, deltaStatus, out);
    out.m_brakePedalInput = self->calcBrakeInput(deltaTime, vehicle, deltaStatus, out);
    out.m_handbrakeOn = status->m_handbrakeButtonPressed;
    out.m_tryingToReverse = self->calcReverseInput(deltaTime, vehicle, deltaStatus, out);
}
