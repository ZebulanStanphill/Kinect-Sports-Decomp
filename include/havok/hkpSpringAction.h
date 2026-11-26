// hkpSpringAction (Physics/Utilities/Actions/Spring/hkpSpringAction.h, the folder of its class unit), 0x60
// bytes: a spring between a point on each of two bodies. The layout comes from the constructor
// (??0hkpSpringAction@@QAA@PAVhkpEntity@@0K@Z, 82DF5250) and clone (82DF5430). The member names follow
// Havok's header.
#ifndef HAVOK_HKPSPRINGACTION_H
#define HAVOK_HKPSPRINGACTION_H

#include "havok/hkVector4.h"
#include "havok/hkpAction.h"

class hkpPhantom;
struct hkStepInfo;

// ??_7hkpSpringAction@@6B@: applyAction 82DF5500, clone 82DF5430; slot 0 is hkpBinaryAction's deleting
// destructor (the destructor is the implicit one).
class hkpSpringAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpSpringAction(hkpEntity *entityA = HK_NULL, hkpEntity *entityB = HK_NULL, hkUlong userData = 0);
    hkpSpringAction(hkFinishLoadedObjectFlag f) : hkpBinaryAction(f) {}
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

    hkVector4 m_lastForce;      // +0x20
    hkVector4 m_positionAinA;   // +0x30
    hkVector4 m_positionBinB;   // +0x40
    hkReal m_restLength;        // +0x50
    hkReal m_strength;          // +0x54
    hkReal m_damping;           // +0x58
    hkBool m_onCompression;     // +0x5C
    hkBool m_onExtension;       // +0x5D
};

#endif
