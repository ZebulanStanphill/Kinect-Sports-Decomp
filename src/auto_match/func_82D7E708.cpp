// getVtablehkpCachingShapePhantom, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpCachingShapePhantom
// (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpCachingShapePhantom.h"

const void *HK_CALL getVtablehkpCachingShapePhantom()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpCachingShapePhantom)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpCachingShapePhantom(f);
    return u.ptr;
}
