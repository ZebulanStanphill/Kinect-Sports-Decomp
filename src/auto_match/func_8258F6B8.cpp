// hkpCollisionFilter scalar deleting destructor (primary vtable slot 0), emitted
// in a game object (/O1). It keeps its fn_ name so that the adjustor thunks of
// the other four vtables (fn_8258FC18 and neighbours: subi r3, r3, N; b
// fn_8258F6B8), which are plain C, can still be matched; it is therefore
// written out by hand: the implicit destructor, then the class allocator.
#include "havok/hkpCollisionFilter.h"

extern "C" hkpCollisionFilter *fn_8258F6B8(hkpCollisionFilter *self, unsigned int flags)
{
    self->hkpCollisionFilter::~hkpCollisionFilter();
    if (flags & 1)
        hkpCollisionFilter::operator delete(self);
    return self;
}
