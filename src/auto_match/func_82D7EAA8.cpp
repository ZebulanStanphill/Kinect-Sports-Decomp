// finishLoadedObjecthkpConstraintChainInstanceAction: hkpConstraintChainInstanceAction's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
// hkpAction (Physics/Dynamics/Action/hkpAction.h) and hkpConstraintChainInstanceAction
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h). hkpAction's finish constructor only
// finishes m_name (+0x14, out of line: fn_82CED308).
#include "havok/hkBase.h"
#include "havok/hkpConstraintChainInstanceAction.h"

void HK_CALL finishLoadedObjecthkpConstraintChainInstanceAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConstraintChainInstanceAction(f);
}
