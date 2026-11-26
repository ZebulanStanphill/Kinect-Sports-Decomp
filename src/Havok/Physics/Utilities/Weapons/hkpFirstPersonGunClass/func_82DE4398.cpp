// cleanupLoadedObjecthkpFirstPersonGun: the cleanup function in hkpFirstPersonGun's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpFirstPersonGun.h"

void HK_CALL cleanupLoadedObjecthkpFirstPersonGun(void *p)
{
    static_cast<hkpFirstPersonGun *>(p)->~hkpFirstPersonGun();
}
