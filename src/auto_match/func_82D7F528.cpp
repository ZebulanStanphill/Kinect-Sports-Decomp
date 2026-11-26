// finishLoadedObjecthkpPointToPathConstraintData: hkpPointToPathConstraintData's hkTypeInfo finish function
// (HK_REFLECTION_DEFINE_VIRTUAL). The finish constructor stores the vtable and finishes the bridge atom.
#include "havok/hkBase.h"
#include "havok/hkpPointToPathConstraintData.h"

extern "C" void HK_CALL fn_82D7F528(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPointToPathConstraintData(f);
}
