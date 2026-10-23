// getVtablehkpBallAndSocketConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpBallAndSocketConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpBallAndSocketConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpBallAndSocketConstraintData : public hkpConstraintData {
public:
    hkpBallAndSocketConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpBallAndSocketConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpBallAndSocketConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpBallAndSocketConstraintData(f);
    return u.ptr;
}
