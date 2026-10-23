// getVtablehkpFixedRigidMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpFixedRigidMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpFixedRigidMotion -> hkpKeyframedRigidMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpFixedRigidMotion : public hkpKeyframedRigidMotion {
public:
    hkpFixedRigidMotion(hkFinishLoadedObjectFlag flag) : hkpKeyframedRigidMotion(flag) {}
};

const void *HK_CALL getVtablehkpFixedRigidMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpFixedRigidMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpFixedRigidMotion(f);
    return u.ptr;
}
