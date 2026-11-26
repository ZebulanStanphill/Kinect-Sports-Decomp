// finishLoadedObjecthkMonitorStreamColorTable: the finish function in hkMonitorStreamColorTable's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkMonitorStreamColorTable -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkMonitorStreamColorTable.h"

void HK_CALL finishLoadedObjecthkMonitorStreamColorTable(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkMonitorStreamColorTable(f);
}
