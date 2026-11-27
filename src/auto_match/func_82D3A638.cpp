// getVtablehkpListShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D3E4C8) and returns its vtable pointer.
#include "havok/hkpListShape.h"

extern "C" const void *fn_82D3A638()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpListShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpListShape(f);
    return u.ptr;
}
