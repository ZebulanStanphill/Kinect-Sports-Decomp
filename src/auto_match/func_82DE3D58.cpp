// finishLoadedObjecthkpDashpotAction: the finish function in hkpDashpotAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

void HK_CALL finishLoadedObjecthkpDashpotAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDashpotAction(f);
}
