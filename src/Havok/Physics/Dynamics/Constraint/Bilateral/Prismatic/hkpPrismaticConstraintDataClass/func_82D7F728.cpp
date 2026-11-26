// cleanupLoadedObjecthkpPrismaticConstraintData: the cleanup function in hkpPrismaticConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPrismaticConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpPrismaticConstraintData(void *p)
{
    static_cast<hkpPrismaticConstraintData *>(p)->~hkpPrismaticConstraintData();
}
