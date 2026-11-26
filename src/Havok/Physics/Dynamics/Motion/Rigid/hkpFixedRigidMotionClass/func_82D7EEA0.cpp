// getVtablehkpFixedRigidMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpFixedRigidMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpFixedRigidMotion -> hkpKeyframedRigidMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

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
