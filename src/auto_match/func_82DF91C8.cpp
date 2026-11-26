// cleanupLoadedObjecthkpTyremarksWheel: the cleanup function in hkpTyremarksWheel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpTyremarksInfo.h"

void HK_CALL cleanupLoadedObjecthkpTyremarksWheel(void *p)
{
    static_cast<hkpTyremarksWheel *>(p)->~hkpTyremarksWheel();
}
