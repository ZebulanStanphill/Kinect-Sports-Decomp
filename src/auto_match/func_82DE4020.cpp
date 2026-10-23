// getVtablehkpDisplayBindingDataPhysicsSystem, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpDisplayBindingData::PhysicsSystem (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: PhysicsSystem@hkpDisplayBindingData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpDisplayBindingData {
public:
    class PhysicsSystem : public hkReferencedObject {
    public:
        PhysicsSystem(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    };
};

const void *HK_CALL getVtablehkpDisplayBindingDataPhysicsSystem()
{
    union {
        void *ptr;
        char buf[sizeof(hkpDisplayBindingData::PhysicsSystem)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpDisplayBindingData::PhysicsSystem(f);
    return u.ptr;
}
