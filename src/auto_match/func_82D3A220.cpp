// getVtablehkpExtendedMeshShape (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok), /O1: builds an unfinished object in a
// local buffer with the out-of-line finish constructor (82D438E0) and returns its vtable pointer.
#include "havok/hkpExtendedMeshShape.h"

extern "C" const void *fn_82D3A220()
{
    union {
        void *ptr;
        char buf[sizeof(hkpExtendedMeshShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpExtendedMeshShape(f);
    return u.ptr;
}
