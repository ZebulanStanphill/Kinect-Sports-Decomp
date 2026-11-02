// Adjustor thunk in hkpGroupCollisionFilter's vtable for its hkpCollidableCollidableFilter
// subobject (+0x8): subtract the offset and tail-call the scalar deleting destructor
// ??_GhkpGroupCollisionFilter@@UAAPAXI@Z. A qualified call of MSVC's member name for the scalar
// deleting destructor, __delDtor, references ??_G directly; the adjustment is plain arithmetic
// (a static_cast adds a null check). The thunk keeps its fn_ name.
#include "havok/hkpCollisionFilter.h"
class hkpGroupCollisionFilter : public hkpCollisionFilter {
public:
    virtual ~hkpGroupCollisionFilter();
};

extern "C" void *fn_82D39410(hkpCollidableCollidableFilter *self, unsigned int flags)
{
    hkpGroupCollisionFilter *obj = (hkpGroupCollisionFilter *)((char *)self - 0x8);
    return obj->hkpGroupCollisionFilter::__delDtor(flags);
}
