// hkpConstraintChainInstance (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.h), 0x48 bytes:
// a constraint instance that drives a chain of entities through an hkpConstraintChainData.
// RTTI: hkpConstraintChainInstance : hkpConstraintInstance : hkReferencedObject.
// The layout is the game's: the constructor (82D9CE70) stores the data, clears both entities and creates
// m_action (+0x44); the destructor (82D9CF00) releases m_chainedEntities (+0x38) and m_action.
// Its vtable (??_7hkpConstraintChainInstance@@6B@, 7 slots) keeps hkpConstraintInstance's slots +0xC and
// +0x14 (empty functions) and replaces +0x10 with 82D9CD18 (removes m_action and the constraint from the
// entity's world: entityRemovedCallback in Havok) and +0x18 with 82D7EA10 (returns 1: getType, TYPE_CHAIN).
// hkpConstraintInstance.h does not declare those four virtual functions yet, so they are not declared here.
#ifndef HAVOK_HKPCONSTRAINTCHAININSTANCE_H
#define HAVOK_HKPCONSTRAINTCHAININSTANCE_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintInstance.h"

class hkpConstraintChainInstanceAction;

class hkpConstraintChainInstance : public hkpConstraintInstance {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstance(hkpConstraintChainData *data);
    // Out of line in the game as fn_82D7E9A8, which keeps its fn_ name (a Matching unit defines it); defined
    // inline here so that a unit can expand it. m_chainedEntities and m_action are serialised.
    HK_FORCE_INLINE hkpConstraintChainInstance(hkFinishLoadedObjectFlag f)
        : hkpConstraintInstance(f), m_chainedEntities(f)
    {
    }
    virtual ~hkpConstraintChainInstance();

    hkArray<hkpEntity *> m_chainedEntities;       // +0x38
    hkpConstraintChainInstanceAction *m_action;   // +0x44
};

#endif
