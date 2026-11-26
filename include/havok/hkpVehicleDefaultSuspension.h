// hkpVehicleDefaultSuspension (Physics/Vehicle/Suspension/Default/hkpVehicleDefaultSuspension.h), 0x20 bytes.
// Its vtable (??_7hkpVehicleDefaultSuspension@@6B@, 4 slots): the deleting destructor (82DF99C8: the implicit
// destructor inlined, m_wheelSpringParams (0xC-byte elements), then a call to hkpVehicleSuspension's),
// hkReferencedObject's two, calcSuspension (82DFB9C8).
#ifndef HAVOK_HKPVEHICLEDEFAULTSUSPENSION_H
#define HAVOK_HKPVEHICLEDEFAULTSUSPENSION_H

#include "havok/hkpVehicleSuspension.h"

class hkpVehicleDefaultSuspension : public hkpVehicleSuspension {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // 0xC bytes. The names follow Havok's header.
    struct WheelSpringSuspensionParameters {
        hkReal m_strength;             // +0x0
        hkReal m_dampingCompression;   // +0x4
        hkReal m_dampingRelaxation;    // +0x8
    };
    hkpVehicleDefaultSuspension();
    hkpVehicleDefaultSuspension(hkFinishLoadedObjectFlag flag)
        : hkpVehicleSuspension(flag), m_wheelSpringParams(flag) {}
    virtual void calcSuspension(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                hkReal *suspensionForceOut);   // +0xC

    hkArray<WheelSpringSuspensionParameters> m_wheelSpringParams;   // +0x14
};

#endif
