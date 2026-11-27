// finishLoadedObjecthkpGenericConstraintData: the finish function in hkpGenericConstraintData's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in
// Havok): runs the out-of-line finish constructor (82D9DF00) on the loaded object.
#include "havok/hkpGenericConstraintData.h"

extern "C" void fn_82D7EF40(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpGenericConstraintData(f);
}
