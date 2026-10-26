// cleanupLoadedObjecthkpStorageSampledHeightFieldShape: the cleanup function in hkpStorageSampledHeightFieldShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStorageSampledHeightFieldShape {
public:
    virtual ~hkpStorageSampledHeightFieldShape();
};

void HK_CALL cleanupLoadedObjecthkpStorageSampledHeightFieldShape(void *p)
{
    static_cast<hkpStorageSampledHeightFieldShape *>(p)->~hkpStorageSampledHeightFieldShape();
}
