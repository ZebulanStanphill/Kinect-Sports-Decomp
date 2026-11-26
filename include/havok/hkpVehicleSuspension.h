// hkpVehicleSuspension (Physics/Vehicle/Suspension/hkpVehicleSuspension.h): the suspension component's
// interface, 0x14 bytes. No vtable of its own in the game (it is abstract; only its RTTI,
// ??_R3hkpVehicleSuspension@@8). Its destructor is the implicit one, emitted out of line
// (??1hkpVehicleSuspension@@UAA@XZ, 82DF9958) and called by hkpVehicleDefaultSuspension's deleting destructor
// (82DF99C8); it destroys m_wheelParams (0x30-byte elements).
#ifndef HAVOK_HKPVEHICLESUSPENSION_H
#define HAVOK_HKPVEHICLESUSPENSION_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpVehicleInstance;

// One virtual function after hkReferencedObject's: calcSuspension (+0xC; hkpVehicleDefaultSuspension's is
// 82DFB9C8). Its name and arguments follow Havok's header.
class hkpVehicleSuspension : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // 0x30 bytes. The names follow Havok's header.
    struct SuspensionWheelParameters {
        hkVector4 m_hardpointChassisSpace;   // +0x0
        hkVector4 m_directionChassisSpace;   // +0x10
        hkReal m_length;                     // +0x20
    };
    hkpVehicleSuspension() {}
    hkpVehicleSuspension(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_wheelParams(flag) {}
    virtual void calcSuspension(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                hkReal *suspensionForceOut) = 0;   // +0xC

    hkArray<SuspensionWheelParameters> m_wheelParams;   // +0x8
};

#endif
