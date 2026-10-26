// cleanupLoadedObjecthkpVelocityConstraintMotor: the cleanup function in hkpVelocityConstraintMotor's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVelocityConstraintMotor {
public:
    virtual ~hkpVelocityConstraintMotor();
};

void HK_CALL cleanupLoadedObjecthkpVelocityConstraintMotor(void *p)
{
    static_cast<hkpVelocityConstraintMotor *>(p)->~hkpVelocityConstraintMotor();
}
