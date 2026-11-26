// Adjustor thunk in hkpConstrainedSystemFilter's vtable for its hkpRayShapeCollectionFilter subobject (+0x10): subtract
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpConstraintListener.h"
class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
};

extern "C" void *fn_82DE3D40(hkpRayShapeCollectionFilter *self, unsigned int flags)
{
    hkpConstrainedSystemFilter *obj = (hkpConstrainedSystemFilter *)((char *)self - 0x10);
    return obj->hkpConstrainedSystemFilter::__delDtor(flags);
}
