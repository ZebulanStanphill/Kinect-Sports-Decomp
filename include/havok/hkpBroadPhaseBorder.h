// hkpBroadPhaseBorder (Physics/Dynamics/World/BroadPhaseBorder/hkpBroadPhaseBorder.h), 0x44 bytes: six
// zero-thickness phantoms on the faces of the world's broad-phase extents that catch the entities leaving
// it. The bases and their offsets are the game's RTTI (hkpWorldDeletionListener +0x8,
// hkpPhantomOverlapListener +0xC, hkpWorldPostSimulationListener +0x10); the members are those the constructor
// (??0hkpBroadPhaseBorder@@QAA@PAVhkpWorld@@HVhkBool@@@Z, 82D8DDB8) sets. The destructor is out of line
// (??1hkpBroadPhaseBorder@@UAA@XZ, 82D8E228). deactivate is Havok's name for what the destructor and
// worldDeletedCallback (82D8DB38) do inline.
#ifndef HAVOK_HKPBROADPHASEBORDER_H
#define HAVOK_HKPBROADPHASEBORDER_H

#include "havok/hkBase.h"
#include "havok/hkpPhantom.h"
#include "havok/hkpPhantomOverlapListener.h"
#include "havok/hkpWorld.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpWorldPostSimulationListener.h"

class hkpEntity;

class hkpBroadPhaseBorder : public hkReferencedObject,
                            public hkpWorldDeletionListener,
                            public hkpPhantomOverlapListener,
                            public hkpWorldPostSimulationListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_WORLD);
    hkpBroadPhaseBorder(hkpWorld *world, int type, hkBool postponeAndSortCallbacks);
    virtual ~hkpBroadPhaseBorder();
    virtual void worldDeletedCallback(hkpWorld *world);
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event);
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event);
    virtual void postSimulationCallback(hkpWorld *world);

    HK_FORCE_INLINE void deactivate()
    {
        if (m_world) {
            m_world->removePhantomBatch(m_phantoms, 6);
            for (int i = 0; i < 6; i++) {
                m_phantoms[i]->removePhantomOverlapListener(this);
                m_phantoms[i]->removeReference();
                m_phantoms[i] = HK_NULL;
            }
            static_cast<hkpWorldDeletionListener *>(this)->worldDeletedCallback(m_world);
            m_world = HK_NULL;
        }
    }

    hkpWorld *m_world;                                 // +0x14
    hkpPhantom *m_phantoms[6];                         // +0x18
    int m_type;                                        // +0x30 hkEnum<hkpWorldCinfo::BroadPhaseBorderBehaviour, hkInt32>
    hkBool m_postponeAndSortCallbacks;                 // +0x34
    hkArray<hkpEntity *> m_entitiesExitingBroadPhase;  // +0x38
};

#endif
