// finishLoadedObjecthkpSpringDamperConstraintMotor: the finish function in hkpSpringDamperConstraintMotor's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpSpringDamperConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

class hkpSpringDamperConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    hkpSpringDamperConstraintMotor(hkFinishLoadedObjectFlag flag) : hkpLimitedForceConstraintMotor(flag) {}
};

void HK_CALL finishLoadedObjecthkpSpringDamperConstraintMotor(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSpringDamperConstraintMotor(f);
}
