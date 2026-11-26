// getVtablehkSimpleLocalFrame (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkBase.h"
#include "havok/hkSimpleLocalFrame.h"

const void *HK_CALL getVtablehkSimpleLocalFrame()
{
    union {
        void *ptr;
        char buf[sizeof(hkSimpleLocalFrame)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkSimpleLocalFrame(f);
    return u.ptr;
}
