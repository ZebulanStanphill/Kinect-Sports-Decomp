// finishLoadedObjecthkpRigidBody: the finish function in hkpRigidBody's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, Common/Base/Reflection/hkTypeInfo.h; static in Havok). hkpRigidBody's finish
// constructor is inline: it runs hkpEntity's (out of line) and then stores hkpRigidBody's vtable.
#include "havok/hkpRigidBody.h"

void HK_CALL finishLoadedObjecthkpRigidBody(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRigidBody(f);
}
