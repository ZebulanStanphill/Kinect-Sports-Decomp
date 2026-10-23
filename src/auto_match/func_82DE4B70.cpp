// finishLoadedObjecthkpReorientAction: the finish function in hkpReorientAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

class hkpReorientAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpReorientAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    hkVector4 m_rotationAxis;   // +0x20
    hkVector4 m_upAxis;         // +0x30
    hkReal m_strength;          // +0x40
    hkReal m_damping;           // +0x44
};

void HK_CALL finishLoadedObjecthkpReorientAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpReorientAction(f);
}
