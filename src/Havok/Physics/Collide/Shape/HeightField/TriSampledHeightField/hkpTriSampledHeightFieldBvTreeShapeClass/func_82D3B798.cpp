// cleanupLoadedObjecthkpTriSampledHeightFieldBvTreeShape: the cleanup function in hkpTriSampledHeightFieldBvTreeShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpTriSampledHeightFieldBvTreeShape {
public:
    virtual ~hkpTriSampledHeightFieldBvTreeShape();
};

void HK_CALL cleanupLoadedObjecthkpTriSampledHeightFieldBvTreeShape(void *p)
{
    static_cast<hkpTriSampledHeightFieldBvTreeShape *>(p)->~hkpTriSampledHeightFieldBvTreeShape();
}
