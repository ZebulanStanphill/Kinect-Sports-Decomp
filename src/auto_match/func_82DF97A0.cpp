// finishLoadedObjecthkpVehicleDefaultEngine: the finish function in hkpVehicleDefaultEngine's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultEngine -> hkpVehicleEngine -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleEngine : public hkReferencedObject {
public:
    hkpVehicleEngine(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultEngine : public hkpVehicleEngine {
public:
    hkpVehicleDefaultEngine(hkFinishLoadedObjectFlag flag) : hkpVehicleEngine(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleDefaultEngine(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultEngine(f);
}
