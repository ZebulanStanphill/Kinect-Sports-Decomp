// getVtablehkpTyremarksInfo, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpTyremarksInfo (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpTyremarksInfo -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpTyremarksInfo.h"

const void *HK_CALL getVtablehkpTyremarksInfo()
{
    union {
        void *ptr;
        char buf[sizeof(hkpTyremarksInfo)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpTyremarksInfo(f);
    return u.ptr;
}
