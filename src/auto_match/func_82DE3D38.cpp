// Adjustor thunk in hkpConstrainedSystemFilter's vtable for its hkpShapeCollectionFilter subobject (+0xC): subtract
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpConstraintListener.h"
class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
};

extern "C" void *fn_82DE3D38(hkpShapeCollectionFilter *self, unsigned int flags)
{
    hkpConstrainedSystemFilter *obj = (hkpConstrainedSystemFilter *)((char *)self - 0xc);
    return obj->hkpConstrainedSystemFilter::__delDtor(flags);
}
