// finishLoadedObjecthkpPulleyConstraintData: the finish function in hkpPulleyConstraintData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpPulleyConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpPulleyConstraintData.h"

void HK_CALL finishLoadedObjecthkpPulleyConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPulleyConstraintData(f);
}
