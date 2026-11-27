// finishLoadedObjecthkpTriSampledHeightFieldCollection: the finish function in hkpTriSampledHeightFieldCollection's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D3B8F0) on the loaded object.
#include "havok/hkpTriSampledHeightFieldCollection.h"

extern "C" void fn_82D3B8B0(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpTriSampledHeightFieldCollection(f);
}
