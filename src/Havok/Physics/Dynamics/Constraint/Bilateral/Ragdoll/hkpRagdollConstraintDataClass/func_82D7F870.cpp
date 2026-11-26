// cleanupLoadedObjecthkpRagdollConstraintData: the cleanup function in hkpRagdollConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpRagdollConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpRagdollConstraintData(void *p)
{
    static_cast<hkpRagdollConstraintData *>(p)->~hkpRagdollConstraintData();
}
