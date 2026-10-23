// hkPackfileObjectUpdateTracker::~hkPackfileObjectUpdateTracker()
// (Common/Serialize/Packfile/hkPackfileObjectUpdateTracker.h): the user-written body releases the
// packfile data (no null check), then the members are destroyed in reverse order: the finish map
// (+0x28, an inline hkPointerMap) and the pointer multimap (+0xC), whose destructor is out of line
// (fn_82E1BDF0, defined by a Matching unit). The destructor keeps its fn_ name (the deleting destructor,
// fn_82E173B0, is plain C around it): it is forced inline and called explicitly.
#include "havok/hkBase.h"

class hkPackfileData : public hkReferencedObject {};
class hkClass;

class hkObjectUpdateTracker : public hkReferencedObject {
public:
    hkObjectUpdateTracker() {}
};

extern "C" void fn_82E1BDF0(void *self);   // hkSerializeMultiMap<void *, void *>::~hkSerializeMultiMap

// hkSerializeMultiMap (Common/Serialize/Util/hkSerializeMultiMap.h, 0x1C bytes): value chains plus an
// index map; the members are plain here because the out-of-line destructor destroys them.
template <typename K, typename V>
class hkSerializeMultiMap {
public:
    struct Value {
        V value;
        int next;
    };
    HK_FORCE_INLINE ~hkSerializeMultiMap() { fn_82E1BDF0(this); }

    hkArrayBase<Value> m_valueChain;   // +0x0
    void *m_indexMap[3];               // +0xC
    int m_freeChainStart;              // +0x18
};

class hkPackfileObjectUpdateTracker : public hkObjectUpdateTracker {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkPackfileObjectUpdateTracker(hkPackfileData *data);
    virtual HK_FORCE_INLINE ~hkPackfileObjectUpdateTracker() { m_packfileData->removeReference(); }

    hkPackfileData *m_packfileData;                       // +0x8
    hkSerializeMultiMap<void *, void *> m_pointers;       // +0xC
    hkPointerMap<void *, const hkClass *> m_finish;       // +0x28
    void *m_topLevelObject;                               // +0x34
};

extern "C" void fn_82E16EF0(hkPackfileObjectUpdateTracker *self)
{
    self->hkPackfileObjectUpdateTracker::~hkPackfileObjectUpdateTracker();
}
