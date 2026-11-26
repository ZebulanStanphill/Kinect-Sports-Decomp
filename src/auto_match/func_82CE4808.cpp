// cleanupLoadedObjecthkMonitorStreamColorTable: the cleanup function in hkMonitorStreamColorTable's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkMonitorStreamColorTable.h"

void HK_CALL cleanupLoadedObjecthkMonitorStreamColorTable(void *p)
{
    static_cast<hkMonitorStreamColorTable *>(p)->~hkMonitorStreamColorTable();
}
