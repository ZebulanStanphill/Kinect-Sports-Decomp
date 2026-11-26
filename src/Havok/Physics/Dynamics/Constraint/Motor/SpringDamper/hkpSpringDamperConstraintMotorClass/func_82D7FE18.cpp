// cleanupLoadedObjecthkpSpringDamperConstraintMotor: the cleanup function in hkpSpringDamperConstraintMotor's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpSpringDamperConstraintMotor.h"

void HK_CALL cleanupLoadedObjecthkpSpringDamperConstraintMotor(void *p)
{
    static_cast<hkpSpringDamperConstraintMotor *>(p)->~hkpSpringDamperConstraintMotor();
}
