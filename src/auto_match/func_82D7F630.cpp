// getVtablehkpPointToPlaneConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPointToPlaneConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPointToPlaneConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpPointToPlaneConstraintData : public hkpConstraintData {
public:
    hkpPointToPlaneConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpPointToPlaneConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPointToPlaneConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPointToPlaneConstraintData(f);
    return u.ptr;
}
