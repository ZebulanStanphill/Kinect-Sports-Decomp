// getVtablehkpCallbackConstraintMotor, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpCallbackConstraintMotor (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpCallbackConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpCallbackConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    hkpCallbackConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
};

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
