// hkpDashpotAction (Physics/Utilities/Actions/Dashpot/hkpDashpotAction.h, the folder of its class unit),
// 0x60 bytes: a damped spring between a point on each of two bodies. The layout comes from the constructor
// (82DEFF58: 0.1f and 0.01f at +0x40 and +0x44, the two points cleared) and applyAction (82DF0090: the points
// at +0x20/+0x30, the impulse at +0x50). The member names follow Havok's header.
#ifndef HAVOK_HKPDASHPOTACTION_H
#define HAVOK_HKPDASHPOTACTION_H

#include "havok/hkVector4.h"
#include "havok/hkpAction.h"

class hkpPhantom;
class hkpRigidBody;
struct hkStepInfo;

// ??_7hkpDashpotAction@@6B@: applyAction 82DF0090, clone 82DEFFD0; slot 0 is hkpBinaryAction's deleting
// destructor (the destructor is the implicit one).
class hkpDashpotAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    // Out of line; in the game it is still fn_82DEFF58.
    hkpDashpotAction(hkpRigidBody *entityA = HK_NULL, hkpRigidBody *entityB = HK_NULL, hkUlong userData = 0);
    hkpDashpotAction(hkFinishLoadedObjectFlag f) : hkpBinaryAction(f) {}
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

    hkVector4 m_point[2];   // +0x20
    hkReal m_strength;      // +0x40
    hkReal m_damping;       // +0x44
    hkVector4 m_impulse;    // +0x50
};

#endif
