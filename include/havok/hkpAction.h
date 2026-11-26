// hkpAction, hkpUnaryAction and hkpBinaryAction
// (Physics/Dynamics/Action/hkpAction.h, hkpUnaryAction.h, hkpBinaryAction.h).
#ifndef HAVOK_HKPACTION_H
#define HAVOK_HKPACTION_H

#include "havok/hkBase.h"
#include "havok/hkStringPtr.h"

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity;

// 0x18 bytes
class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpAction(hkUlong userData = 0) : m_world(HK_NULL), m_island(HK_NULL), m_userData(userData) {}
    hkpAction(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_name(f) {}
    virtual ~hkpAction() {}
    // Assigns the name through hkStringPtr::operator=(const char *) (the constructors of the game's
    // actions end with that call on this + 0x14).
    void setName(const char *name) { m_name = name; }

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

// 0x1C bytes. The destructor releases the entity.
class hkpUnaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpUnaryAction(hkpEntity *entity = HK_NULL, hkUlong userData = 0);
    hkpUnaryAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}
    virtual ~hkpUnaryAction();

    hkpEntity *m_entity;   // +0x18
};

// 0x20 bytes
class hkpBinaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData = 0);
    hkpBinaryAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}
    virtual ~hkpBinaryAction();

    hkpEntity *m_entityA;   // +0x18
    hkpEntity *m_entityB;   // +0x1C
};

#endif
