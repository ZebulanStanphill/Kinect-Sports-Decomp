// getVtablehkMemoryResourceContainer (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82E157A8) and returns its vtable pointer.
#include "havok/hkMemoryResourceContainer.h"

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" const void *fn_82E08E60()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkMemoryResourceContainer)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkMemoryResourceContainer(f);
    return u.ptr;
}
