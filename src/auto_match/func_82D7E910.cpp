// getVtablehkpConstraintChainInstance (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds an unfinished object in a local buffer
// with the out-of-line finish constructor (82D7E9A8) and returns its vtable pointer.
#include "havok/hkpConstraintChainInstance.h"

extern "C" const void *fn_82D7E910()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16 in Havok's macro
        char buf[sizeof(hkpConstraintChainInstance)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConstraintChainInstance(f);
    return u.ptr;
}
