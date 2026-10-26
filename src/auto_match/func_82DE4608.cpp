// cleanupLoadedObjecthkpMotorAction: the cleanup function in hkpMotorAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMotorAction {
public:
    virtual ~hkpMotorAction();
};

void HK_CALL cleanupLoadedObjecthkpMotorAction(void *p)
{
    static_cast<hkpMotorAction *>(p)->~hkpMotorAction();
}
