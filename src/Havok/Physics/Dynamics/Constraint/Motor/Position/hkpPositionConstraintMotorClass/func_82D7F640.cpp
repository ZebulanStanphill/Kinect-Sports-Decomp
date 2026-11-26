// cleanupLoadedObjecthkpPositionConstraintMotor: the cleanup function in hkpPositionConstraintMotor's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPositionConstraintMotor.h"

void HK_CALL cleanupLoadedObjecthkpPositionConstraintMotor(void *p)
{
    static_cast<hkpPositionConstraintMotor *>(p)->~hkpPositionConstraintMotor();
}
