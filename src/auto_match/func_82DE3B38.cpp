// getVtablehkpAngularDashpotAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpAngularDashpotAction).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpAngularDashpotAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpAngularDashpotAction(hkFinishLoadedObjectFlag f) : hkpBinaryAction(f) {}

    hkVector4 m_rotation;   // +0x20 (an hkQuaternion)
    hkReal m_strength;      // +0x30
    hkReal m_damping;       // +0x34
};

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
