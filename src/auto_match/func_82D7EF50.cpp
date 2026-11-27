// getVtablehkpGenericConstraintData (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds an unfinished object in a local buffer
// with the out-of-line finish constructor (82D9DF00) and returns its vtable pointer.
#include "havok/hkpGenericConstraintData.h"

extern "C" const void *fn_82D7EF50()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16 in Havok's macro
        char buf[sizeof(hkpGenericConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpGenericConstraintData(f);
    return u.ptr;
}
