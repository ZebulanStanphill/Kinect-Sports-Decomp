// finishLoadedObjecthkpHingeConstraintData: the finish function in hkpHingeConstraintData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpHingeConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpHingeConstraintData.h"

void HK_CALL finishLoadedObjecthkpHingeConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpHingeConstraintData(f);
}
