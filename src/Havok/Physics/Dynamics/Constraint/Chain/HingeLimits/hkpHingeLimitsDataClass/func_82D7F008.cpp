// cleanupLoadedObjecthkpHingeLimitsData: the cleanup function in hkpHingeLimitsData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpHingeLimitsData.h"

void HK_CALL cleanupLoadedObjecthkpHingeLimitsData(void *p)
{
    static_cast<hkpHingeLimitsData *>(p)->~hkpHingeLimitsData();
}
