// cleanupLoadedObjecthkpAngularDashpotAction: the cleanup function in hkpAngularDashpotAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpAngularDashpotAction.h"

void HK_CALL cleanupLoadedObjecthkpAngularDashpotAction(void *p)
{
    static_cast<hkpAngularDashpotAction *>(p)->~hkpAngularDashpotAction();
}
