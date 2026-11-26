// hkpAction, hkpUnaryAction and hkpBinaryAction
// (Physics/Dynamics/Action/hkpAction.h, hkpUnaryAction.h, hkpBinaryAction.h).
//
// The action interface is five virtual functions after hkReferencedObject's three slots. In
// ??_7hkpAction@@6B@ (8213A774, 8 slots) +0xC, +0x10, +0x18 and +0x1C are _purecall and +0x14 is the
// shared empty function 82BA02A8. What each slot is follows from the classes that fill it:
// hkpMotorAction's +0xC (82DF1FC0) applies the spin, hkpConstraintChainInstanceAction's +0x10 (82D9CFE0)
// copies the chained entities into the array, its +0x18 (82D9CFC8) forwards to the instance's
// entityRemovedCallback, and the +0x1C functions build a copy from two arrays. The names and signatures
// follow Havok's header.
#ifndef HAVOK_HKPACTION_H
#define HAVOK_HKPACTION_H

#include "havok/hkBase.h"
#include "havok/hkStringPtr.h"

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity;
class hkpPhantom;
struct hkStepInfo;   // a struct in the game's mangled names (...ABUhkStepInfo@@...)

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

    virtual void applyAction(const hkStepInfo &stepInfo) = 0;                        // +0xC
    virtual void getEntities(hkArray<hkpEntity *> &entitiesOut) = 0;                 // +0x10
    virtual void getPhantoms(hkArray<hkpPhantom *> &phantomsOut) {}                  // +0x14
    virtual void entityRemovedCallback(hkpEntity *entity) = 0;                       // +0x18
    virtual hkpAction *clone(const hkArray<hkpEntity *> &newEntities,
                             const hkArray<hkpPhantom *> &newPhantoms) const = 0;    // +0x1C

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

// 0x1C bytes. The destructor releases the entity. ??_7hkpUnaryAction@@6B@ (82141714) fills getEntities
// (82D956A8) and entityRemovedCallback (82D95510); applyAction and clone stay _purecall.
class hkpUnaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpUnaryAction(hkpEntity *entity = HK_NULL, hkUlong userData = 0);
    hkpUnaryAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}
    virtual ~hkpUnaryAction();
    virtual void getEntities(hkArray<hkpEntity *> &entitiesOut);   // +0x10
    virtual void entityRemovedCallback(hkpEntity *entity);         // +0x18

    hkpEntity *m_entity;   // +0x18
};

// 0x20 bytes. ??_7hkpBinaryAction@@6B@ (82142F5C) fills getEntities (830B3258) and entityRemovedCallback
// (830B3010); applyAction and clone stay _purecall.
class hkpBinaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData = 0);
    hkpBinaryAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}
    virtual ~hkpBinaryAction();
    virtual void getEntities(hkArray<hkpEntity *> &entitiesOut);   // +0x10
    virtual void entityRemovedCallback(hkpEntity *entity);         // +0x18

    hkpEntity *m_entityA;   // +0x18
    hkpEntity *m_entityB;   // +0x1C
};

#endif
