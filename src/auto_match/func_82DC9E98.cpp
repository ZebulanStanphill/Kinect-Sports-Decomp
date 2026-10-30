// Adjustor thunk in hkpPairCollisionFilter's vtable for its hkpShapeCollectionFilter subobject (+0xC): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpPairCollisionFilter@@UAAPAXI@Z (0x82DC9EB0).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkpCollisionFilter.h"
class hkpPairCollisionFilter : public hkpCollisionFilter {
public:

};

extern "C" void *fn_82DC9E98(hkpShapeCollectionFilter *self, unsigned int flags)
{
    hkpPairCollisionFilter *obj = (hkpPairCollisionFilter *)((char *)self - 0xc);
    return obj->hkpPairCollisionFilter::__delDtor(flags);
}
