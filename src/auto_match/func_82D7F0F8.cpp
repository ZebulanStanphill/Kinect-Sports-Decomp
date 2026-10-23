// getVtablehkpKeyframedRigidMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpKeyframedRigidMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpKeyframedRigidMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpMotion : public hkReferencedObject {
public:
    hkpMotion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpKeyframedRigidMotion : public hkpMotion {
public:
    hkpKeyframedRigidMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

const void *HK_CALL getVtablehkpKeyframedRigidMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpKeyframedRigidMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpKeyframedRigidMotion(f);
    return u.ptr;
}
