// getVtablehkpHingeLimitsData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpHingeLimitsData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpHingeLimitsData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpHingeLimitsData : public hkpConstraintData {
public:
    hkpHingeLimitsData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

const void *HK_CALL getVtablehkpHingeLimitsData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpHingeLimitsData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpHingeLimitsData(f);
    return u.ptr;
}
