#ifndef HAVOK_HKSTRINGMAPC_H
#define HAVOK_HKSTRINGMAPC_H

#include "havok/hkBase.h"

// hkCachedHashMap's constructor is out of line (fn_82D00388: allocates 16
// buckets of 12 bytes, fills them with 0xFF, m_numElems 0, m_hashMod 15). The
// shared hkMap.h does not declare it, so the constructors below call it in
// their bodies, right after the members are (trivially) constructed. Its
// second argument is the (empty) allocator, passed by value: a zero byte built
// in a stack temporary; the function ignores it.
extern "C" {
void fn_82D00388(void *self, hkContainerHeapAllocator a);           // hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator>::hkCachedHashMap
void fn_82D000A0(void *map, const char *key, hkUlong value);       // hkCachedHashMap<hkStringMapOperations>::insert
}

// The string maps here take 0x10 bytes: after the shared hkStringMap's 0xC
// they hold the (empty) allocator, one byte padded to four. Evidence:
// hkChainedClassNameRegistry's next registry at +0x1C after the map at +0xC,
// hkBindingClassNameRegistry's second map at +0x3C after the first at +0x2C,
// new hkTypeInfoRegistry allocating 0x18 bytes with its map at +0x8, and
// hkDefaultClassNameRegistry (0x20 bytes) whose empty hkSingleton base the
// RTTI places at +0x1D, right after that byte.
template <typename V>
class hkStringMapC : public hkStringMap<V> {
public:
    HK_FORCE_INLINE hkStringMapC() { fn_82D00388(this, hkContainerHeapAllocator()); }
    HK_FORCE_INLINE void insert(const char *key, V val) { fn_82D000A0(this, key, hkUlong(val)); }
    hkContainerHeapAllocator m_alloc;   // +0xC
};

#endif
