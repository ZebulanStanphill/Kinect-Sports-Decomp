// cleanupLoadedObjecthkpRotationalConstraintData: the cleanup function in hkpRotationalConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpRotationalConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpRotationalConstraintData(void *p)
{
    static_cast<hkpRotationalConstraintData *>(p)->~hkpRotationalConstraintData();
}
