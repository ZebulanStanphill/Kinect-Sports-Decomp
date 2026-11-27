// hkpConstraintChainInstanceAction::entityRemovedCallback(hkpEntity *)
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h): slot +0x18 of
// ??_7hkpConstraintChainInstanceAction@@6B@. It hands the entity to its instance (its vtable +0x10).
#include "havok/hkpConstraintChainInstanceAction.h"
#include "havok/hkpConstraintChainInstance.h"

void hkpConstraintChainInstanceAction::entityRemovedCallback(hkpEntity *entity)
{
    m_constraintInstance->entityRemovedCallback(entity);
}
