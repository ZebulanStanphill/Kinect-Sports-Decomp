// getVtablehkpLimitedHingeConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpLimitedHingeConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpLimitedHingeConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    hkpLimitedHingeConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpLimitedHingeConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpLimitedHingeConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpLimitedHingeConstraintData(f);
    return u.ptr;
}
