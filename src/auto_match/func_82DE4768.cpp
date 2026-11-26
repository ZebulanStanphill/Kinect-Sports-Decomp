// getVtablehkpMouseSpringAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpMouseSpringAction).
#include "havok/hkBase.h"
#include "havok/hkpMouseSpringAction.h"

const void *HK_CALL getVtablehkpMouseSpringAction()
{
    union {
        void *ptr;
        char buf[sizeof(hkpMouseSpringAction)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMouseSpringAction(f);
    return u.ptr;
}
