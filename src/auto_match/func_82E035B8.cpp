// getVtablehkxNodeSelectionSet (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkSceneData.h"

const void *HK_CALL getVtablehkxNodeSelectionSet()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkxNodeSelectionSet)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxNodeSelectionSet(f);
    return u.ptr;
}
