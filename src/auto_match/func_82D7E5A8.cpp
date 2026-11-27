// getVtablehkpBallSocketChainData (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds an unfinished object in a local buffer
// with the out-of-line finish constructor (82D9B0D0) and returns its vtable pointer.
#include "havok/hkpBallSocketChainData.h"

extern "C" const void *fn_82D7E5A8()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16 in Havok's macro
        char buf[sizeof(hkpBallSocketChainData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpBallSocketChainData(f);
    return u.ptr;
}
