// getVtablehkpSpringDamperConstraintMotor, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSpringDamperConstraintMotor (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSpringDamperConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

class hkpSpringDamperConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    hkpSpringDamperConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
};

const void *HK_CALL getVtablehkpSpringDamperConstraintMotor()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSpringDamperConstraintMotor)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSpringDamperConstraintMotor(f);
    return u.ptr;
}
