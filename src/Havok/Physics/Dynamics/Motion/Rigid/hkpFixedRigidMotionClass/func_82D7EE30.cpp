// cleanupLoadedObjecthkpFixedRigidMotion: the cleanup function in hkpFixedRigidMotion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMotion.h"

void HK_CALL cleanupLoadedObjecthkpFixedRigidMotion(void *p)
{
    static_cast<hkpFixedRigidMotion *>(p)->~hkpFixedRigidMotion();
}
