// cleanupLoadedObjecthkpCallbackConstraintMotor: the cleanup function in hkpCallbackConstraintMotor's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpCallbackConstraintMotor {
public:
    virtual ~hkpCallbackConstraintMotor();
};

void HK_CALL cleanupLoadedObjecthkpCallbackConstraintMotor(void *p)
{
    static_cast<hkpCallbackConstraintMotor *>(p)->~hkpCallbackConstraintMotor();
}
