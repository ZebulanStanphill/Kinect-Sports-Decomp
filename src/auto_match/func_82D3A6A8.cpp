// getVtablehkpMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D4B0F8) and returns its vtable pointer.
#include "havok/hkpMeshShape.h"

extern "C" const void *fn_82D3A6A8()
{
    union {
        void *ptr;
        char buf[sizeof(hkpMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMeshShape(f);
    return u.ptr;
}
