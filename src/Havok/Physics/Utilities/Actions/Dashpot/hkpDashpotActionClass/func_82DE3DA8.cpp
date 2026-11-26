// cleanupLoadedObjecthkpDashpotAction: the cleanup function in hkpDashpotAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpDashpotAction.h"

void HK_CALL cleanupLoadedObjecthkpDashpotAction(void *p)
{
    static_cast<hkpDashpotAction *>(p)->~hkpDashpotAction();
}
