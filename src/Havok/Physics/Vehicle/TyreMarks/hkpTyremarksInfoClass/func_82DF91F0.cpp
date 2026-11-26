// cleanupLoadedObjecthkpTyremarksInfo: the cleanup function in hkpTyremarksInfo's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpTyremarksInfo.h"

void HK_CALL cleanupLoadedObjecthkpTyremarksInfo(void *p)
{
    static_cast<hkpTyremarksInfo *>(p)->~hkpTyremarksInfo();
}
