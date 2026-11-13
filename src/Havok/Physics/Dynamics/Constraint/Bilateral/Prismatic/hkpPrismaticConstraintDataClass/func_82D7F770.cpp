// getVtablehkpPrismaticConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPrismaticConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPrismaticConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpPrismaticConstraintData : public hkpConstraintData {
public:
    hkpPrismaticConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpPrismaticConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPrismaticConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPrismaticConstraintData(f);
    return u.ptr;
}
