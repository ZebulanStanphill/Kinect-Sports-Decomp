// hkpVehicleDefaultBrake (Physics/Vehicle/Brake/Default/hkpVehicleDefaultBrake.h), 0x18 bytes.
// Its vtable (??_7hkpVehicleDefaultBrake@@6B@, 4 slots): the deleting destructor (82DF9710, which calls the
// implicit destructor emitted out of line, 82DF96A0), hkReferencedObject's two, calcBreakingInfo (82DFB4A0).
// The default constructor is out of line (??0hkpVehicleDefaultBrake@@QAA@XZ, 82DFB640). 82DFB4A0 reads each
// wheel's properties at +0x0 and +0x4 and the flag at +0x8 (12-byte elements, as the destructor frees them).
#ifndef HAVOK_HKPVEHICLEDEFAULTBRAKE_H
#define HAVOK_HKPVEHICLEDEFAULTBRAKE_H

#include "havok/hkpVehicleBrake.h"

class hkpVehicleDefaultBrake : public hkpVehicleBrake {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // The names follow Havok's header (with its spelling "Breaking").
    struct WheelBrakingProperties {
        hkReal m_maxBreakingTorque;       // +0x0
        hkReal m_minPedalInputToBlock;    // +0x4
        hkBool m_isConnectedToHandbrake;  // +0x8
    };
    hkpVehicleDefaultBrake();
    hkpVehicleDefaultBrake(hkFinishLoadedObjectFlag flag) : hkpVehicleBrake(flag), m_wheelBrakingProperties(flag) {}
    virtual void calcBreakingInfo(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  const hkpVehicleDriverInput::FilteredDriverInputOutput &filteredInfoOutput,
                                  WheelBreakingOutput &breakingInfo);   // +0xC

    hkArray<WheelBrakingProperties> m_wheelBrakingProperties;   // +0x8
    hkReal m_wheelsMinTimeToBlock;                              // +0x14
};

#endif
