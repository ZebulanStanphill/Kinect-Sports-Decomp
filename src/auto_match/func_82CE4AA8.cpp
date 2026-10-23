// getVtablehkReferencedObject, from Havok's HK_REFLECTION_DEFINE_VIRTUAL in
// hkReferencedObjectClass.cpp: builds a finished object in a local buffer and
// returns its vtable pointer. (static in Havok; external here so the unit
// defines it.)
#include "havok/hkReferencedObject.h"

const void *HK_CALL getVtablehkReferencedObject()
{
    union {
        void *ptr;
        char buf[sizeof(hkReferencedObject)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkReferencedObject(f);
    return u.ptr;
}
