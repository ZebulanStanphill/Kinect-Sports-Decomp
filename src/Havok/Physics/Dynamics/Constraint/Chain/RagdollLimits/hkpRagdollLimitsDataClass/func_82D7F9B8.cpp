// finishLoadedObjecthkpRagdollLimitsData: hkpRagdollLimitsData's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
// The finish constructor re-applies the cone limit's stabilization when finishing: if the atom's flag
// (+0x9A) is set it calls setConeLimitStabilization(true) (fn_82DA1EA8, out of line, keeps its fn_ name;
// the hkBool argument is built in a stack temporary).
#include "havok/hkBase.h"
#include "havok/hkpRagdollLimitsData.h"

void HK_CALL finishLoadedObjecthkpRagdollLimitsData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRagdollLimitsData(f);
}
