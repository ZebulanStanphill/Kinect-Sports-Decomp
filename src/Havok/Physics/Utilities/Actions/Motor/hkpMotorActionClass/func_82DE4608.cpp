// cleanupLoadedObjecthkpMotorAction: the cleanup function in hkpMotorAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMotorAction.h"

void HK_CALL cleanupLoadedObjecthkpMotorAction(void *p)
{
    static_cast<hkpMotorAction *>(p)->~hkpMotorAction();
}
