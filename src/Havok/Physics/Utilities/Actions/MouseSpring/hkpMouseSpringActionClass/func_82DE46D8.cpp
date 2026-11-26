// cleanupLoadedObjecthkpMouseSpringAction: the cleanup function in hkpMouseSpringAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMouseSpringAction.h"

void HK_CALL cleanupLoadedObjecthkpMouseSpringAction(void *p)
{
    static_cast<hkpMouseSpringAction *>(p)->~hkpMouseSpringAction();
}
