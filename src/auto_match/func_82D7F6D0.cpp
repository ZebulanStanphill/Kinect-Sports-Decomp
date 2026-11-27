// getVtablehkpPoweredChainData (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds an unfinished object in a local buffer
// with the out-of-line finish constructor (82DA1288) and returns its vtable pointer.
#include "havok/hkpPoweredChainData.h"

extern "C" const void *fn_82D7F6D0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16 in Havok's macro
        char buf[sizeof(hkpPoweredChainData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPoweredChainData(f);
    return u.ptr;
}
