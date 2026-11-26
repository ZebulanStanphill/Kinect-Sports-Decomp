// hkpVehicleDriverInputAnalogStatus and hkpVehicleDefaultAnalogDriverInput
// (Physics/Vehicle/DriverInput/Default/hkpVehicleDefaultAnalogDriverInput.h): the analog stick's status and the
// driver input that filters it. Havok declares the two together.
#ifndef HAVOK_HKPVEHICLEDEFAULTANALOGDRIVERINPUT_H
#define HAVOK_HKPVEHICLEDEFAULTANALOGDRIVERINPUT_H

#include "havok/hkpVehicleDriverInput.h"

// 0x14 bytes. Its vtable (??_7hkpVehicleDriverInputAnalogStatus@@6B@, 4 slots): the folded trivial deleting
// destructor, hkReferencedObject's two, clone (82DFB410). The offsets are the ones calcDriverInput (82DFAFE0)
// and the calc functions (82DFB0E8, 82DFB158, 82DFB1A0) read.
class hkpVehicleDriverInputAnalogStatus : public hkpVehicleDriverInputStatus {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDriverInputAnalogStatus() {}
    hkpVehicleDriverInputAnalogStatus(hkFinishLoadedObjectFlag flag) : hkpVehicleDriverInputStatus(flag) {}
    virtual hkpVehicleDriverInputStatus *clone() const;

    hkReal m_positionX;                // +0x8
    hkReal m_positionY;                // +0xC
    hkBool m_handbrakeButtonPressed;   // +0x10
    hkBool m_reverseButtonPressed;     // +0x11
};

// 0x18 bytes. Its vtable (??_7hkpVehicleDefaultAnalogDriverInput@@6B@, 8 slots): the folded trivial deleting
// destructor, hkReferencedObject's two, calcDriverInput (82DFAFE0), then four functions it calls, each taking
// calcDriverInput's arguments: +0x10 (82DFB0E8) fills m_acceleratorPedalInput, +0x14 (82DFB158)
// m_brakePedalInput, +0x18 (82DFB238, returning an hkBool) m_tryingToReverse and +0x1C (82DFB1A0)
// m_steeringWheelInput (see hkpVehicleDriverInput::FilteredDriverInputOutput). Their names follow Havok's
// header. The default constructor is out of line (??0hkpVehicleDefaultAnalogDriverInput@@QAA@XZ, 82DFB0B0).
class hkpVehicleDefaultAnalogDriverInput : public hkpVehicleDriverInput {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultAnalogDriverInput();
    hkpVehicleDefaultAnalogDriverInput(hkFinishLoadedObjectFlag flag) : hkpVehicleDriverInput(flag) {}
    virtual void calcDriverInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                 const hkpVehicleDriverInputStatus *deltaStatus,
                                 FilteredDriverInputOutput &filteredInputOut);                   // +0xC
    virtual hkReal calcAcceleratorInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                        const hkpVehicleDriverInputStatus *deltaStatus,
                                        FilteredDriverInputOutput &filteredInputOut);            // +0x10
    virtual hkReal calcBrakeInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  const hkpVehicleDriverInputStatus *deltaStatus,
                                  FilteredDriverInputOutput &filteredInputOut);                  // +0x14
    virtual hkBool calcReverseInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                    const hkpVehicleDriverInputStatus *deltaStatus,
                                    FilteredDriverInputOutput &filteredInputOut);                // +0x18
    virtual hkReal calcSteeringInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                     const hkpVehicleDriverInputStatus *deltaStatus,
                                     FilteredDriverInputOutput &filteredInputOut);               // +0x1C

    hkReal m_slopeChangePointX;   // +0x8
    hkReal m_initialSlope;        // +0xC
    hkReal m_deadZone;            // +0x10
    hkBool m_autoReverse;         // +0x14
};

#endif
