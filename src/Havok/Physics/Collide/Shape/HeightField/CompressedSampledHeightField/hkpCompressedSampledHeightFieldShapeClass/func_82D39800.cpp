// cleanupLoadedObjecthkpCompressedSampledHeightFieldShape: the cleanup function in hkpCompressedSampledHeightFieldShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpCompressedSampledHeightFieldShape.h"

void HK_CALL cleanupLoadedObjecthkpCompressedSampledHeightFieldShape(void *p)
{
    static_cast<hkpCompressedSampledHeightFieldShape *>(p)->~hkpCompressedSampledHeightFieldShape();
}
