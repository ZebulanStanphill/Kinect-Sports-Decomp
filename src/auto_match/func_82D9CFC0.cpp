// hkpConstraintChainInstanceAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h): slot +0x1C of
// ??_7hkpConstraintChainInstanceAction@@6B@. The action is not cloned.
#include "havok/hkpConstraintChainInstanceAction.h"

hkpAction *hkpConstraintChainInstanceAction::clone(const hkArray<hkpEntity *> &newEntities,
                                                   const hkArray<hkpPhantom *> &newPhantoms) const
{
    return HK_NULL;
}
