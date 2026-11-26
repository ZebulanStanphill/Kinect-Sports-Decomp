// cleanupLoadedObjecthkpStorageSampledHeightFieldShape: the cleanup function in hkpStorageSampledHeightFieldShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpStorageSampledHeightFieldShape.h"

void HK_CALL cleanupLoadedObjecthkpStorageSampledHeightFieldShape(void *p)
{
    static_cast<hkpStorageSampledHeightFieldShape *>(p)->~hkpStorageSampledHeightFieldShape();
}
