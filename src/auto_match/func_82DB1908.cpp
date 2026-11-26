// hkpAabbTreeWorldManager::~hkpAabbTreeWorldManager (Physics/Internal/Collide/BroadPhase/TreeBroadPhase/
// hkpAabbTreeWorldManager.cpp). RTTI: hkpTreeWorldManager (hkReferencedObject) at +0, then the four world listener
// interfaces at +0x14, +0x18, +0x1C and +0x20. The body unregisters the listeners and deletes the owned objects; then
// the hkMap and hkArray members are destroyed, and the bases (the listener interfaces' vtables, then hkBaseObject's).
#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkAabbTree.h"
#include "havok/hkpIslandActivationListener.h"
#include "havok/hkpWorldPostSimulationListener.h"
#include "havok/hkpWorld.h"
#include "havok/hkpPhantomListener.h"

extern "C" {
void fn_83083AA0(void *self);   // destructor of the 0x50-byte tree helper at +0x10
void fn_82CFBAD0(void *self);   // destructor of the 4-byte object at +0x6C
}

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
    hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16> *m_tree;   // +0xC
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
