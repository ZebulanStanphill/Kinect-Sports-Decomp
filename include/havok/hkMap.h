// Havok's hash maps (Common/Base/Container/PointerMap/hkMap.h, hkPointerMap.h,
// StringMap/hkStringMap.h, hkCachedHashMap.h), as far as the game's inlined
// destructors use them. Their out-of-line members keep their fn_ names
// (Matching C units call them) and are reached through inline wrappers.
//
// hkMapBase<K, V> (0xC bytes): Pair *m_elem; int m_numElems; int m_hashMod.
//   ~hkMap() is clearAndDeallocate(heap) (fn_82CEA4B8, which takes the
//   allocator by reference), then ~hkMapBase(), an empty out-of-line function
//   folded with every other empty function into fn_82BA02A8.
// hkCachedHashMap<OPS, A> (0xC bytes): Elem *m_elem; int m_numElems;
//   int m_hashMod; its destructor is out of line (fn_82D003F0: frees
//   (m_hashMod + 1) * 12 bytes). hkStringMap<V> holds one.
#ifndef HAVOK_HKMAP_H
#define HAVOK_HKMAP_H
#include "havok/hkArray.h"

extern "C" {
void fn_82CEA4B8(void *self, hkMemoryAllocator *alloc);   // hkMapBase<hkUlong, hkUlong>::clearAndDeallocate
void fn_82BA02A8(void *self);                             // empty function: hkMapBase<hkUlong, hkUlong>::~hkMapBase
void fn_82D003F0(void *self);                             // hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator>::~hkCachedHashMap
void fn_82CEAB00(void *self, hkMemoryAllocator *alloc, int numElements);   // hkMapBase<hkUlong, hkUlong>::reserve
}

template <typename KEY, typename VAL>
class hkMapBase {
public:
    struct Pair {
        KEY key;
        VAL val;
    };
    // Constructor from hkDefaultError's (fn_82CFA3B0): empty, then reserve(heap, 0).
    HK_FORCE_INLINE hkMapBase() : m_elem(HK_NULL), m_numElems(0), m_hashMod(-1) {}
    HK_FORCE_INLINE hkMapBase(hkFinishLoadedObjectFlag) {}
    HK_FORCE_INLINE ~hkMapBase() { fn_82BA02A8(this); }
    HK_FORCE_INLINE void clearAndDeallocate(hkMemoryAllocator &alloc) { fn_82CEA4B8(this, &alloc); }
    HK_FORCE_INLINE void reserve(hkMemoryAllocator &alloc, int numElements) { fn_82CEAB00(this, &alloc, numElements); }

    Pair *m_elem;
    int m_numElems;
    int m_hashMod;
};

template <typename KEY, typename VAL, typename Allocator = hkContainerHeapAllocator>
class hkMap : public hkMapBase<KEY, VAL> {
public:
    HK_FORCE_INLINE hkMap(int numElements = 0) { this->reserve(Allocator::get(this), numElements); }
    HK_FORCE_INLINE hkMap(hkFinishLoadedObjectFlag f) : hkMapBase<KEY, VAL>(f) {}
    HK_FORCE_INLINE ~hkMap() { this->clearAndDeallocate(Allocator::get(this)); }
};

template <typename KEY, typename VAL, typename Allocator = hkContainerHeapAllocator>
class hkPointerMap {
public:
    HK_FORCE_INLINE hkPointerMap() {}
    HK_FORCE_INLINE hkPointerMap(hkFinishLoadedObjectFlag f) : m_map(f) {}
    hkMap<hkUlong, hkUlong, Allocator> m_map;
};

struct hkStringMapOperations;

template <typename OPS, typename Allocator = hkContainerHeapAllocator>
class hkCachedHashMap {
public:
    struct Elem {
        hkUlong hash;
        hkUlong key;
        hkUlong value;
    };
    HK_FORCE_INLINE ~hkCachedHashMap() { fn_82D003F0(this); }

    Elem *m_elem;
    int m_numElems;
    int m_hashMod;
};

template <typename V, typename Allocator = hkContainerHeapAllocator>
class hkStringMap {
public:
    hkCachedHashMap<hkStringMapOperations, Allocator> m_map;
};

#endif
