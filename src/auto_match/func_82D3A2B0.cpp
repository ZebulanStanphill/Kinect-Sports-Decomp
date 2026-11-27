// getVtablehkpFastMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D3A3A0) and returns its vtable pointer.
#include "havok/hkpFastMeshShape.h"

extern "C" const void *fn_82D3A2B0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpFastMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpFastMeshShape(f);
    return u.ptr;
}
