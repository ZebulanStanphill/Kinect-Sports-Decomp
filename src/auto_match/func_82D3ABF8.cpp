// hkpNullCollisionFilter scalar deleting destructor (primary vtable slot 0). It keeps its fn_ name
// so that the adjustor thunks of the other four vtables (subi r3, r3, N; b
// fn_82D3ABF8), which are plain C, can still be matched; it is therefore written
// out by hand: the out-of-line destructor (renamed ??1hkpNullCollisionFilter@@UAA@XZ), then the
// class allocator.
#include "havok/hkpCollisionFilter.h"

class hkpNullCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpNullCollisionFilter();
};

extern "C" hkpNullCollisionFilter *fn_82D3ABF8(hkpNullCollisionFilter *self, unsigned int flags)
{
    self->hkpNullCollisionFilter::~hkpNullCollisionFilter();
    if (flags & 1)
        hkpNullCollisionFilter::operator delete(self);
    return self;
}
