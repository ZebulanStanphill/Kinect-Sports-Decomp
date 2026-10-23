// ClassUpdateTracker's scalar deleting destructor (an hkObjectUpdateTracker in an anonymous namespace of
// Havok's serialization code): the implicit destructor inlined (the member at +0x14, whose destructor is
// out of line as fn_82E1BDF0, then hkBaseObject's vtable), then the class allocator's delete. It keeps its
// fn_ name: the anonymous namespace's mangled name (?A0x11ff29d5) cannot be reproduced.
#include "havok/hkBase.h"

// hkObjectUpdateTracker (Common/Serialize/Util/hkObjectUpdateTracker.h): an interface; only the base matters.
class hkObjectUpdateTracker : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
};

// The member at +0x14: an array of 8-byte elements followed by a map. Its destructor is out of line,
// fn_82E1BDF0, and keeps its fn_ name (a Matching C unit defines it); the members are declared without
// destructors so they are not destroyed twice.
struct ClassUpdateTrackerSet;
extern "C" void fn_82E1BDF0(ClassUpdateTrackerSet *self);
struct ClassUpdateTrackerSet {
    HK_FORCE_INLINE ~ClassUpdateTrackerSet() { fn_82E1BDF0(this); }
    void *m_data;
    int m_size;
    int m_capacityAndFlags;
    void *m_map[2];
};

class ClassUpdateTracker : public hkObjectUpdateTracker {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);

    void *m_unk08;                  // +0x8
    void *m_unk0C;                  // +0xC
    void *m_unk10;                  // +0x10
    ClassUpdateTrackerSet m_set;    // +0x14
};

extern "C" ClassUpdateTracker *fn_82E0E4C8(ClassUpdateTracker *self, unsigned int flags)
{
    self->ClassUpdateTracker::~ClassUpdateTracker();
    if (flags & 1)
        ClassUpdateTracker::operator delete(self);
    return self;
}
