// finishLoadedObjecthkpTriSampledHeightFieldBvTreeShape: the finish function in hkpTriSampledHeightFieldBvTreeShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D3B800) on the loaded object.
#include "havok/hkpTriSampledHeightFieldBvTreeShape.h"

extern "C" void fn_82D3B7C0(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpTriSampledHeightFieldBvTreeShape(f);
}
