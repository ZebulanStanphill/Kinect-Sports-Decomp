// getVtablehkpSimpleMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D3AFC0) and returns its vtable pointer.
#include "havok/hkpSimpleMeshShape.h"

extern "C" const void *fn_82D3AF90()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpSimpleMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSimpleMeshShape(f);
    return u.ptr;
}
