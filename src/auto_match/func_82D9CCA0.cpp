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

hkpConstraintChainInstanceAction::hkpConstraintChainInstanceAction(hkpConstraintChainInstance *constraintInstance)
    : m_constraintInstance(constraintInstance)
{
}
