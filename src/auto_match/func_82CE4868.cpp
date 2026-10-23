// getVtablehkMonitorStreamColorTable, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkMonitorStreamColorTable (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkMonitorStreamColorTable -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkMonitorStreamColorTable : public hkReferencedObject {
public:
    hkMonitorStreamColorTable(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkMonitorStreamColorTable()
{
    union {
        void *ptr;
        char buf[sizeof(hkMonitorStreamColorTable)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkMonitorStreamColorTable(f);
    return u.ptr;
}
