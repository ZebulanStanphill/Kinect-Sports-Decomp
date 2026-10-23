// getVtablehkpVehicleData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleData : public hkReferencedObject {
public:
    hkpVehicleData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpVehicleData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleData(f);
    return u.ptr;
}
