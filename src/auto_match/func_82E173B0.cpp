// The scalar deleting destructor in slot 0 of ??_7hkPackfileObjectUpdateTracker@@6B@ and of
// ??_7hkContentsUpdateTracker@?A0x11ff29d5@@6B@ (one function for both: hkContentsUpdateTracker, a subclass in
// an anonymous namespace, adds no destructor of its own). It keeps its fn_ name: the linker folded the two
// classes' deleting destructors. It calls hkPackfileObjectUpdateTracker's destructor out of line, then frees
// through the class allocator.
#include "havok/hkPackfileObjectUpdateTracker.h"

extern "C" hkPackfileObjectUpdateTracker *fn_82E173B0(hkPackfileObjectUpdateTracker *self, unsigned int flags)
{
    self->hkPackfileObjectUpdateTracker::~hkPackfileObjectUpdateTracker();
    if (flags & 1)
        hkPackfileObjectUpdateTracker::operator delete(self);
    return self;
}
