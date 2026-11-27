// getVtablehkpGroupFilter, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpGroupFilter (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpGroupFilter.h"

const void *HK_CALL getVtablehkpGroupFilter()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpGroupFilter)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpGroupFilter(f);
    return u.ptr;
}
