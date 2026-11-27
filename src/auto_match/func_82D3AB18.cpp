// getVtablehkpNullCollisionFilter, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpNullCollisionFilter (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpNullCollisionFilter.h"

const void *HK_CALL getVtablehkpNullCollisionFilter()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpNullCollisionFilter)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpNullCollisionFilter(f);
    return u.ptr;
}
