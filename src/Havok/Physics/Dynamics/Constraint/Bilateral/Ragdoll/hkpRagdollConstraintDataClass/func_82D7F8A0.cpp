// finishLoadedObjecthkpRagdollConstraintData: hkpRagdollConstraintData's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
// The finish constructor re-applies the cone limit's stabilization when finishing: if the atom's flag
// (+0x116) is set it calls setConeLimitStabilization(true) (fn_82D97680, out of line, keeps its fn_ name;
// the hkBool argument is built in a stack temporary).
#include "havok/hkBase.h"
#include "havok/hkpRagdollConstraintData.h"

void HK_CALL finishLoadedObjecthkpRagdollConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRagdollConstraintData(f);
}
