// getVtablehkLocalFrameGroup (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkBase.h"
#include "havok/hkLocalFrameGroup.h"

const void *HK_CALL getVtablehkLocalFrameGroup()
{
    union {
        void *ptr;
        char buf[sizeof(hkLocalFrameGroup)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkLocalFrameGroup(f);
    return u.ptr;
}
