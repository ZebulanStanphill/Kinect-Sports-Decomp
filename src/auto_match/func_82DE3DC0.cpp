// getVtablehkpDashpotAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpDashpotAction).
#include "havok/hkBase.h"
#include "havok/hkpDashpotAction.h"

const void *HK_CALL getVtablehkpDashpotAction()
{
    union {
        void *ptr;
        char buf[sizeof(hkpDashpotAction)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpDashpotAction(f);
    return u.ptr;
}
