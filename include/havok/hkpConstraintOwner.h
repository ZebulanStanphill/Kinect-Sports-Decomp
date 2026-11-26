// hkpConstraintOwner (Physics/Dynamics/Constraint/hkpConstraintOwner.h), 0x18 bytes: what owns a constraint while it
// is in the world (a simulation island, or an hkpDeferredConstraintOwner that queues the changes), with the summed
// solver sizes of its constraints (m_constraintInfo, +0x8: the agent sector job, 82DC39A0, and the island code read
// it). Its vtable (??_7hkpConstraintOwner@@6B@, 7 slots) has four slots after hkReferencedObject's, all the shared
// empty function (82BA02A8); the names are Havok's, in its order, and hkpDeferredConstraintOwner (82DC3940,
// 82DC3958, 82DC3970 at +0xC to +0x14) overrides the first three. The class declares no destructor; the
// constructor is inline.
#ifndef HAVOK_HKPCONSTRAINTOWNER_H
#define HAVOK_HKPCONSTRAINTOWNER_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"

class hkpConstraintInstance;

class hkpConstraintOwner : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpConstraintOwner() {}
    virtual void addConstraintToCriticalLockedIsland(hkpConstraintInstance *constraint);        // +0xC
    virtual void removeConstraintFromCriticalLockedIsland(hkpConstraintInstance *constraint);   // +0x10
    virtual void addCallbackRequest(hkpConstraintInstance *constraint, int request);            // +0x14
    virtual void checkAccessRw();                                                               // +0x18

    hkpConstraintInfo m_constraintInfo;   // +0x8
};

#endif
