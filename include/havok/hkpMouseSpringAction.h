// hkpMouseSpringAction (Physics/Utilities/Actions/MouseSpring/hkpMouseSpringAction.h, the folder of its class
// unit), 0x60 bytes: drags a point of a body towards the mouse. The layout comes from the constructors
// (82DF2948, and 82DF2A08 whose mangled name gives the parameters and the callback type) and the finish
// constructor, which default-constructs the callback array (not serialised). The member names follow Havok's
// header.
#ifndef HAVOK_HKPMOUSESPRINGACTION_H
#define HAVOK_HKPMOUSESPRINGACTION_H

#include "havok/hkVector4.h"
#include "havok/hkpAction.h"
#include "havok/hkpShape.h"

class hkpRigidBody;

// ??_7hkpMouseSpringAction@@6B@: the deleting destructor 82DE47A8, applyAction 82DF25F8, entityRemovedCallback
// 82DF25C0 (its own), clone 82DF2CD8.
class hkpMouseSpringAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    typedef void (HK_CALL *mouseSpringAppliedCallback)(hkpMouseSpringAction *action, const hkStepInfo &stepInfo,
                                                       hkpRigidBody *rb);
    // Out of line (82DF2948).
    hkpMouseSpringAction(hkpRigidBody *rb = HK_NULL);
    hkpMouseSpringAction(const hkVector4 &positionInRbLocal, const hkVector4 &mousePositionInWorld,
                         const hkReal springDamping, const hkReal springElasticity, const hkReal objectDamping,
                         hkpRigidBody *rb, const hkArray<mouseSpringAppliedCallback> *appliedCallbacks = HK_NULL);
    hkpMouseSpringAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}
    // Its own slots of the action interface (hkpAction.h); getEntities is hkpUnaryAction's.
    virtual void applyAction(const hkStepInfo &stepInfo);                                          // +0xC
    virtual void entityRemovedCallback(hkpEntity *entity);                                         // +0x18
    virtual hkpAction *clone(const hkArray<hkpEntity *> &newEntities,
                             const hkArray<hkpPhantom *> &newPhantoms) const;                      // +0x1C

    hkVector4 m_positionInRbLocal;                          // +0x20
    hkVector4 m_mousePositionInWorld;                       // +0x30
    hkReal m_springDamping;                                 // +0x40
    hkReal m_springElasticity;                              // +0x44
    hkReal m_maxRelativeForce;                              // +0x48
    hkReal m_objectDamping;                                 // +0x4C
    hkpShapeKey m_shapeKey;                                 // +0x50
    hkArray<mouseSpringAppliedCallback> m_applyCallbacks;   // +0x54 (+nosave)
};

#endif
