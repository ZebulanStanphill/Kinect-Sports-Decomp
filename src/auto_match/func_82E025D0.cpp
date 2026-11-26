// getVtablehkxEnum, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxEnum (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxEnum -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxEnum.h"

const void *HK_CALL getVtablehkxEnum()
{
    union {
        void *ptr;
        char buf[sizeof(hkxEnum)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxEnum(f);
    return u.ptr;
}
