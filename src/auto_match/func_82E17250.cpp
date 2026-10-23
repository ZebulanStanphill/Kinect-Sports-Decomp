// hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(hkPackfileData *data): the maps reserve nothing (hkMapBase::reserve, fn_82CEAB00); the packfile data gets a reference.
// hkPackfileObjectUpdateTracker (Common/Serialize/Packfile/hkPackfileObjectUpdateTracker.h,
// 0x38 bytes): hkObjectUpdateTracker (an interface over hkReferencedObject, RTTI).
#include "havok/hkBase.h"

class hkPackfileData : public hkReferencedObject {};
class hkClass;

class hkObjectUpdateTracker : public hkReferencedObject {
public:
    hkObjectUpdateTracker() {}
};

// hkSerializeMultiMap (Common/Serialize/Util/hkSerializeMultiMap.h, 0x1C bytes):
// value chains plus an index map; the free chain starts empty (-1).
template <typename K, typename V>
class hkSerializeMultiMap {
public:
    struct Value {
        V value;
        int next;
    };
    HK_FORCE_INLINE hkSerializeMultiMap() : m_freeChainStart(-1) {}

    hkArray<Value> m_valueChain;          // +0x0
    hkPointerMap<K, int> m_indexMap;      // +0xC
    int m_freeChainStart;                 // +0x18
};

class hkPackfileObjectUpdateTracker : public hkObjectUpdateTracker {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkPackfileObjectUpdateTracker(hkPackfileData *data);

    hkPackfileData *m_packfileData;                       // +0x8
    hkSerializeMultiMap<void *, void *> m_pointers;       // +0xC
    hkPointerMap<void *, const hkClass *> m_finish;       // +0x28
    void *m_topLevelObject;                               // +0x34
};

hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(hkPackfileData *data)
    : m_packfileData(data), m_topLevelObject(HK_NULL)
{
    m_packfileData->addReference();
}
