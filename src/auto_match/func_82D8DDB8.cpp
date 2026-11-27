// hkpBroadPhaseBorder::hkpBroadPhaseBorder(hkpWorld *, BroadPhaseBorderBehaviour, hkBool)
// (Physics/Dynamics/World/BroadPhaseBorder/hkpBroadPhaseBorder.cpp). RTTI bases: hkReferencedObject,
// hkpWorldDeletionListener (+0x8), hkpPhantomOverlapListener (+0xc), hkpWorldPostSimulationListener
// (+0x10). After registering with the world it puts six zero-thickness hkpAabbPhantoms on the faces
// of the broadphase extents (+X, -X, +Y, -Y, +Z, -Z), marks them as border phantoms (broadphase type
// 3), listens to them and adds them to the world. Built with /O2 /QVMXReserve (flag file).
//
// The out-of-line hkpWorld methods (addPhantom through the header's inline wrapper, the two add-listener
// functions) and hkpPhantom::addPhantomOverlapListener are called one inline level down, through local inline
// helpers. Calling them directly compiles to the same calls but changes how the scheduler orders the
// hkVector4::set() temporaries of the later phantoms.
#include "havok/hkBase.h"
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpBroadPhaseBorder.h"

// hkpPhantom::addPhantomOverlapListener one inline level down (see above).
static HK_FORCE_INLINE void addOverlapListener(hkpPhantom *phantom, hkpPhantomOverlapListener *listener)
{
    phantom->addPhantomOverlapListener(listener);
}

// hkpWorld's two add-listener calls one inline level down (see above).
static HK_FORCE_INLINE void addDeletionListener(hkpWorld *w, hkpWorldDeletionListener *l) { w->addWorldDeletionListener(l); }
static HK_FORCE_INLINE void addPostSimulationListener(hkpWorld *w, hkpWorldPostSimulationListener *l)
{
    w->addWorldPostSimulationListener(l);
}

hkpBroadPhaseBorder::hkpBroadPhaseBorder(hkpWorld *world, int type, hkBool postponeAndSortCallbacks)
{
    m_world = world;
    m_type = type;
    m_postponeAndSortCallbacks = postponeAndSortCallbacks;
    addReference();
    addDeletionListener(m_world, this);
    addPostSimulationListener(m_world, this);

    hkVector4 mi;

    mi = m_world->m_broadPhaseExtents[0];
    hkVector4 ma;
    ma = m_world->m_broadPhaseExtents[1];
    hkAabb aabb;
    {
        aabb.m_min.set(ma(0), mi(1), mi(2));
        aabb.m_max.set(ma(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = new hkpAabbPhantom(aabb, 0);
        phantom->m_collidable.m_broadPhaseHandle.m_type = 3;
        addOverlapListener(phantom, this);
        m_phantoms[0] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), mi(2));
        aabb.m_max.set(mi(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = new hkpAabbPhantom(aabb, 0);
        phantom->m_collidable.m_broadPhaseHandle.m_type = 3;
        addOverlapListener(phantom, this);
        m_phantoms[1] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), ma(1), mi(2));
        aabb.m_max.set(ma(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = new hkpAabbPhantom(aabb, 0);
        phantom->m_collidable.m_broadPhaseHandle.m_type = 3;
        addOverlapListener(phantom, this);
        m_phantoms[2] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), mi(2));
        aabb.m_max.set(ma(0), mi(1), ma(2));
        hkpAabbPhantom *phantom = new hkpAabbPhantom(aabb, 0);
        phantom->m_collidable.m_broadPhaseHandle.m_type = 3;
        addOverlapListener(phantom, this);
        m_phantoms[3] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), ma(2));
        aabb.m_max.set(ma(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = new hkpAabbPhantom(aabb, 0);
        phantom->m_collidable.m_broadPhaseHandle.m_type = 3;
        addOverlapListener(phantom, this);
        m_phantoms[4] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), mi(2));
        aabb.m_max.set(ma(0), ma(1), mi(2));
        hkpAabbPhantom *phantom = new hkpAabbPhantom(aabb, 0);
        phantom->m_collidable.m_broadPhaseHandle.m_type = 3;
        addOverlapListener(phantom, this);
        m_phantoms[5] = phantom;
        world->addPhantom(phantom);
    }
}
