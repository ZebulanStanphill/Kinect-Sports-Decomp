// hkpVehicleDriverInputStatus and hkpVehicleDriverInput (Physics/Vehicle/DriverInput/hkpVehicleDriverInput.h):
// the driver input component's interface and the device status it filters. Havok declares the two together.
//
// Neither class has a vtable of its own in the game (both are abstract; only their RTTI is there,
// ??_R3hkpVehicleDriverInputStatus@@8 and ??_R3hkpVehicleDriverInput@@8). Their destructors are the implicit
// ones: the subclasses' vtables start with the folded trivial deleting destructor (??_GhkpShape@@UAAPAXI@Z).
#ifndef HAVOK_HKPVEHICLEDRIVERINPUT_H
#define HAVOK_HKPVEHICLEDRIVERINPUT_H

#include "havok/hkBase.h"

class hkpVehicleInstance;

// 0x8 bytes. One virtual function after hkReferencedObject's: clone (+0xC), which
// hkpVehicleDriverInputAnalogStatus implements (82DFB410,
// ?clone@hkpVehicleDriverInputAnalogStatus@@UBAPAVhkpVehicleDriverInputStatus@@XZ).
class hkpVehicleDriverInputStatus : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDriverInputStatus() {}
    hkpVehicleDriverInputStatus(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual hkpVehicleDriverInputStatus *clone() const = 0;   // +0xC
};

// 0x8 bytes. One virtual function after hkReferencedObject's: calcDriverInput (+0xC).
class hkpVehicleDriverInput : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // 0x10 bytes: what calcDriverInput fills. hkpVehicleDefaultAnalogDriverInput::calcDriverInput (82DFAFE0)
    // stores the results of its vtable slots +0x10, +0x14 and +0x1C at +0x0, +0x4 and +0x8, the status's
    // handbrake button at +0xC and the result of slot +0x18 at +0xD. The slot at +0x1C (82DFB1A0) shapes the
    // stick's x position with the dead zone and slope (the steering wheel); the names of the first two follow
    // Havok's header.
    struct FilteredDriverInputOutput {
        hkReal m_acceleratorPedalInput;   // +0x0
        hkReal m_brakePedalInput;         // +0x4
        hkReal m_steeringWheelInput;      // +0x8
        hkBool m_handbrakeOn;             // +0xC
        hkBool m_tryingToReverse;         // +0xD
    };
    hkpVehicleDriverInput() {}
    hkpVehicleDriverInput(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void calcDriverInput(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                 const hkpVehicleDriverInputStatus *deltaStatus,
                                 FilteredDriverInputOutput &filteredInputOut) = 0;   // +0xC
};

#endif
