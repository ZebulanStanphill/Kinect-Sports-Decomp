// cleanupLoadedObjecthkpConstraintInstance: the cleanup function in hkpConstraintInstance's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpConstraintInstance.h"

void HK_CALL cleanupLoadedObjecthkpConstraintInstance(void *p)
{
    static_cast<hkpConstraintInstance *>(p)->~hkpConstraintInstance();
}
