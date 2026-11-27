// getVtablehkpMalleableConstraintData (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds an unfinished object in a local buffer
// with the out-of-line finish constructor (82D98B10) and returns its vtable pointer.
#include "havok/hkpMalleableConstraintData.h"

extern "C" const void *fn_82D7F3E0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16 in Havok's macro
        char buf[sizeof(hkpMalleableConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMalleableConstraintData(f);
    return u.ptr;
}
