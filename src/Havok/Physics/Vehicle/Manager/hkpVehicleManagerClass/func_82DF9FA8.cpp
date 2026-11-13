// getVtablehkpVehicleManager, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleManager (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleManager -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleManager : public hkReferencedObject {
public:
    hkpVehicleManager(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpVehicleManager()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleManager)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleManager(f);
    return u.ptr;
}
