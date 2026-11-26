// hkpGroupFilter scalar deleting destructor (primary vtable slot 0). It keeps its fn_ name
// so that the adjustor thunks of the other four vtables (subi r3, r3, N; b
// fn_82D3A580), which are plain C, can still be matched; it is therefore written
// out by hand: the out-of-line destructor (renamed ??1hkpGroupFilter@@UAA@XZ), then the
// class allocator.
#include "havok/hkpGroupFilter.h"

extern "C" hkpGroupFilter *fn_82D3A580(hkpGroupFilter *self, unsigned int flags)
{
    self->hkpGroupFilter::~hkpGroupFilter();
    if (flags & 1)
        hkpGroupFilter::operator delete(self);
    return self;
}
