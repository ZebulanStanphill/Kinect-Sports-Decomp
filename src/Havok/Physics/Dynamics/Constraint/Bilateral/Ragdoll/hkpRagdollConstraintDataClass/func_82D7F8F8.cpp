// getVtablehkpRagdollConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpRagdollConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpRagdollConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpRagdollConstraintData.h"

const void *HK_CALL getVtablehkpRagdollConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpRagdollConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpRagdollConstraintData(f);
    return u.ptr;
}
