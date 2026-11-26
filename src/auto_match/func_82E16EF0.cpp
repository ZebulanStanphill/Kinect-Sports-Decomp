// hkPackfileObjectUpdateTracker::~hkPackfileObjectUpdateTracker()
// (Common/Serialize/Packfile/hkPackfileObjectUpdateTracker.h): the user-written body releases the
// packfile data (no null check), then the members are destroyed in reverse order: the finish map
// (+0x28, an inline hkPointerMap) and the pointer multimap (+0xC), whose destructor is out of line
// (fn_82E1BDF0, defined by a Matching unit). The destructor keeps its fn_ name (the deleting destructor,
// fn_82E173B0, is plain C around it): it is forced inline and called explicitly.
#include "havok/hkObjectUpdateTracker.h"
#include "havok/hkPackfileData.h"
#include "havok/hkSerializeMultiMap.h"

// hkPackfileObjectUpdateTracker (include/havok/hkPackfileObjectUpdateTracker.h) with its destructor inline:
// the game's destructor is this function, which keeps its fn_ name, so the header's out-of-line declaration
// cannot be used here.
class hkPackfileObjectUpdateTracker : public hkObjectUpdateTracker {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkPackfileObjectUpdateTracker(hkPackfileData *data);
    virtual HK_FORCE_INLINE ~hkPackfileObjectUpdateTracker() { m_packfileData->removeReference(); }

    hkPackfileData *m_packfileData;                       // +0x8
    hkSerializeMultiMap<void *, void *> m_pointers;       // +0xC
    hkPointerMap<void *, const char *> m_finish;          // +0x28
    void *m_topLevelObject;                               // +0x34
};

extern "C" void fn_82E16EF0(hkPackfileObjectUpdateTracker *self)
{
    self->hkPackfileObjectUpdateTracker::~hkPackfileObjectUpdateTracker();
}
