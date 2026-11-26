// finishLoadedObjecthkpPositionConstraintMotor: the finish function in hkpPositionConstraintMotor's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpPositionConstraintMotor -> hkpLimitedForceConstraintMotor -> hkpConstraintMotor -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpPositionConstraintMotor.h"

void HK_CALL finishLoadedObjecthkpPositionConstraintMotor(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPositionConstraintMotor(f);
}
