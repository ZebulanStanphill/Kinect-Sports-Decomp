// getVtablehkpPointToPathConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPointToPathConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPointToPathConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpPointToPathConstraintData : public hkpConstraintData {
public:
    hkpPointToPathConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpPointToPathConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPointToPathConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPointToPathConstraintData(f);
    return u.ptr;
}
