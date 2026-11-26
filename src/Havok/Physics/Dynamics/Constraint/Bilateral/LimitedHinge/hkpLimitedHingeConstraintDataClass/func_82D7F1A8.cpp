// finishLoadedObjecthkpLimitedHingeConstraintData: the finish function in hkpLimitedHingeConstraintData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpLimitedHingeConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpLimitedHingeConstraintData.h"

void HK_CALL finishLoadedObjecthkpLimitedHingeConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpLimitedHingeConstraintData(f);
}
