// getVtablehkpStiffSpringConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpStiffSpringConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpStiffSpringConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpStiffSpringConstraintData : public hkpConstraintData {
public:
    hkpStiffSpringConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpStiffSpringConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpStiffSpringConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpStiffSpringConstraintData(f);
    return u.ptr;
}
