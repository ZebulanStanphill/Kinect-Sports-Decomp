#include "havok/hkBase.h"
#include "havok/hkpConstraintChainInstanceAction.h"
#include "havok/hkpConstraintChainInstance.h"

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

// The local copy of this decides the operand order of the loop's lwzx (base first, as in the original);
// with plain member accesses the compiler puts the index first.
hkpConstraintChainInstance::~hkpConstraintChainInstance()
{
    hkpConstraintChainInstance *self = this;
    for (int i = 0; i < self->m_chainedEntities.getSize(); i++)
        self->m_chainedEntities[i]->removeReference();
    m_action->removeReference();
}
