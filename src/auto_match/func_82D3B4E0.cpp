// getVtablehkpStorageMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D4FF88) and returns its vtable pointer.
#include "havok/hkpStorageMeshShape.h"

extern "C" const void *fn_82D3B4E0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpStorageMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpStorageMeshShape(f);
    return u.ptr;
}
