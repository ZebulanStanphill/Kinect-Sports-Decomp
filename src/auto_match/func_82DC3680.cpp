// hkpConstraintCollisionFilter's deleting destructor adjustor thunk for its hkpRayShapeCollectionFilter subobject (+0x10):
// subtract the offset, then branch to the scalar deleting destructor
// ??_GhkpConstraintCollisionFilter@@UAAPAXI@Z (0x82DC3688, func_82DC3688.cpp). The compiler's own thunk
// (??_EhkpConstraintCollisionFilter@@WBA@AAPAXI@Z) branches to the vector deleting destructor ??_E..., a weak alias the
// linker resolved to ??_G, so it cannot name the original's target; a qualified call of MSVC's member name
// for the scalar deleting destructor, __delDtor, does (its body is too big to be inlined here). The
// adjustment is plain arithmetic: a static_cast, even to a reference, adds a null check. The thunk keeps its
// fn_ name (no rename map). Classes as in func_82DC3688.cpp.
#include "havok/hkpConstraintCollisionFilter.h"

hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
{
}

extern "C" void *fn_82DC3680(hkpRayShapeCollectionFilter *self, unsigned int flags)
{
    hkpConstraintCollisionFilter *filter = (hkpConstraintCollisionFilter *)((char *)self - 0x10);
    return filter->hkpConstraintCollisionFilter::__delDtor(flags);
}
