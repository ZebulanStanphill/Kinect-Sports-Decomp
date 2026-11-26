// getVtablehkpMouseSpringAction (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpMouseSpringAction).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpMouseSpringAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpMouseSpringAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    hkVector4 m_positionInRbLocal;      // +0x20
    hkVector4 m_mousePositionInWorld;   // +0x30
    hkReal m_springDamping;             // +0x40
    hkReal m_springElasticity;          // +0x44
    hkReal m_maxRelativeForce;          // +0x48
    hkReal m_objectDamping;             // +0x4C
    hkUint32 m_shapeKey;                // +0x50
    hkArray<void *> m_applyCallbacks;   // +0x54, not serialized: default-constructed by the finish constructor
};

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
