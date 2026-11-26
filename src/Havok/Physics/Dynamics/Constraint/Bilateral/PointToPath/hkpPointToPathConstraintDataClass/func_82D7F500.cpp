// cleanupLoadedObjecthkpPointToPathConstraintData: the cleanup function in hkpPointToPathConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPointToPathConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpPointToPathConstraintData(void *p)
{
    static_cast<hkpPointToPathConstraintData *>(p)->~hkpPointToPathConstraintData();
}
