// getVtablehkpMaxSizeMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpMaxSizeMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpMaxSizeMotion -> hkpKeyframedRigidMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpMaxSizeMotion : public hkpKeyframedRigidMotion {
public:
    hkpMaxSizeMotion(hkFinishLoadedObjectFlag flag) : hkpKeyframedRigidMotion(flag) {}
};

const void *HK_CALL getVtablehkpMaxSizeMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpMaxSizeMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMaxSizeMotion(f);
    return u.ptr;
}
