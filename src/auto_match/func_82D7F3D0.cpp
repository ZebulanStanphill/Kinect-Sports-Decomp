// finishLoadedObjecthkpMalleableConstraintData: the finish function in hkpMalleableConstraintData's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in
// Havok): runs the out-of-line finish constructor (82D98B10) on the loaded object.
#include "havok/hkpMalleableConstraintData.h"

extern "C" void fn_82D7F3D0(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMalleableConstraintData(f);
}
