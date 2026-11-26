// finishLoadedObjecthkpStorageSampledHeightFieldShape: the finish function in hkpStorageSampledHeightFieldShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok). RTTI: hkpStorageSampledHeightFieldShape -> hkpSampledHeightFieldShape -> hkpHeightFieldShape -> hkpShape.
#include "havok/hkpStorageSampledHeightFieldShape.h"

void HK_CALL finishLoadedObjecthkpStorageSampledHeightFieldShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpStorageSampledHeightFieldShape(f);
}
