// getVtablehkpBreakableConstraintData (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds an unfinished object in a local buffer
// with the out-of-line finish constructor (82D98400) and returns its vtable pointer.
#include "havok/hkpBreakableConstraintData.h"

extern "C" const void *fn_82D7E6A0()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16 in Havok's macro
        char buf[sizeof(hkpBreakableConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpBreakableConstraintData(f);
    return u.ptr;
}
