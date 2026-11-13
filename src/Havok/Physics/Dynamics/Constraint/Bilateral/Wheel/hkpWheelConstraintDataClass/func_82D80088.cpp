// getVtablehkpWheelConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpWheelConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpWheelConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpWheelConstraintData : public hkpConstraintData {
public:
    hkpWheelConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpWheelConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpWheelConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpWheelConstraintData(f);
    return u.ptr;
}
