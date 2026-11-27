// getVtablehkpTriSampledHeightFieldBvTreeShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D3B800) and returns its vtable pointer.
#include "havok/hkpTriSampledHeightFieldBvTreeShape.h"

extern "C" const void *fn_82D3B7D0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpTriSampledHeightFieldBvTreeShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpTriSampledHeightFieldBvTreeShape(f);
    return u.ptr;
}
