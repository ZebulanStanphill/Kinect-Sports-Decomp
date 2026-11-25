#include "havok/hkBase.h"

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity : public hkReferencedObject {
};

// hkpAction (Physics/Dynamics/Action/hkpAction.h): +0x8 m_world, +0xC m_island, +0x10 m_userData,
// +0x14 m_name. Its destructor is user-written and inline (it stores hkpAction's vtable).
class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpAction(hkUlong userData = 0) : m_world(HK_NULL), m_island(HK_NULL), m_userData(userData) {}
    virtual ~hkpAction() {}

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

// hkpUnaryAction (Physics/Dynamics/Action/hkpUnaryAction.h): hkpAction + hkpEntity *m_entity (+0x18).
// The destructor is out of line in the game as fn_82D95638, which keeps its fn_ name (a Matching unit,
// func_8260B058, calls it); it is defined inline here so that units can expand it.
class hkpUnaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpUnaryAction(hkpEntity *entity = HK_NULL, hkUlong userData = 0);
    HK_FORCE_INLINE virtual ~hkpUnaryAction()
    {
        if (m_entity) {
            m_entity->removeReference();
            m_entity = HK_NULL;
        }
    }

    hkpEntity *m_entity;   // +0x18
};

void emitVtable_82D95738(hkpUnaryAction *p) { p->hkpUnaryAction::~hkpUnaryAction(); }
