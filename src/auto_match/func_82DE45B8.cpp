// finishLoadedObjecthkpMotorAction: the finish function in hkpMotorAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

void HK_CALL finishLoadedObjecthkpMotorAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMotorAction(f);
}
