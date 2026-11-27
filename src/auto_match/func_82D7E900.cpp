// finishLoadedObjecthkpConstraintChainInstance: the finish function in hkpConstraintChainInstance's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in
// Havok): runs the out-of-line finish constructor (82D7E9A8) on the loaded object.
#include "havok/hkpConstraintChainInstance.h"

extern "C" void fn_82D7E900(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConstraintChainInstance(f);
}
