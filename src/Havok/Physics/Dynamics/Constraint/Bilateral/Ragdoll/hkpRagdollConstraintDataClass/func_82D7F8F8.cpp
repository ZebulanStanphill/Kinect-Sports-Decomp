// getVtablehkpRagdollConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpRagdollConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpRagdollConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpRagdollConstraintData : public hkpConstraintData {
public:
    hkpRagdollConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

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
