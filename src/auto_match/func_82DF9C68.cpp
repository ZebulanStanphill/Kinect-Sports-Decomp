// finishLoadedObjecthkpVehicleInstance: the finish function in hkpVehicleInstance's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity;

// Physics/Dynamics/Action/hkpAction.h, hkpUnaryAction.h, hkpBinaryAction.h. hkpAction's finish constructor runs
// hkStringPtr's out-of-line finish constructor (fn_82CED308) for m_name.
class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpAction(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_name(f) {}

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

class hkpUnaryAction : public hkpAction {
public:
    hkpUnaryAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}

    hkpEntity *m_entity;   // +0x18
};

class hkpBinaryAction : public hkpAction {
public:
    hkpBinaryAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}

    hkpEntity *m_entityA;   // +0x18
    hkpEntity *m_entityB;   // +0x1C
};

class hkpVehicleInstance : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpVehicleInstance(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    char m_vehicleState[0xE0 - 0x1C];   // +0x1C: component pointers, wheel arrays and drive state (only the size, 0xE0, matters here)
};

void HK_CALL finishLoadedObjecthkpVehicleInstance(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleInstance(f);
}
