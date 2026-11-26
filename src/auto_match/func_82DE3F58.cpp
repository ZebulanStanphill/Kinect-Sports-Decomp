// Adjustor thunk in hkpDisableEntityCollisionFilter's vtable for its hkpEntityListener subobject (+0x30): subtract
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpEntityListener.h"
class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
};

extern "C" void *fn_82DE3F58(hkpEntityListener *self, unsigned int flags)
{
    hkpDisableEntityCollisionFilter *obj = (hkpDisableEntityCollisionFilter *)((char *)self - 0x30);
    return obj->hkpDisableEntityCollisionFilter::__delDtor(flags);
}
