// hkpAabbTreeWorldManager::islandActivatedCallback (slot 1 of
// ??_7hkpAabbTreeWorldManager@@6BhkpIslandActivationListener@@@): while the manager is in use (+0x24), clears
// +0x68, sets +0x69, then for each entity of the island (its entity array at +0x48 / +0x4C) whose collidable
// (+0x10) has the byte at +0x18 equal to 1, sets the collidable's entry in the map at +0x50 to 1 if the map has
// one (fn_82CEA2F0 looks it up, fn_82CEA160 inserts with the heap allocator). Built over
// havok/hkpAabbTreeWorldManager.h; `this` is the hkpIslandActivationListener subobject (+0x1C).
#include "havok/hkBase.h"
#include "havok/hkpAabbTreeWorldManager.h"

extern "C" {
int fn_82CEA2F0(void *map, const void *key, void *valueOut);                  // hkMap lookup
void fn_82CEA160(void *map, hkMemoryAllocator &alloc, const void *key, int value);   // hkMap insert
}

struct hkpSimulationIslandEntities_82DB1238 {
    hkUint8 m_pad[0x48];
    hkUint8 **m_entities;   // +0x48
    int m_numEntities;      // +0x4C
};

// The original converts `this` to the whole object before it takes the map's address (subi, then addi 0x50),
// which a helper on the whole object gives.
static HK_FORCE_INLINE void markIfPresent_82DB1238(hkpAabbTreeWorldManager *manager, const void *collidable)
{
    hkUlong value[2];
    if (fn_82CEA2F0(manager->m_collidableMap, collidable, value) != 0)
    {
        fn_82CEA160(manager->m_collidableMap, hkMemoryRouter::getInstance().heap(), collidable, 1);
    }
}

void hkpAabbTreeWorldManager::islandActivatedCallback(hkpSimulationIsland *island)
{
    if (m_inUse)
    {
        const hkpSimulationIslandEntities_82DB1238 *entities =
            reinterpret_cast<const hkpSimulationIslandEntities_82DB1238 *>(island);
        m_flag68 = false;
        m_flag69 = true;
        for (int i = 0; i < entities->m_numEntities; i++)
        {
            const hkUint8 *collidable = entities->m_entities[i] + 0x10;
            if (collidable[0x18] == 1)
            {
                markIfPresent_82DB1238(this, collidable);
            }
        }
    }
}
