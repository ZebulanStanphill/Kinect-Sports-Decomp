// finishLoadedObjecthkpCompressedSampledHeightFieldShape: the finish function in hkpCompressedSampledHeightFieldShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok). RTTI: hkpCompressedSampledHeightFieldShape -> hkpSampledHeightFieldShape -> hkpHeightFieldShape -> hkpShape.
#include "havok/hkpCompressedSampledHeightFieldShape.h"

void HK_CALL finishLoadedObjecthkpCompressedSampledHeightFieldShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpCompressedSampledHeightFieldShape(f);
}
