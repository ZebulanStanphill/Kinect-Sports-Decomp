// getVtablehkpSpringAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpSpringAction).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpSpringAction : public hkpBinaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpSpringAction(hkFinishLoadedObjectFlag f) : hkpBinaryAction(f) {}

    hkVector4 m_lastForce;      // +0x20
    hkVector4 m_positionAinA;   // +0x30
    hkVector4 m_positionBinB;   // +0x40
    hkReal m_restLength;        // +0x50
    hkReal m_strength;          // +0x54
    hkReal m_damping;           // +0x58
    hkBool m_onCompression;     // +0x5C
    hkBool m_onExtension;       // +0x5D
};

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
