// getVtablehkpSimpleShapePhantom, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSimpleShapePhantom
// (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpSimpleShapePhantom.h"

const void *HK_CALL getVtablehkpSimpleShapePhantom()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpSimpleShapePhantom)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSimpleShapePhantom(f);
    return u.ptr;
}
