// finishLoadedObjecthkpDisplayBindingDataPhysicsSystem: the finish function in hkpDisplayBindingData::PhysicsSystem's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// PhysicsSystem@hkpDisplayBindingData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpDisplayBindingData {
public:
    class PhysicsSystem : public hkReferencedObject {
    public:
        PhysicsSystem(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    };
};

void HK_CALL finishLoadedObjecthkpDisplayBindingDataPhysicsSystem(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDisplayBindingData::PhysicsSystem(f);
}
