// getVtablehkpAabbPhantom, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpAabbPhantom
// (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpAabbPhantom.h"

const void *HK_CALL getVtablehkpAabbPhantom()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpAabbPhantom)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpAabbPhantom(f);
    return u.ptr;
}
