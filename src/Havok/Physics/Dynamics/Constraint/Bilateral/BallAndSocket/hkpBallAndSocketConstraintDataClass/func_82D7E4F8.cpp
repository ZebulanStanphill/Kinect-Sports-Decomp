// cleanupLoadedObjecthkpBallAndSocketConstraintData: the cleanup function in hkpBallAndSocketConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpBallAndSocketConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpBallAndSocketConstraintData(void *p)
{
    static_cast<hkpBallAndSocketConstraintData *>(p)->~hkpBallAndSocketConstraintData();
}
