// cleanupLoadedObjecthkpHingeConstraintData: the cleanup function in hkpHingeConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpHingeConstraintData.h"

void HK_CALL cleanupLoadedObjecthkpHingeConstraintData(void *p)
{
    static_cast<hkpHingeConstraintData *>(p)->~hkpHingeConstraintData();
}
