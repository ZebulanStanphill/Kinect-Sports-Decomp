// finishLoadedObjecthkpSpringAction: the finish function in hkpSpringAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

void HK_CALL finishLoadedObjecthkpSpringAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSpringAction(f);
}
