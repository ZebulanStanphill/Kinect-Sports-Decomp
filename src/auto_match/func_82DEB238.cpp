#include "havok/hkpShape.h"
#include "havok/hkMap.h"

// hkpBreakOffPartsUtil::removeKeysFromListShape-style helper: removes keys from a list shape (directly or under a
// MOPP, whose code is patched with hkpRemoveTerminalsMoppModifier) and invalidates the collidable's cached child
// shape AABBs of the removed keys.

class hkpMoppCode;

class hkpMoppModifier {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpMoppModifier() {}
    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);
    virtual void ModifierFinished();
};

class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpRemoveTerminalsMoppModifier(const hkpMoppCode *code, const hkpShapeContainer *container, const hkArray<hkpShapeKey> &keys);
    virtual ~hkpRemoveTerminalsMoppModifier();
    HK_FORCE_INLINE void applyRemoveTerminals(hkpMoppCode *code);

    hkArray<hkUint32> m_removeInfo;        // +0xc
    const hkArray<hkpShapeKey> *m_keys;    // +0x18
};

extern "C" {
void fn_82D4D1C0(hkpRemoveTerminalsMoppModifier *self, hkpMoppCode *code);   // hkpRemoveTerminalsMoppModifier::applyRemoveTerminals
void fn_82D3D9C0(hkpShape *list, hkpShapeKey key);                           // hkpListShape::disableChild
void fn_825A4450(void *self);                                                // hkPointerMap<hkpShapeKey, int>::hkPointerMap
void fn_82CEA160(void *self, hkMemoryAllocator *alloc, hkUlong key, hkUlong val);   // hkMapBase<hkUlong, hkUlong>::insert
int fn_82CEA280(const void *self, hkUlong key, int def);                            // hkMapBase<hkUlong, hkUlong>::getWithDefault
}

HK_FORCE_INLINE void hkpRemoveTerminalsMoppModifier::applyRemoveTerminals(hkpMoppCode *code) { fn_82D4D1C0(this, code); }

class hkKeyMap : public hkMapBase<hkUlong, hkUlong> {
public:
    HK_FORCE_INLINE hkKeyMap() : hkMapBase<hkUlong, hkUlong>(hkFinishLoadedObjectFlag()) { fn_825A4450(this); }
    HK_FORCE_INLINE ~hkKeyMap() { clearAndDeallocate(hkContainerHeapAllocator::get(this)); }
    HK_FORCE_INLINE void insert(hkUlong key, hkUlong val) { fn_82CEA160(this, &hkContainerHeapAllocator::get(this), key, val); }
    HK_FORCE_INLINE int getWithDefault(hkUlong key, int def) const { return fn_82CEA280(this, key, def); }
};

struct hkAabbUint32 {
    HK_FORCE_INLINE void setInvalidY()
    {
        hkUint32 *minP = m_min;
        hkUint32 *maxP = m_max;
        minP[1] = 0x7fff0000;
        minP[2] = 0x7fff0000;
        *(hkUint32 *)m_expansionMin = 0;
        maxP[1] = 0;
        maxP[2] = 0;
    }

    hkUint32 m_min[3];          // +0x0
    hkUint8 m_expansionMin[3];  // +0xc
    hkUint8 m_expansionShift;   // +0xf
    hkUint32 m_max[3];          // +0x10
    hkUint8 m_expansionMax[3];  // +0x1c
    hkUint8 m_shapeKeyByte;     // +0x1f
};

struct hkpMoppBvTreeShape : public hkpShape {
    void *m_pad10;
    hkpMoppCode *m_code;                 // +0x14
    hkUint8 m_pad18[0x1c];
    hkpShape *m_childShape;              // +0x34 (hkpSingleShapeContainer::m_childShape)
};

struct hkpEntity {
    hkUint8 m_pad0[0x10];
    hkpShape *m_shape;                   // +0x10 (m_collidable.m_shape)
    hkUint8 m_pad14[0x3c];
    hkUint16 m_numChildShapeAabbs;       // +0x50 (m_collidable.m_boundingVolumeData)
    hkUint16 m_capacityChildShapeAabbs;  // +0x52
    hkAabbUint32 *m_childShapeAabbs;     // +0x54
    hkpShapeKey *m_childShapeKeys;       // +0x58
};

extern "C" void fn_82DEB238(hkpEntity *entity, hkpShapeKey *keysToRemove, int numKeys)
{
    hkpShape *shape = entity->m_shape;
    hkAabbUint32 *aabbs = entity->m_childShapeAabbs;
    if ((int)shape->m_type != 9) {
        if ((int)shape->m_type != 10)
            return;
        hkpMoppBvTreeShape *mopp = (hkpMoppBvTreeShape *)shape;
        hkpShape *child = mopp->m_childShape;
        {
            hkArray<hkpShapeKey> keys(keysToRemove, numKeys, numKeys);
            hkpRemoveTerminalsMoppModifier modifier(mopp->m_code, child ? (const hkpShapeContainer *)((char *)child + 0x10) : HK_NULL, keys);
            modifier.applyRemoveTerminals(mopp->m_code);
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
        int n = entity->m_numChildShapeAabbs;
        hkpShapeKey *childKeys = entity->m_childShapeKeys;
        for (int i = 0; i < n; i++) {
            if (map.getWithDefault(childKeys[i], 0)) {
                aabbs[i].setInvalidY();
            }
        }
    }
}
