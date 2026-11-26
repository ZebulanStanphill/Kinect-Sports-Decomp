// getVtablehkpEntity, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpEntity
// (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpEntity.h"

const void *HK_CALL getVtablehkpEntity()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpEntity)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpEntity(f);
    return u.ptr;
}
