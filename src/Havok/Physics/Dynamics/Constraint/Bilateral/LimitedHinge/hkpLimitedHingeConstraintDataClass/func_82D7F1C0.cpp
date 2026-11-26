// getVtablehkpLimitedHingeConstraintData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpLimitedHingeConstraintData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpLimitedHingeConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpLimitedHingeConstraintData.h"

const void *HK_CALL getVtablehkpLimitedHingeConstraintData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpLimitedHingeConstraintData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpLimitedHingeConstraintData(f);
    return u.ptr;
}
