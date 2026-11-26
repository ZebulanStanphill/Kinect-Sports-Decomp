// cleanupLoadedObjecthkpReorientAction: the cleanup function in hkpReorientAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpReorientAction.h"

void HK_CALL cleanupLoadedObjecthkpReorientAction(void *p)
{
    static_cast<hkpReorientAction *>(p)->~hkpReorientAction();
}
