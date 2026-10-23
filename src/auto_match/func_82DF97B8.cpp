// getVtablehkpVehicleDefaultEngine, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultEngine (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultEngine -> hkpVehicleEngine -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleEngine : public hkReferencedObject {
public:
    hkpVehicleEngine(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultEngine : public hkpVehicleEngine {
public:
    hkpVehicleDefaultEngine(hkFinishLoadedObjectFlag flag) : hkpVehicleEngine(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDefaultEngine()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultEngine)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultEngine(f);
    return u.ptr;
}
