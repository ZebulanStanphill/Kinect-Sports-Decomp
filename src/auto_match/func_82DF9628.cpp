// getVtablehkpVehicleDefaultAnalogDriverInput, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultAnalogDriverInput (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultAnalogDriverInput -> hkpVehicleDriverInput -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleDriverInput : public hkReferencedObject {
public:
    hkpVehicleDriverInput(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultAnalogDriverInput : public hkpVehicleDriverInput {
public:
    hkpVehicleDefaultAnalogDriverInput(hkFinishLoadedObjectFlag flag) : hkpVehicleDriverInput(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDefaultAnalogDriverInput()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultAnalogDriverInput)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultAnalogDriverInput(f);
    return u.ptr;
}
