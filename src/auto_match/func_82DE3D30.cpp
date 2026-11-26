// Adjustor thunk in hkpConstrainedSystemFilter's vtable for its hkpCollidableCollidableFilter subobject (+0x8): subtract
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpConstraintListener.h"
class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
};

extern "C" void *fn_82DE3D30(hkpCollidableCollidableFilter *self, unsigned int flags)
{
    hkpConstrainedSystemFilter *obj = (hkpConstrainedSystemFilter *)((char *)self - 0x8);
    return obj->hkpConstrainedSystemFilter::__delDtor(flags);
}
