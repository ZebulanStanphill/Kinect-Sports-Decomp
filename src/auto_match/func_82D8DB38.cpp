// hkpBroadPhaseBorder::deactivate() (Physics/Dynamics/World/BroadPhaseBorder/hkpBroadPhaseBorder.cpp; slot +0x10
// of ??_7hkpBroadPhaseBorder@@6BhkReferencedObject@@@, also of the game's subclass at lbl_821C40C4): when still
// in a world, removes the six border phantoms from it (hkpWorld::removePhantomBatch, fn_82D86660), stops
// listening to them and releases them, then runs its own world-deleted callback. Havok code, /O2.
// The class is the one func_82D8DDB8.cpp writes out (its constructor); the body is an inline member so that
// `this` converts to the listener base without a null test.
#include "havok/hkBase.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpPhantomOverlapListener.h"
#include "havok/hkpPhantom.h"

class hkpWorldPostSimulationListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldPostSimulationListener() {}
    virtual void postSimulationCallback(hkpWorld *world);
    virtual void inactiveEntityMovedCallback(void *entity);
};

extern "C" void fn_82D86660(hkpWorld *world, hkpPhantom *const *phantoms, int numPhantoms);   // hkpWorld::removePhantomBatch

class hkpBroadPhaseBorder : public hkReferencedObject,
                            public hkpWorldDeletionListener,
                            public hkpPhantomOverlapListener,
                            public hkpWorldPostSimulationListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_WORLD);
    virtual void worldDeletedCallback(hkpWorld *world);
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event);
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event);
    virtual void postSimulationCallback(hkpWorld *world);

    HK_FORCE_INLINE void deactivate()
    {
        if (m_world)
        {
            fn_82D86660(m_world, m_phantoms, 6);
            for (int i = 0; i < 6; i++)
            {
                m_phantoms[i]->removePhantomOverlapListener(this);
                m_phantoms[i]->removeReference();
                m_phantoms[i] = HK_NULL;
            }
            static_cast<hkpWorldDeletionListener *>(this)->worldDeletedCallback(m_world);
            m_world = HK_NULL;
        }
    }

    hkpWorld *m_world;                            // +0x14
    hkpPhantom *m_phantoms[6];                    // +0x18
    int m_type;                                   // +0x30 hkEnum<BroadPhaseBorderBehaviour, hkInt32>
    hkBool m_postponeAndSortCallbacks;            // +0x34
    hkArray<void *> m_entitiesExitingBroadPhase;  // +0x38
};

extern "C" void fn_82D8DB38(hkpBroadPhaseBorder *self)
{
    self->deactivate();
}
