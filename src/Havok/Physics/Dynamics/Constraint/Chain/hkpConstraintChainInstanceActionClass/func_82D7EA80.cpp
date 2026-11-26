// cleanupLoadedObjecthkpConstraintChainInstanceAction: the cleanup function in hkpConstraintChainInstanceAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpConstraintChainInstanceAction.h"

void HK_CALL cleanupLoadedObjecthkpConstraintChainInstanceAction(void *p)
{
    static_cast<hkpConstraintChainInstanceAction *>(p)->~hkpConstraintChainInstanceAction();
}
