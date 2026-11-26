// getVtablehkpDashpotAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpDashpotAction).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpDashpotAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpDashpotAction(hkFinishLoadedObjectFlag f) : hkpBinaryAction(f) {}

    hkVector4 m_point[2];   // +0x20
    hkReal m_strength;      // +0x40
    hkReal m_damping;       // +0x44
    hkVector4 m_impulse;    // +0x50
};

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
