// finishLoadedObjecthkpAngularDashpotAction: the finish function in hkpAngularDashpotAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

void HK_CALL finishLoadedObjecthkpAngularDashpotAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpAngularDashpotAction(f);
}
