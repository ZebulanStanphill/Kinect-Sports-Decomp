// cleanupLoadedObjecthkpLimitedHingeConstraintData: the cleanup function in hkpLimitedHingeConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpLimitedHingeConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpLimitedHingeConstraintData(void *p)
{
    static_cast<hkpLimitedHingeConstraintData *>(p)->~hkpLimitedHingeConstraintData();
}
