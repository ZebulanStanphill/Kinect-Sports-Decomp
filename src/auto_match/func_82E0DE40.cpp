// hkContentsUpdateTracker's constructor (a class in an anonymous namespace, ?A0x11ff29d5, deriving from
// hkPackfileObjectUpdateTracker): the base constructor, two members, the vtable, then each (object, class)
// pair of the given array is registered through fn_82E0DB68 with flag 1.
// The vtable is ??_7hkContentsUpdateTracker@?A0x11ff29d5@@6B@; MSVC derives the ?A0x hash from the
// compiled file's full path, so this unit's hash differs, but objdiff compares demangled names
// ("`anonymous namespace'::hkContentsUpdateTracker::`vftable'") and accepts it. The constructor keeps
// its fn_ name and is called explicitly.
#include "havok/hkBase.h"

class hkPackfileData : public hkReferencedObject {};
class hkClass;

class hkObjectUpdateTracker : public hkReferencedObject {
public:
    hkObjectUpdateTracker() {}
};

template <typename K, typename V>
class hkSerializeMultiMap {
public:
    struct Value {
        V value;
        int next;
    };
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

struct hkContentsEntry {
    void *m_object;
    const hkClass *m_class;
};

namespace {

class hkContentsUpdateTracker;

}

extern "C" void fn_82E0DB68(hkContentsUpdateTracker *self, void *object, const hkClass *klass, int flag);

namespace {

class hkContentsUpdateTracker : public hkPackfileObjectUpdateTracker {
public:
    HK_FORCE_INLINE hkContentsUpdateTracker(hkPackfileData *data, const hkArray<hkContentsEntry> &entries, void *owner)
        : hkPackfileObjectUpdateTracker(data), m_unknown38(HK_NULL), m_owner(owner)
    {
        for (int i = 0; i < entries.getSize(); i++) {
            fn_82E0DB68(this, entries[i].m_object, entries[i].m_class, 1);
        }
    }
    virtual void addPointer(void *newObject, void *fromWhere);
    virtual void replaceObject(void *oldObject, void *newObject, const hkClass *newClass);
    virtual void addFinish(void *newObject, const char *className);
    virtual void addChunk(void *newChunk, int n, int allocType);
    virtual void removeChunk(void *chunk);
    virtual void unused();

    void *m_unknown38;   // +0x38
    void *m_owner;       // +0x3c
};

}

extern "C" hkContentsUpdateTracker *fn_82E0DE40(hkContentsUpdateTracker *self, hkPackfileData *data,
                                               const hkArray<hkContentsEntry> &entries, void *owner)
{
    self->hkContentsUpdateTracker::hkContentsUpdateTracker(data, entries, owner);
    return self;
}
