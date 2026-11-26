#include "havok/hkpEntity.h"
#include "havok/hkpMoppBvTreeShape.h"
#include "havok/hkpRemoveTerminalsMoppModifier.h"

// hkpBreakOffPartsUtil::removeKeysFromListShape-style helper: removes keys from a list shape (directly or under a
// MOPP, whose code is patched with hkpRemoveTerminalsMoppModifier) and invalidates the collidable's cached child
// shape AABBs of the removed keys.

extern "C" {
void fn_82D3D9C0(const hkpShape *list, hkpShapeKey key);                         // hkpListShape::disableChild
void fn_825A4450(void *self);                                                // hkPointerMap<hkpShapeKey, int>::hkPointerMap
void fn_82CEA160(void *self, hkMemoryAllocator *alloc, hkUlong key, hkUlong val);   // hkMapBase<hkUlong, hkUlong>::insert
int fn_82CEA280(const void *self, hkUlong key, int def);                            // hkMapBase<hkUlong, hkUlong>::getWithDefault
}

class hkKeyMap : public hkMapBase<hkUlong, hkUlong> {
public:
    HK_FORCE_INLINE hkKeyMap() : hkMapBase<hkUlong, hkUlong>(hkFinishLoadedObjectFlag()) { fn_825A4450(this); }
    HK_FORCE_INLINE ~hkKeyMap() { clearAndDeallocate(hkContainerHeapAllocator::get(this)); }
    HK_FORCE_INLINE void insert(hkUlong key, hkUlong val) { fn_82CEA160(this, &hkContainerHeapAllocator::get(this), key, val); }
    HK_FORCE_INLINE int getWithDefault(hkUlong key, int def) const { return fn_82CEA280(this, key, def); }
};

extern "C" void fn_82DEB238(hkpEntity *entity, hkpShapeKey *keysToRemove, int numKeys)
{
    const hkpShape *shape = entity->m_collidable.getShape();
    hkAabbUint32 *aabbs = entity->m_collidable.m_boundingVolumeData.m_childShapeAabbs;
    if ((int)shape->m_type != 9) {
        if ((int)shape->m_type != 10)
            return;
        const hkpMoppBvTreeShape *mopp = static_cast<const hkpMoppBvTreeShape *>(shape);
        const hkpShape *child = mopp->m_child.m_childShape;
        {
            hkArray<hkpShapeKey> keys(keysToRemove, numKeys, numKeys);
            const hkpShapeContainer *container = child ? (const hkpShapeContainer *)((const char *)child + 0x10) : HK_NULL;
            hkpRemoveTerminalsMoppModifier modifier(mopp->m_code, container, keys);
            modifier.applyRemoveTerminals(const_cast<hkpMoppCode *>(mopp->m_code));
            if ((int)child->m_type == 9) {
                shape = child;
            } else {
                goto finish;
            }
        }
    }
    for (int i = 0; i < numKeys; i++)
        fn_82D3D9C0(shape, keysToRemove[i]);
finish:
    if (aabbs) {
        hkKeyMap map;
        for (int i = 0; i < numKeys; i++)
            map.insert(keysToRemove[i], 1);
        int n = entity->m_collidable.m_boundingVolumeData.m_numChildShapeAabbs;
        hkpShapeKey *childKeys = entity->m_collidable.m_boundingVolumeData.m_childShapeKeys;
        for (int i = 0; i < n; i++) {
            if (map.getWithDefault(childKeys[i], 0)) {
                aabbs[i].setInvalidY();
            }
        }
    }
}
