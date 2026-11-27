// getVtablehkpMoppBvTreeShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D3A7D8) and returns its vtable pointer.
#include "havok/hkpMoppBvTreeShape.h"

extern "C" const void *fn_82D3A720()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpMoppBvTreeShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMoppBvTreeShape(f);
    return u.ptr;
}
