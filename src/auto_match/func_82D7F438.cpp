// finishLoadedObjecthkpPhysicsSystem: hkpPhysicsSystem's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
// hkpPhysicsSystem (Physics/Dynamics/World/hkpPhysicsSystem.h): four hkArrays, then m_name (+0x38, finished out
// of line: fn_82CED308), m_userData, m_active.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"

void HK_CALL finishLoadedObjecthkpPhysicsSystem(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPhysicsSystem(f);
}
