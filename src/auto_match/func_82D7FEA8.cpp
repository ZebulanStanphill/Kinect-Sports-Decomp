// getVtablehkpStiffSpringChainData (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds an unfinished object in a local buffer
// with the out-of-line finish constructor (82DA5AE8) and returns its vtable pointer.
#include "havok/hkpStiffSpringChainData.h"

extern "C" const void *fn_82D7FEA8()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16 in Havok's macro
        char buf[sizeof(hkpStiffSpringChainData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpStiffSpringChainData(f);
    return u.ptr;
}
