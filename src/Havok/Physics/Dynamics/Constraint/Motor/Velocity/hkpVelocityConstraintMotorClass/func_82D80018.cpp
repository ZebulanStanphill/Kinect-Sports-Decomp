// getVtablehkpVelocityConstraintMotor, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVelocityConstraintMotor (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVelocityConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

class hkpVelocityConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    hkpVelocityConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
};

const void *HK_CALL getVtablehkpVelocityConstraintMotor()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVelocityConstraintMotor)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVelocityConstraintMotor(f);
    return u.ptr;
}
