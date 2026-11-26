// hkpReorientAction (Physics/Utilities/Actions/Reorient/hkpReorientAction.h, the folder of its class unit),
// 0x50 bytes: turns a body so that an axis of it points up. The game has no out-of-line constructor: the two
// constructors are inline (82DF4A20 inlines the default one, which clears everything; 82DF4A98 the one that
// takes the axes, the strength and the damping). The member names follow Havok's header.
#ifndef HAVOK_HKPREORIENTACTION_H
#define HAVOK_HKPREORIENTACTION_H

#include "havok/hkVector4.h"
#include "havok/hkpAction.h"

class hkpPhantom;
struct hkStepInfo;

// ??_7hkpReorientAction@@6B@: the deleting destructor 82DE4C28, applyAction 82DF4BA8, clone 82DF4B08.
class hkpReorientAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    HK_FORCE_INLINE hkpReorientAction() : hkpUnaryAction(HK_NULL, 0)
    {
        m_strength = 0.0f;
        m_damping = 0.0f;
        m_rotationAxis.setZero4();
        m_upAxis.setZero4();
    }
    HK_FORCE_INLINE hkpReorientAction(hkpEntity *entity, const hkVector4 &rotationAxis, const hkVector4 &upAxis,
                                      hkReal strength, hkReal damping)
        : hkpUnaryAction(entity, 0)
    {
        m_rotationAxis = rotationAxis;
        m_upAxis = upAxis;
        m_strength = strength;
        m_damping = damping;
    }
    hkpReorientAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}
    // The action interface, in the order of ??_7hkpAction@@6B@ (applyAction, getEntities, getPhantoms,
    // entityRemovedCallback, clone after hkReferencedObject's three slots). hkpAction.h does not declare these
    // yet, so they are declared here; in the game getEntities, getPhantoms and entityRemovedCallback are
    // hkpUnaryAction's unless noted. The names follow Havok's header.
    virtual void applyAction(const hkStepInfo &stepInfo);                                          // +0xC
    virtual void getEntities(hkArray<hkpEntity *> &entitiesOut);                                   // +0x10
    virtual void getPhantoms(hkArray<hkpPhantom *> &phantomsOut);                                  // +0x14
    virtual void entityRemovedCallback(hkpEntity *entity);                                         // +0x18
    virtual hkpAction *clone(const hkArray<hkpEntity *> &newEntities,
                             const hkArray<hkpPhantom *> &newPhantoms) const;                      // +0x1C

    hkVector4 m_rotationAxis;   // +0x20
    hkVector4 m_upAxis;         // +0x30
    hkReal m_strength;          // +0x40
    hkReal m_damping;           // +0x44
};

#endif
