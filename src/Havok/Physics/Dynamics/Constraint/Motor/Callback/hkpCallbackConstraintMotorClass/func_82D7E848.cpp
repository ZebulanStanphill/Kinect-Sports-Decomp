// getVtablehkpCallbackConstraintMotor, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpCallbackConstraintMotor (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpCallbackConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpCallbackConstraintMotor.h"

const void *HK_CALL getVtablehkpCallbackConstraintMotor()
{
    union {
        void *ptr;
        char buf[sizeof(hkpCallbackConstraintMotor)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpCallbackConstraintMotor(f);
    return u.ptr;
}
