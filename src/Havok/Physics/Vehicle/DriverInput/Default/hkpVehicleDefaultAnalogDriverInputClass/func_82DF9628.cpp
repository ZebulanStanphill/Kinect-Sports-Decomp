// getVtablehkpVehicleDefaultAnalogDriverInput, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultAnalogDriverInput (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultAnalogDriverInput -> hkpVehicleDriverInput -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultAnalogDriverInput.h"

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
