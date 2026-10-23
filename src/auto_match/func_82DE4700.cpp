// finishLoadedObjecthkpMouseSpringAction: the finish function in hkpMouseSpringAction's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

class hkpMouseSpringAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpMouseSpringAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    hkVector4 m_positionInRbLocal;      // +0x20
    hkVector4 m_mousePositionInWorld;   // +0x30
    hkReal m_springDamping;             // +0x40
    hkReal m_springElasticity;          // +0x44
    hkReal m_maxRelativeForce;          // +0x48
    hkReal m_objectDamping;             // +0x4C
    hkUint32 m_shapeKey;                // +0x50
    hkArray<void *> m_applyCallbacks;   // +0x54, not serialized: default-constructed by the finish constructor
};

void HK_CALL finishLoadedObjecthkpMouseSpringAction(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMouseSpringAction(f);
}
