// hkpConstraintChainInstanceAction (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h),
// 0x1C bytes: the action an hkpConstraintChainInstance adds to the world so that it learns when one of its
// chained entities is removed. RTTI: hkpConstraintChainInstanceAction : hkpAction : hkReferencedObject.
// The constructor (82D9CCA0) only stores m_constraintInstance (+0x18).
// Its vtable (??_7hkpConstraintChainInstanceAction@@6B@, 8 slots) has hkpAction's scalar deleting destructor
// in slot 0 (the class declares no destructor) and, after hkReferencedObject's slots, 82D9CFB8 (empty:
// applyAction), 82D9CFE0 (copies the instance's m_chainedEntities: getEntities), 82BA02A8 (the shared empty
// function: getPhantoms), 82D9CFC8 (calls the instance's vtable +0x10: entityRemovedCallback) and 82D9CFC0
// (returns null: clone). The names follow Havok's header.
#ifndef HAVOK_HKPCONSTRAINTCHAININSTANCEACTION_H
#define HAVOK_HKPCONSTRAINTCHAININSTANCEACTION_H

#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class hkpConstraintChainInstance;

class hkpConstraintChainInstanceAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstanceAction(hkpConstraintChainInstance *constraintInstance);
    hkpConstraintChainInstanceAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}
    virtual void applyAction(const hkStepInfo &stepInfo);                             // +0xC  82D9CFB8
    virtual void getEntities(hkArray<hkpEntity *> &entitiesOut);                      // +0x10 82D9CFE0
    virtual void entityRemovedCallback(hkpEntity *entity);                            // +0x18 82D9CFC8
    virtual hkpAction *clone(const hkArray<hkpEntity *> &newEntities,
                             const hkArray<hkpPhantom *> &newPhantoms) const;         // +0x1C 82D9CFC0

    hkpConstraintChainInstance *m_constraintInstance;   // +0x18
};

#endif
