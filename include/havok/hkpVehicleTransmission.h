// hkpVehicleTransmission (Physics/Vehicle/Transmission/hkpVehicleTransmission.h): the transmission component's
// interface. 0x8 bytes. No vtable of its own in the game (it is abstract; only its RTTI,
// ??_R3hkpVehicleTransmission@@8); the destructor is the implicit one.
#ifndef HAVOK_HKPVEHICLETRANSMISSION_H
#define HAVOK_HKPVEHICLETRANSMISSION_H

#include "havok/hkBase.h"

class hkpVehicleInstance;

// One virtual function after hkReferencedObject's: calcTransmission (+0xC; hkpVehicleDefaultTransmission's is
// 82DFBB78).
class hkpVehicleTransmission : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // 0x14 bytes: what calcTransmission fills. The offsets are the ones hkpVehicleDefaultTransmission's functions
    // use: 82DFBB78 stores the results of its slots +0x18, +0x10 and +0x14 at +0xD, +0x4 and +0x0 and the
    // wheels' torques through +0x8; 82DFBDC8 (the gear change) compares +0x0 with the shift RPMs, steps the gear
    // at +0xE, sets +0xF and loads +0x10 with m_clutchDelayTime; 82DFBB38 reads +0xD and +0xE. The names follow
    // Havok's header; the byte at +0xC is not used by any of them.
    struct TransmissionOutput {
        hkReal m_transmissionRPM;             // +0x0
        hkReal m_mainTransmittedTorque;       // +0x4
        hkReal *m_wheelsTransmittedTorque;    // +0x8
        hkUint8 m_unknown0C;                  // +0xC (not identified)
        hkBool m_isReversing;                 // +0xD
        hkInt8 m_currentGear;                 // +0xE
        hkBool m_delayed;                     // +0xF
        hkReal m_clutchDelayCountdown;        // +0x10
    };
    hkpVehicleTransmission() {}
    hkpVehicleTransmission(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void calcTransmission(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  TransmissionOutput &transmissionOut) = 0;   // +0xC
};

#endif
