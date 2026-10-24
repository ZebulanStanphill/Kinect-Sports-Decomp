// hkpBroadPhaseBorder::hkpBroadPhaseBorder(hkpWorld *, BroadPhaseBorderBehaviour, hkBool)
// (Physics/Dynamics/World/BroadPhaseBorder/hkpBroadPhaseBorder.cpp). RTTI bases: hkReferencedObject,
// hkpWorldDeletionListener (+0x8), hkpPhantomOverlapListener (+0xc), hkpWorldPostSimulationListener
// (+0x10). After registering with the world it puts six zero-thickness hkpAabbPhantoms on the faces
// of the broadphase extents (+X, -X, +Y, -Y, +Z, -Z), marks them as border phantoms (broadphase type
// 3), listens to them and adds them to the world. Built with /O2 /QVMXReserve (flag file).
//
// The out-of-line hkpWorld and hkpPhantom methods keep their fn_ names and are called through inline
// member wrappers, as the source called them. Calling the fn_ functions directly compiles to the same
// calls but changes how the scheduler orders the hkVector4::set() temporaries of the later phantoms.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
union hkQuadRealUnion { hkReal r[4]; hkQuadReal q; };

class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4() {}
    HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void set(hkReal a, hkReal b, hkReal c, hkReal d = hkReal(0))
    {
        hkQuadRealUnion u;
        u.r[0] = a; u.r[1] = b; u.r[2] = c; u.r[3] = d;
        m_quad = u.q;
    }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpWorld;
class hkpPhantom;
class hkpAabbPhantom;
class hkpWorldDeletionListener;
class hkpPhantomOverlapListener;
class hkpWorldPostSimulationListener;

extern "C" {
void fn_82D841E0(hkpWorld *world, hkpWorldDeletionListener *l);         // hkpWorld::addWorldDeletionListener
void fn_82D83F88(hkpWorld *world, hkpWorldPostSimulationListener *l);   // hkpWorld::addWorldPostSimulationListener
hkpPhantom *fn_82D83B68(hkpWorld *world, hkpPhantom *phantom);          // hkpWorld::addPhantom
hkpAabbPhantom *fn_82D8D6C0(void *self, const hkAabb &aabb, hkUint32 collisionFilterInfo);  // hkpAabbPhantom::hkpAabbPhantom
void fn_82D9A5F8(hkpPhantom *phantom, hkpPhantomOverlapListener *l);    // hkpPhantom::addPhantomOverlapListener
}

class hkpWorldDeletionListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldDeletionListener() {}
    virtual void worldDeletedCallback(hkpWorld *world);
    virtual void worldRemoveAllCallback(hkpWorld *world);
};

class hkpPhantomOverlapListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpPhantomOverlapListener() {}
    virtual void collidableAddedCallback(const void *event);
    virtual void collidableRemovedCallback(const void *event);
};

class hkpWorldPostSimulationListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldPostSimulationListener() {}
    virtual void postSimulationCallback(hkpWorld *world);
    virtual void inactiveEntityMovedCallback(void *entity);
};

class hkpWorld : public hkReferencedObject {
public:
    HK_FORCE_INLINE void addWorldDeletionListener(hkpWorldDeletionListener *l) { fn_82D841E0(this, l); }
    HK_FORCE_INLINE void addWorldPostSimulationListener(hkpWorldPostSimulationListener *l) { fn_82D83F88(this, l); }
    HK_FORCE_INLINE hkpPhantom *addPhantom(hkpPhantom *phantom) { return fn_82D83B68(this, phantom); }

    char m_pad08[0x308];
    hkVector4 m_broadPhaseExtents[2];   // +0x310
};

class hkpPhantom : public hkReferencedObject {
public:
    HK_FORCE_INLINE void addPhantomOverlapListener(hkpPhantomOverlapListener *l) { fn_82D9A5F8(this, l); }

    char m_pad08[0x20];
    hkInt8 m_broadPhaseType;   // +0x28 m_collidable.m_broadPhaseHandle.m_type
};

class hkpAabbPhantom : public hkpPhantom {
};

class hkpBroadPhaseBorder : public hkReferencedObject,
                            public hkpWorldDeletionListener,
                            public hkpPhantomOverlapListener,
                            public hkpWorldPostSimulationListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_WORLD);
    hkpBroadPhaseBorder(hkpWorld *world, int type, hkBool postponeAndSortCallbacks);
    virtual void worldDeletedCallback(hkpWorld *world);
    virtual void collidableAddedCallback(const void *event);
    virtual void collidableRemovedCallback(const void *event);
    virtual void postSimulationCallback(hkpWorld *world);

    hkpWorld *m_world;                          // +0x14
    hkpPhantom *m_phantoms[6];                  // +0x18
    int m_type;                                 // +0x30 hkEnum<BroadPhaseBorderBehaviour, hkInt32>
    hkBool m_postponeAndSortCallbacks;          // +0x34
    hkArray<void *> m_entitiesExitingBroadPhase;  // +0x38
};

hkpBroadPhaseBorder::hkpBroadPhaseBorder(hkpWorld *world, int type, hkBool postponeAndSortCallbacks)
{
    m_world = world;
    m_type = type;
    m_postponeAndSortCallbacks = postponeAndSortCallbacks;
    addReference();
    m_world->addWorldDeletionListener(this);
    m_world->addWorldPostSimulationListener(this);

    hkVector4 mi = m_world->m_broadPhaseExtents[0];
    hkVector4 ma = m_world->m_broadPhaseExtents[1];
    hkAabb aabb;
    {
        aabb.m_min.set(ma(0), mi(1), mi(2));
        aabb.m_max.set(ma(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = fn_82D8D6C0(hkpAabbPhantom::operator new(0xe0), aabb, 0);
        phantom->m_broadPhaseType = 3;
        phantom->addPhantomOverlapListener(this);
        m_phantoms[0] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), mi(2));
        aabb.m_max.set(mi(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = fn_82D8D6C0(hkpAabbPhantom::operator new(0xe0), aabb, 0);
        phantom->m_broadPhaseType = 3;
        phantom->addPhantomOverlapListener(this);
        m_phantoms[1] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), ma(1), mi(2));
        aabb.m_max.set(ma(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = fn_82D8D6C0(hkpAabbPhantom::operator new(0xe0), aabb, 0);
        phantom->m_broadPhaseType = 3;
        phantom->addPhantomOverlapListener(this);
        m_phantoms[2] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), mi(2));
        aabb.m_max.set(ma(0), mi(1), ma(2));
        hkpAabbPhantom *phantom = fn_82D8D6C0(hkpAabbPhantom::operator new(0xe0), aabb, 0);
        phantom->m_broadPhaseType = 3;
        phantom->addPhantomOverlapListener(this);
        m_phantoms[3] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), ma(2));
        aabb.m_max.set(ma(0), ma(1), ma(2));
        hkpAabbPhantom *phantom = fn_82D8D6C0(hkpAabbPhantom::operator new(0xe0), aabb, 0);
        phantom->m_broadPhaseType = 3;
        phantom->addPhantomOverlapListener(this);
        m_phantoms[4] = phantom;
        world->addPhantom(phantom);
    }
    {
        aabb.m_min.set(mi(0), mi(1), mi(2));
        aabb.m_max.set(ma(0), ma(1), mi(2));
        hkpAabbPhantom *phantom = fn_82D8D6C0(hkpAabbPhantom::operator new(0xe0), aabb, 0);
        phantom->m_broadPhaseType = 3;
        phantom->addPhantomOverlapListener(this);
        m_phantoms[5] = phantom;
        world->addPhantom(phantom);
    }
}
