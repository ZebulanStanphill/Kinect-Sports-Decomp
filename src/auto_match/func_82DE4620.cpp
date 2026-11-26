// getVtablehkpMotorAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpMotorAction).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpMotorAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpMotorAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    hkVector4 m_axis;       // +0x20
    hkReal m_spinRate;      // +0x30
    hkReal m_gain;          // +0x34
    hkBool m_active;        // +0x38
};

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
