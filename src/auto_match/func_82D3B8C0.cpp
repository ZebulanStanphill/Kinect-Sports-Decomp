// getVtablehkpTriSampledHeightFieldCollection (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D3B8F0) and returns its vtable pointer.
#include "havok/hkpTriSampledHeightFieldCollection.h"

extern "C" const void *fn_82D3B8C0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpTriSampledHeightFieldCollection)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpTriSampledHeightFieldCollection(f);
    return u.ptr;
}
