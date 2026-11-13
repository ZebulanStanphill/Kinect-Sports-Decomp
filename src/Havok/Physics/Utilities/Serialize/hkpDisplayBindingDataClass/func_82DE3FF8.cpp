// getVtablehkpDisplayBindingDataRigidBody, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpDisplayBindingData::RigidBody (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: RigidBody@hkpDisplayBindingData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpDisplayBindingData {
public:
    class RigidBody : public hkReferencedObject {
    public:
        RigidBody(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    };
};

const void *HK_CALL getVtablehkpDisplayBindingDataRigidBody()
{
    union {
        void *ptr;
        char buf[sizeof(hkpDisplayBindingData::RigidBody)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpDisplayBindingData::RigidBody(f);
    return u.ptr;
}
