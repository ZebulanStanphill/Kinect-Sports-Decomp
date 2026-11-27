// getVtablehkpWorld, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpWorld (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

const void *HK_CALL getVtablehkpWorld()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpWorld)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpWorld(f);
    return u.ptr;
}
