// getVtablehkpMotorAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpMotorAction).
#include "havok/hkBase.h"
#include "havok/hkpMotorAction.h"

const void *HK_CALL getVtablehkpMotorAction()
{
    union {
        void *ptr;
        char buf[sizeof(hkpMotorAction)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMotorAction(f);
    return u.ptr;
}
