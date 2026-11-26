// hkpConstraintCollisionFilter's scalar deleting destructor (Physics/Collide/Filter/Constraint/
// hkpConstraintCollisionFilter.h): the empty user-written destructor is inlined (own vtables, then
// hkpConstraintListener's inline destructor at +0x40), the base destructor ~hkpPairCollisionFilter is called.
#include "havok/hkpConstraintCollisionFilter.h"

hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
{
}
