// hkContentsUpdateTracker's constructor (a class in an anonymous namespace, ?A0x11ff29d5, deriving from
// hkPackfileObjectUpdateTracker): the base constructor, two members, the vtable, then each (object, class)
// pair of the given array (the reader's loaded objects) is registered through fn_82E0DB68 with flag 1.
// The vtable is ??_7hkContentsUpdateTracker@?A0x11ff29d5@@6B@; MSVC derives the ?A0x hash from the
// compiled file's full path, so this unit's hash differs, but objdiff compares demangled names
// ("`anonymous namespace'::hkContentsUpdateTracker::`vftable'") and accepts it. The constructor keeps
// its fn_ name and is called explicitly.
#include "havok/hkPackfileObjectUpdateTracker.h"
#include "havok/hkVariant.h"

namespace {

class hkContentsUpdateTracker;

}

extern "C" void fn_82E0DB68(hkContentsUpdateTracker *self, void *object, const hkClass *klass, int flag);

namespace {

class hkContentsUpdateTracker : public hkPackfileObjectUpdateTracker {
public:
    HK_FORCE_INLINE hkContentsUpdateTracker(hkPackfileData *data, const hkArray<hkVariant> &entries, void *owner)
        : hkPackfileObjectUpdateTracker(data), m_unknown38(HK_NULL), m_owner(owner)
    {
        for (int i = 0; i < entries.getSize(); i++) {
            fn_82E0DB68(this, entries[i].m_object, entries[i].m_class, 1);
        }
    }
    // Its vtable overrides two of hkPackfileObjectUpdateTracker's slots: replaceObject (82E0DEC0) and
    // removeFinish (82E0DF20).
    virtual void replaceObject(void *oldObject, void *newObject, const hkClass *newClass);
    virtual void removeFinish(void *oldObject);

    void *m_unknown38;   // +0x38
    void *m_owner;       // +0x3c
};

}

extern "C" hkContentsUpdateTracker *fn_82E0DE40(hkContentsUpdateTracker *self, hkPackfileData *data,
                                               const hkArray<hkVariant> &entries, void *owner)
{
    self->hkContentsUpdateTracker::hkContentsUpdateTracker(data, entries, owner);
    return self;
}
