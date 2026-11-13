// cleanupLoadedObjecthkpCompressedSampledHeightFieldShape: the cleanup function in hkpCompressedSampledHeightFieldShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpCompressedSampledHeightFieldShape {
public:
    virtual ~hkpCompressedSampledHeightFieldShape();
};

void HK_CALL cleanupLoadedObjecthkpCompressedSampledHeightFieldShape(void *p)
{
    static_cast<hkpCompressedSampledHeightFieldShape *>(p)->~hkpCompressedSampledHeightFieldShape();
}
