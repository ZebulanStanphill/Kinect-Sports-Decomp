// Havok's hash maps (Common/Base/Container/PointerMap/hkMap.h, hkPointerMap.h,
// StringMap/hkStringMap.h, hkCachedHashMap.h), as far as the game uses them.
// hkMapBase's out-of-line members keep their fn_ names (Matching C units call
// them) and are reached through inline wrappers. The cached hash map
// members are instantiated for hkStringMapOperations.
//
// hkMapBase<K, V> (0xC bytes): Pair *m_elem; int m_numElems; int m_hashMod.
//   ~hkMap() is clearAndDeallocate(heap) (fn_82CEA4B8, which takes the
//   allocator by reference), then ~hkMapBase(), an empty out-of-line function
//   folded with every other empty function into fn_82BA02A8.
// hkCachedHashMap<OPS, A>: hkUlong *m_elem; int m_numElems;
//   int m_hashMod; OPS m_ops. The string-map specialization is 0x10 bytes.
//   The allocation holds three arrays (hashes, keys, values), each with
//   m_hashMod + 1 entries; an empty hash slot holds -1, and an Iterator is a
//   slot index (m_hashMod + 1 = end). hkStringMap<V> holds one and forwards
//   to its out-of-line members.
#ifndef HAVOK_HKMAP_H
#define HAVOK_HKMAP_H
#include "havok/hkArray.h"

extern "C" {
void fn_82CEA4B8(void *self, hkMemoryAllocator *alloc);   // hkMapBase<hkUlong, hkUlong>::clearAndDeallocate
void fn_82BA02A8(void *self);                             // empty function: hkMapBase<hkUlong, hkUlong>::~hkMapBase
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

enum hkResult;
struct hkStringMapOperations {};

template <typename OPS, typename Allocator = hkContainerHeapAllocator>
class hkCachedHashMap {
public:
    typedef class Dummy *Iterator;

    // Placement construction through the map's class allocator.
    HK_FORCE_INLINE void *operator new(hk_size_t, void *memory) { return memory; }

    hkCachedHashMap(OPS ops = OPS());
    ~hkCachedHashMap();
    void insert(hkUlong key, hkUlong val);
    Iterator getIterator() const;
    hkUlong getKey(Iterator it) const;
    hkUlong getValue(Iterator it) const;
    void setValue(Iterator it, hkUlong value);
    Iterator getNext(Iterator it) const;
    Iterator findKey(hkUlong key) const;
    void clear();
    hkBool isValid(Iterator it) const;
    hkUlong getWithDefault(hkUlong key, hkUlong fallback) const;
    hkResult get(hkUlong key, hkUlong *out) const;

protected:
    void resizeTable(int capacity);

public:
    hkUlong *m_elem;
    int m_numElems;
    int m_hashMod;
    OPS m_ops;
};

template <typename V, typename Allocator = hkContainerHeapAllocator>
class hkStringMap {
public:
    typedef typename hkCachedHashMap<hkStringMapOperations, Allocator>::Iterator Iterator;

    HK_FORCE_INLINE hkStringMap() {}

    HK_FORCE_INLINE Iterator getIterator() const { return m_map.getIterator(); }
    HK_FORCE_INLINE const char *getKey(Iterator it) const { return reinterpret_cast<const char *>(m_map.getKey(it)); }
    HK_FORCE_INLINE V getValue(Iterator it) const { return (V)m_map.getValue(it); }
    HK_FORCE_INLINE void setValue(Iterator it, V value) { m_map.setValue(it, hkUlong(value)); }
    HK_FORCE_INLINE Iterator getNext(Iterator it) const { return m_map.getNext(it); }
    HK_FORCE_INLINE Iterator findKey(const char *key) const { return m_map.findKey(hkUlong(key)); }
    HK_FORCE_INLINE void insert(const char *key, V val) { m_map.insert(hkUlong(key), hkUlong(val)); }
    HK_FORCE_INLINE void clear() { m_map.clear(); }
    HK_FORCE_INLINE hkBool isValid(Iterator it) const { return m_map.isValid(it); }

    hkCachedHashMap<hkStringMapOperations, Allocator> m_map;
};

#endif
