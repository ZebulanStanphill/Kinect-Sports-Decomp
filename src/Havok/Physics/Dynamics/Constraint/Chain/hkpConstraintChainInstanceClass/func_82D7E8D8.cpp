// cleanupLoadedObjecthkpConstraintChainInstance: the cleanup function in hkpConstraintChainInstance's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpConstraintChainInstance.h"

void HK_CALL cleanupLoadedObjecthkpConstraintChainInstance(void *p)
{
    static_cast<hkpConstraintChainInstance *>(p)->~hkpConstraintChainInstance();
}
