// getVtablehkpPulleyConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPulleyConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPulleyConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpPulleyConstraintData : public hkpConstraintData {
public:
    hkpPulleyConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpPulleyConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPulleyConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPulleyConstraintData(f);
    return u.ptr;
}
