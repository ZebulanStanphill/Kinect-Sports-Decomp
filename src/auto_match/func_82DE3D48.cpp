// Adjustor thunk in hkpConstrainedSystemFilter's vtable for its hkpConstraintListener subobject (+0x30): subtract
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpConstraintListener.h"
class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
};

extern "C" void *fn_82DE3D48(hkpConstraintListener *self, unsigned int flags)
{
    hkpConstrainedSystemFilter *obj = (hkpConstrainedSystemFilter *)((char *)self - 0x30);
    return obj->hkpConstrainedSystemFilter::__delDtor(flags);
}
