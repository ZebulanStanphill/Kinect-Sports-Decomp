// cleanupLoadedObjecthkpMalleableConstraintData: the cleanup function in hkpMalleableConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMalleableConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpMalleableConstraintData(void *p)
{
    static_cast<hkpMalleableConstraintData *>(p)->~hkpMalleableConstraintData();
}
