// finishLoadedObjecthkpDisplayBindingDataRigidBody: the finish function in hkpDisplayBindingData::RigidBody's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// RigidBody@hkpDisplayBindingData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpDisplayBindingData {
public:
    class RigidBody : public hkReferencedObject {
    public:
        RigidBody(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    };
};

void HK_CALL finishLoadedObjecthkpDisplayBindingDataRigidBody(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDisplayBindingData::RigidBody(f);
}
