#include "havok/hkBase.h"
#include "havok/hkpConstraintChainInstanceAction.h"

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

hkpConstraintChainInstanceAction::hkpConstraintChainInstanceAction(hkpConstraintChainInstance *constraintInstance)
    : m_constraintInstance(constraintInstance)
{
}
