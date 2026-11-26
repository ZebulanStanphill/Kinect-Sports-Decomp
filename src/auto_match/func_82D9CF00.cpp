#include "havok/hkBase.h"
#include "havok/hkpAction.h"
#include "havok/hkpConstraintInstance.h"

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

class hkpConstraintChainInstanceAction;

// hkpConstraintChainInstance (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.h).
class hkpConstraintChainInstance : public hkpConstraintInstance {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstance(hkpConstraintChainData *data);
    virtual ~hkpConstraintChainInstance();

    hkArray<hkpEntity *> m_chainedEntities;      // +0x38
    hkpConstraintChainInstanceAction *m_action;  // +0x44
};

// hkpConstraintChainInstanceAction (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h).
class hkpConstraintChainInstanceAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstanceAction(hkpConstraintChainInstance *constraintInstance);

    hkpConstraintChainInstance *m_constraintInstance;   // +0x18
};

// The local copy of this decides the operand order of the loop's lwzx (base first, as in the original);
// with plain member accesses the compiler puts the index first.
hkpConstraintChainInstance::~hkpConstraintChainInstance()
{
    hkpConstraintChainInstance *self = this;
    for (int i = 0; i < self->m_chainedEntities.getSize(); i++)
        self->m_chainedEntities[i]->removeReference();
    m_action->removeReference();
}
