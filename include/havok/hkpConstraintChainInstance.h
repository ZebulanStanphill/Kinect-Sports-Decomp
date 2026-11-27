// hkpConstraintChainInstance (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.h), 0x48 bytes:
// a constraint instance that drives a chain of entities through an hkpConstraintChainData.
// RTTI: hkpConstraintChainInstance : hkpConstraintInstance : hkReferencedObject.
// The layout is the game's: the constructor (82D9CE70) stores the data, clears both entities and creates
// m_action (+0x44); the destructor (82D9CF00) releases m_chainedEntities (+0x38) and m_action.
// Its vtable (??_7hkpConstraintChainInstance@@6B@, 7 slots) keeps hkpConstraintInstance's slots +0xC and
// +0x14 (empty functions) and replaces +0x10 with 82D9CD18 (removes m_action and the constraint from the
// entity's world: entityRemovedCallback in Havok) and +0x18 with 82D7EA10 (returns 1: getType, TYPE_CHAIN).
#ifndef HAVOK_HKPCONSTRAINTCHAININSTANCE_H
#define HAVOK_HKPCONSTRAINTCHAININSTANCE_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintInstance.h"

class hkpConstraintChainInstanceAction;

class hkpConstraintChainInstance : public hkpConstraintInstance {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstance(hkpConstraintChainData *data);
    // Out of line (82D7E9A8). m_chainedEntities and m_action are serialised.
    hkpConstraintChainInstance(hkFinishLoadedObjectFlag f);
    virtual ~hkpConstraintChainInstance();
    virtual void entityRemovedCallback(hkpEntity *entity);          // +0x10 82D9CD18
    virtual InstanceType getType() const { return TYPE_CHAIN; }     // +0x18 82D7EA10

    hkArray<hkpEntity *> m_chainedEntities;       // +0x38
    hkpConstraintChainInstanceAction *m_action;   // +0x44
};

#endif
