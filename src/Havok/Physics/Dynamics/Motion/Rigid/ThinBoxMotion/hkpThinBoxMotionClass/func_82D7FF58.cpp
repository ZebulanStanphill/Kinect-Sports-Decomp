// cleanupLoadedObjecthkpThinBoxMotion: the cleanup function in hkpThinBoxMotion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpMotion.h"

void HK_CALL cleanupLoadedObjecthkpThinBoxMotion(void *p)
{
    static_cast<hkpThinBoxMotion *>(p)->~hkpThinBoxMotion();
}
