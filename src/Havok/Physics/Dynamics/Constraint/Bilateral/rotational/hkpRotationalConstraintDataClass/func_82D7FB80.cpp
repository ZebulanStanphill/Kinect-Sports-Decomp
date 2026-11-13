// getVtablehkpRotationalConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpRotationalConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpRotationalConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpRotationalConstraintData : public hkpConstraintData {
public:
    hkpRotationalConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpRotationalConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpRotationalConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpRotationalConstraintData(f);
    return u.ptr;
}
