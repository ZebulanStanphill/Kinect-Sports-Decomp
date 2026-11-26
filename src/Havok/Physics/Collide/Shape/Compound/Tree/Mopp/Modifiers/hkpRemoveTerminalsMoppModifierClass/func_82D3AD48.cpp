// finishLoadedObjecthkpRemoveTerminalsMoppModifier: the finish function in hkpRemoveTerminalsMoppModifier's
// hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkReferencedObject at +0, the
// interface hkpMoppModifier at +0x8. Its finish constructor stores the interface's vtable, then both of
// the class's (hkReferencedObject's store is dead and removed).
#include "havok/hkBase.h"
#include "havok/hkpRemoveTerminalsMoppModifier.h"

void HK_CALL finishLoadedObjecthkpRemoveTerminalsMoppModifier(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRemoveTerminalsMoppModifier(f);
}
