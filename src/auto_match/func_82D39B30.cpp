// getVtablehkpConvexPieceMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D39BE8) and returns its vtable pointer.
#include "havok/hkpConvexPieceMeshShape.h"

extern "C" const void *fn_82D39B30()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpConvexPieceMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConvexPieceMeshShape(f);
    return u.ptr;
}
