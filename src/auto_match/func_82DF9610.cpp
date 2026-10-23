// finishLoadedObjecthkpVehicleDefaultAnalogDriverInput: the finish function in hkpVehicleDefaultAnalogDriverInput's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultAnalogDriverInput -> hkpVehicleDriverInput -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleDriverInput : public hkReferencedObject {
public:
    hkpVehicleDriverInput(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultAnalogDriverInput : public hkpVehicleDriverInput {
public:
    hkpVehicleDefaultAnalogDriverInput(hkFinishLoadedObjectFlag flag) : hkpVehicleDriverInput(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleDefaultAnalogDriverInput(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultAnalogDriverInput(f);
}
