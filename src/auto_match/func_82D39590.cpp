// getVtablehkpCompressedMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D45F58) and returns its vtable pointer.
#include "havok/hkpCompressedMeshShape.h"

extern "C" const void *fn_82D39590()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpCompressedMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpCompressedMeshShape(f);
    return u.ptr;
}
