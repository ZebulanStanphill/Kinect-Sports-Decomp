// hkpAabbTreeWorldManager::~hkpAabbTreeWorldManager (Physics/Internal/Collide/BroadPhase/TreeBroadPhase/
// hkpAabbTreeWorldManager.cpp). RTTI: hkpTreeWorldManager (hkReferencedObject) at +0, then the four world listener
// interfaces at +0x14, +0x18, +0x1C and +0x20. The body unregisters the listeners and deletes the owned objects; then
// the hkMap and hkArray members are destroyed, and the bases (the listener interfaces' vtables, then hkBaseObject's).
#include "havok/hkBase.h"

class hkpWorld;

// Havok's hkDeallocateChunk (Common/Base/Memory/Router/hkMemoryRouter.h): the pointer is an argument, so it is
// loaded before getInstance() is called.
template <typename TYPE>
HK_FORCE_INLINE void HK_CALL hkDeallocateChunk(TYPE *ptr, int numberOfObjects, HK_MEMORY_CLASS cl)
{
    hkMemoryRouter::getInstance().heap().blockFree(static_cast<void *>(ptr), numberOfObjects * int(sizeof(TYPE)));
}

// The world listener interfaces (Physics/Dynamics/World/Listener/...): roots without hkBaseObject, freed through the
// global operator delete.
class hkpEntityListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpEntityListener() {}
};
class hkpPhantomListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpPhantomListener() {}
};
class hkpIslandActivationListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpIslandActivationListener() {}
};
class hkpWorldPostSimulationListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldPostSimulationListener() {}
};

extern "C" {
void fn_82D81408(hkpWorld *world, hkpEntityListener *l);               // hkpWorld::removeEntityListener
void fn_82D81450(hkpWorld *world, hkpPhantomListener *l);              // hkpWorld::removePhantomListener
void fn_82D81498(hkpWorld *world, hkpIslandActivationListener *l);     // hkpWorld::removeIslandActivationListener
void fn_82D81528(hkpWorld *world, hkpWorldPostSimulationListener *l);  // hkpWorld::removeWorldPostSimulationListener
void fn_83083AA0(void *self);   // destructor of the 0x50-byte tree helper at +0x10
void fn_82CFBAD0(void *self);   // destructor of the 4-byte object at +0x6C
}

class hkpWorld {
public:
    void removeEntityListener(hkpEntityListener *l) { fn_82D81408(this, l); }
    void removePhantomListener(hkpPhantomListener *l) { fn_82D81450(this, l); }
    void removeIslandActivationListener(hkpIslandActivationListener *l) { fn_82D81498(this, l); }
    void removeWorldPostSimulationListener(hkpWorldPostSimulationListener *l) { fn_82D81528(this, l); }
};

// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>: polymorphic, deleted through its vtable.
class hkAabbTreeBase {
public:
    virtual ~hkAabbTreeBase();
};

// Non-virtual helpers with Havok's non-virtual class allocator (block size = sizeof) and out-of-line destructors.
class hkpTreeWorldManagerHelper {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkpTreeWorldManagerHelper);
    ~hkpTreeWorldManagerHelper() { fn_83083AA0(this); }
    hkUint32 m_data[0x50 / 4];
};

class hkpTreeWorldManagerRandom {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkpTreeWorldManagerRandom);
    ~hkpTreeWorldManagerRandom() { fn_82CFBAD0(this); }
    hkUint32 m_data;
};

class hkpTreeWorldManager : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpTreeWorldManager() {}

    int m_type;                               // +0x8
    hkAabbTreeBase *m_tree;                   // +0xC
    hkpTreeWorldManagerHelper *m_helper;      // +0x10
};

class hkpAabbTreeWorldManager : public hkpTreeWorldManager,
                                public hkpEntityListener,
                                public hkpPhantomListener,
                                public hkpIslandActivationListener,
                                public hkpWorldPostSimulationListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpAabbTreeWorldManager();

    hkBool m_use;                             // +0x24
    hkpWorld *m_world;                        // +0x28
    hkUint32 m_pad2C[(0x3C - 0x2C) / 4];
    char *m_block;                            // +0x3C, a 16-byte block
    hkUint32 m_pad40;
    hkArray<int> m_data;                      // +0x44
    hkMap<hkUlong, hkUlong> m_map;            // +0x50
    hkUint32 m_pad5C[(0x6C - 0x5C) / 4];
    hkpTreeWorldManagerRandom *m_random;      // +0x6C
};

hkpAabbTreeWorldManager::~hkpAabbTreeWorldManager()
{
    m_world->removeEntityListener(this);
    m_world->removePhantomListener(this);
    m_world->removeIslandActivationListener(this);
    m_world->removeWorldPostSimulationListener(this);
    if (m_tree)
        delete m_tree;
    if (m_helper)
        delete m_helper;
    hkDeallocateChunk<char>(m_block, 16, HK_MEMORY_CLASS_BASE);
    if (m_random)
        delete m_random;
}
