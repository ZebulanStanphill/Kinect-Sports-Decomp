// cleanupLoadedObjecthkpTriSampledHeightFieldCollection: the cleanup function in hkpTriSampledHeightFieldCollection's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpTriSampledHeightFieldCollection.h"

void HK_CALL cleanupLoadedObjecthkpTriSampledHeightFieldCollection(void *p)
{
    static_cast<hkpTriSampledHeightFieldCollection *>(p)->~hkpTriSampledHeightFieldCollection();
}
