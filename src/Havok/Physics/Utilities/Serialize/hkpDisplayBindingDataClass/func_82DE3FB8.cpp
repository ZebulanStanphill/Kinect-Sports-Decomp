// cleanupLoadedObjecthkpDisplayBindingData: the cleanup function in hkpDisplayBindingData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpDisplayBindingData.h"

void HK_CALL cleanupLoadedObjecthkpDisplayBindingData(void *p)
{
    static_cast<hkpDisplayBindingData *>(p)->~hkpDisplayBindingData();
}
