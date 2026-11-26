// cleanupLoadedObjecthkpTriSampledHeightFieldBvTreeShape: the cleanup function in hkpTriSampledHeightFieldBvTreeShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpTriSampledHeightFieldBvTreeShape.h"

void HK_CALL cleanupLoadedObjecthkpTriSampledHeightFieldBvTreeShape(void *p)
{
    static_cast<hkpTriSampledHeightFieldBvTreeShape *>(p)->~hkpTriSampledHeightFieldBvTreeShape();
}
