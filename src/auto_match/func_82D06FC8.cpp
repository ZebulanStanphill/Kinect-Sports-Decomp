// getVtablehkMemoryMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkMemoryMeshShape.h"

const void *HK_CALL getVtablehkMemoryMeshShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkMemoryMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkMemoryMeshShape(f);
    return u.ptr;
}
