// hkpVehicleCastBatchingManager (Physics/Vehicle/Manager/hkpVehicleCastBatchingManager.h): the base of the
// managers that batch the wheels' casts into jobs. No vtable of its own in the game (it is abstract; only its
// RTTI, ??_R3hkpVehicleCastBatchingManager@@8).
//
// Both subclasses' vtables (11 slots) share its overrides of addVehicle (82DFF350) and removeVehicle
// (82DFF3A0), keep hkpVehicleManager's stepVehicles (82DFF200), and continue with five slots of its own: +0x18
// (82DFF450, timed), +0x1C (82DFF3F0, calls 82DFC8F8 on every registered vehicle), then three each subclass
// implements (+0x20: 82DFF698 / 82E01000, the buffer size for a number of jobs; +0x24; +0x28). Those five are
// not identified and not declared.
#ifndef HAVOK_HKPVEHICLECASTBATCHINGMANAGER_H
#define HAVOK_HKPVEHICLECASTBATCHINGMANAGER_H

#include "havok/hkpVehicleManager.h"

class hkpVehicleCastBatchingManager : public hkpVehicleManager {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleCastBatchingManager(hkFinishLoadedObjectFlag flag) : hkpVehicleManager(flag) {}
    virtual void addVehicle(hkpVehicleInstance *vehicle);      // +0xC
    virtual void removeVehicle(hkpVehicleInstance *vehicle);   // +0x10

    // The number of wheels of the registered vehicles: both buffer-size functions (82DFF698, 82E01000) read
    // the halfword at +0x14. The name follows Havok's header.
    hkUint16 m_totalNumWheels;   // +0x14
};

#endif
