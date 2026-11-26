// cleanupLoadedObjecthkpPulleyConstraintData: the cleanup function in hkpPulleyConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPulleyConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpPulleyConstraintData(void *p)
{
    static_cast<hkpPulleyConstraintData *>(p)->~hkpPulleyConstraintData();
}
