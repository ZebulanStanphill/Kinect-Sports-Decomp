// getVtablehkpPositionConstraintMotor, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPositionConstraintMotor (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPositionConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpPositionConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    hkpPositionConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
};

const void *HK_CALL getVtablehkpPositionConstraintMotor()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPositionConstraintMotor)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPositionConstraintMotor(f);
    return u.ptr;
}
