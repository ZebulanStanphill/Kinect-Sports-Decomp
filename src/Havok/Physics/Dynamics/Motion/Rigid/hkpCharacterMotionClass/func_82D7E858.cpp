// cleanupLoadedObjecthkpCharacterMotion: the cleanup function in hkpCharacterMotion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMotion.h"

void HK_CALL cleanupLoadedObjecthkpCharacterMotion(void *p)
{
    static_cast<hkpCharacterMotion *>(p)->~hkpCharacterMotion();
}
