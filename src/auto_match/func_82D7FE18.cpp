// cleanupLoadedObjecthkpSpringDamperConstraintMotor: the cleanup function in hkpSpringDamperConstraintMotor's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSpringDamperConstraintMotor {
public:
    virtual ~hkpSpringDamperConstraintMotor();
};

void HK_CALL cleanupLoadedObjecthkpSpringDamperConstraintMotor(void *p)
{
    static_cast<hkpSpringDamperConstraintMotor *>(p)->~hkpSpringDamperConstraintMotor();
}
