// getVtablehkpConvexVerticesShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D3F338) and returns its vtable pointer.
#include "havok/hkpConvexVerticesShape.h"

extern "C" const void *fn_82D3A0C0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpConvexVerticesShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConvexVerticesShape(f);
    return u.ptr;
}
