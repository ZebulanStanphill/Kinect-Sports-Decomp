// finishLoadedObjecthkMemoryResourceHandle: the finish function in hkMemoryResourceHandle's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82E15590) on the loaded object.
#include "havok/hkMemoryResourceContainer.h"

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" void fn_82E08DD0(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkMemoryResourceHandle(f);
}
