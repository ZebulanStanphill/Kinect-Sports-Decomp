// getVtablehkpSpringAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpSpringAction).
#include "havok/hkBase.h"
#include "havok/hkpSpringAction.h"

const void *HK_CALL getVtablehkpSpringAction()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSpringAction)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSpringAction(f);
    return u.ptr;
}
