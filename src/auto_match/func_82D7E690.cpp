// finishLoadedObjecthkpBreakableConstraintData: the finish function in hkpBreakableConstraintData's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in
// Havok): runs the out-of-line finish constructor (82D98400) on the loaded object.
#include "havok/hkpBreakableConstraintData.h"

extern "C" void fn_82D7E690(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBreakableConstraintData(f);
}
