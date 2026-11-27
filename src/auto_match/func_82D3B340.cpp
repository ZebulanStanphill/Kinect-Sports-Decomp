// getVtableMeshSubpartStorage (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D4E2F0) and returns its vtable pointer.
#include "havok/hkpStorageExtendedMeshShape.h"

extern "C" const void *fn_82D3B340()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpStorageExtendedMeshShape::MeshSubpartStorage)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpStorageExtendedMeshShape::MeshSubpartStorage(f);
    return u.ptr;
}
