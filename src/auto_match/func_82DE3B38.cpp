// getVtablehkpAngularDashpotAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpAngularDashpotAction).
#include "havok/hkBase.h"
#include "havok/hkpAngularDashpotAction.h"

const void *HK_CALL getVtablehkpAngularDashpotAction()
{
    union {
        void *ptr;
        char buf[sizeof(hkpAngularDashpotAction)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpAngularDashpotAction(f);
    return u.ptr;
}
