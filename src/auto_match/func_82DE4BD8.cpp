// getVtablehkpReorientAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpReorientAction).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpReorientAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpReorientAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    hkVector4 m_rotationAxis;   // +0x20
    hkVector4 m_upAxis;         // +0x30
    hkReal m_strength;          // +0x40
    hkReal m_damping;           // +0x44
};

const void *HK_CALL getVtablehkpReorientAction()
{
    union {
        void *ptr;
        char buf[sizeof(hkpReorientAction)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpReorientAction(f);
    return u.ptr;
}
