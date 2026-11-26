// hkpConstraintCollisionFilter's deleting destructor adjustor thunk for its hkpConstraintListener subobject (+0x40):
// subtract the offset, then branch to the scalar deleting destructor
// ??_GhkpConstraintCollisionFilter@@UAAPAXI@Z (0x82DC3688, func_82DC3688.cpp). The compiler's own thunk
// (??_EhkpConstraintCollisionFilter@@WEA@AAPAXI@Z) branches to the vector deleting destructor ??_E..., a weak alias the
// linker resolved to ??_G, so it cannot name the original's target; a qualified call of MSVC's member name
// for the scalar deleting destructor, __delDtor, does (its body is too big to be inlined here). The
// adjustment is plain arithmetic: a static_cast, even to a reference, adds a null check. The thunk keeps its
// fn_ name (no rename map). Classes as in func_82DC3688.cpp.
#include "havok/hkpConstraintListener.h"
#include "havok/hkpPairCollisionFilter.h"

// RTTI: hkpPairCollisionFilter at +0x0, hkpConstraintListener at +0x40.
class hkpConstraintCollisionFilter : public hkpPairCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
{
}

extern "C" void *fn_82DC3740(hkpConstraintListener *self, unsigned int flags)
{
    hkpConstraintCollisionFilter *filter = (hkpConstraintCollisionFilter *)((char *)self - 0x40);
    return filter->hkpConstraintCollisionFilter::__delDtor(flags);
}
