// getVtablehkpRagdollLimitsData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpRagdollLimitsData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpRagdollLimitsData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpRagdollLimitsData : public hkpConstraintData {
public:
    hkpRagdollLimitsData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpRagdollLimitsData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpRagdollLimitsData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpRagdollLimitsData(f);
    return u.ptr;
}
