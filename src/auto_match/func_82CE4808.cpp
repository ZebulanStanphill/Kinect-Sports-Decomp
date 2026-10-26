// cleanupLoadedObjecthkMonitorStreamColorTable: the cleanup function in hkMonitorStreamColorTable's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkMonitorStreamColorTable {
public:
    virtual ~hkMonitorStreamColorTable();
};

void HK_CALL cleanupLoadedObjecthkMonitorStreamColorTable(void *p)
{
    static_cast<hkMonitorStreamColorTable *>(p)->~hkMonitorStreamColorTable();
}
