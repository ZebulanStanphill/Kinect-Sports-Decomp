// getVtablehkpSpringDamperConstraintMotor, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSpringDamperConstraintMotor (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSpringDamperConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintMotor : public hkReferencedObject {
public:
    hkpConstraintMotor(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpLimitedForceConstraintMotor : public hkpConstraintMotor {
public:
    hkpLimitedForceConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpConstraintMotor(flag) {}
};

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
