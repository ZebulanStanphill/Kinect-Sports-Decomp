// getVtablehkpHingeConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpHingeConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpHingeConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpHingeConstraintData : public hkpConstraintData {
public:
    hkpHingeConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpHingeConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpHingeConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpHingeConstraintData(f);
    return u.ptr;
}
