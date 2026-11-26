// hkSerializeMultiMap (Common/Serialize/Util/hkSerializeMultiMap.h), 0x1C bytes: a map from a key to a chain
// of values. m_indexMap gives each key the index of its first Value in m_valueChain; Value::next links the
// chain (-1 ends it), and freed Values form a chain from m_freeChainStart. The layout is what
// hkPackfileObjectUpdateTracker's constructor (82E17250) builds and objectPointedBy (82E16F68) reads.
//
// The destructor is the implicit one, but the game never inlines it: hkSerializeMultiMap<void *, void *>'s
// is out of line as fn_82E1BDF0 (a C unit; the map, then the array). So the destructor here calls it, and the
// members are declared without destructors so that they are not destroyed a second time: m_valueChain is an
// hkArrayBase and m_indexMap an IndexMap, hkPointerMap<K, int> without its destructor (the constructor still
// reserves nothing through hkMapBase::reserve, fn_82CEAB00, as hkMap's does).
#ifndef HAVOK_HKSERIALIZEMULTIMAP_H
#define HAVOK_HKSERIALIZEMULTIMAP_H

#include "havok/hkBase.h"

extern "C" void fn_82E1BDF0(void *self);   // hkSerializeMultiMap<void *, void *>::~hkSerializeMultiMap

template <typename K, typename V>
class hkSerializeMultiMap {
public:
    struct Value {
        V value;    // +0x0
        int next;   // +0x4
    };
    struct IndexMap {
        HK_FORCE_INLINE IndexMap() : m_elem(HK_NULL), m_numElems(0), m_hashMod(-1)
        {
            fn_82CEAB00(this, &hkContainerHeapAllocator::get(this), 0);
        }
        void *m_elem;      // +0x0
        int m_numElems;    // +0x4
        int m_hashMod;     // +0x8
    };

    HK_FORCE_INLINE hkSerializeMultiMap() : m_freeChainStart(-1) {}
    HK_FORCE_INLINE ~hkSerializeMultiMap() { fn_82E1BDF0(this); }

    hkArrayBase<Value> m_valueChain;   // +0x0
    IndexMap m_indexMap;               // +0xC
    int m_freeChainStart;              // +0x18
};

#endif
