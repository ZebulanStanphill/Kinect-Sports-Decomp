// hkpVehicleManager (Physics/Vehicle/Manager/hkpVehicleManager.h), 0x14 bytes: steps a set of vehicles.
// Its vtable (??_7hkpVehicleManager@@6B@, 6 slots): the deleting destructor (82DF9DB0, folded with the batching
// managers' ones), hkReferencedObject's two, then addVehicle (82DFF0D0: adds a reference and appends the
// vehicle), removeVehicle (82DFF060) and stepVehicles (82DFF200). The names after the first follow Havok's
// header. The destructor is out of line (??1hkpVehicleManager@@UAA@XZ, 82DFF158).
#ifndef HAVOK_HKPVEHICLEMANAGER_H
#define HAVOK_HKPVEHICLEMANAGER_H

#include "havok/hkBase.h"

class hkpVehicleInstance;
struct hkStepInfo;   // a struct in the game's mangled names (...ABUhkStepInfo@@..., 82DF2A08)

class hkpVehicleManager : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleManager() {}
    hkpVehicleManager(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_registeredVehicles(flag) {}
    virtual ~hkpVehicleManager();
    virtual void addVehicle(hkpVehicleInstance *vehicle);            // +0xC
    virtual void removeVehicle(hkpVehicleInstance *vehicle);         // +0x10
    virtual void stepVehicles(const hkStepInfo &updatedStepInfo);    // +0x14

    hkArray<hkpVehicleInstance *> m_registeredVehicles;   // +0x8
};

#endif
