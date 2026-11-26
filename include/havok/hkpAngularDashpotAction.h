// hkpAngularDashpotAction (Physics/Utilities/Actions/AngularDashpot/hkpAngularDashpotAction.h, the folder of
// its class unit), 0x40 bytes: a damped angular spring between two bodies. The layout comes from the
// constructor (??0hkpAngularDashpotAction@@QAA@PAVhkpEntity@@0K@Z, 82DEEE50) and clone (82DEEEB8). The member
// names follow Havok's header.
#ifndef HAVOK_HKPANGULARDASHPOTACTION_H
#define HAVOK_HKPANGULARDASHPOTACTION_H

#include "havok/hkQuaternion.h"
#include "havok/hkpAction.h"

class hkpPhantom;
struct hkStepInfo;

// ??_7hkpAngularDashpotAction@@6B@: applyAction 82DEEF60, clone 82DEEEB8; slot 0 is hkpBinaryAction's
// deleting destructor (the destructor is the implicit one).
class hkpAngularDashpotAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpAngularDashpotAction(hkpEntity *entityA = HK_NULL, hkpEntity *entityB = HK_NULL, hkUlong userData = 0);
    hkpAngularDashpotAction(hkFinishLoadedObjectFlag f) : hkpBinaryAction(f) {}
    // The action interface, in the order of ??_7hkpAction@@6B@ (applyAction, getEntities, getPhantoms,
    // entityRemovedCallback, clone after hkReferencedObject's three slots). hkpAction.h does not declare these
    // yet, so they are declared here; in the game getEntities, getPhantoms and entityRemovedCallback are
    // hkpBinaryAction's unless noted. The names follow Havok's header.
    virtual void applyAction(const hkStepInfo &stepInfo);                                          // +0xC
    virtual void getEntities(hkArray<hkpEntity *> &entitiesOut);                                   // +0x10
    virtual void getPhantoms(hkArray<hkpPhantom *> &phantomsOut);                                  // +0x14
    virtual void entityRemovedCallback(hkpEntity *entity);                                         // +0x18
    virtual hkpAction *clone(const hkArray<hkpEntity *> &newEntities,
                             const hkArray<hkpPhantom *> &newPhantoms) const;                      // +0x1C

    hkQuaternion m_rotation;   // +0x20
    hkReal m_strength;         // +0x30
    hkReal m_damping;          // +0x34
};

#endif
