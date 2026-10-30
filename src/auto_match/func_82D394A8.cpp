// Adjustor thunk in hkpCollisionFilterList's vtable for its hkpRayShapeCollectionFilter subobject (+0x10): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpCollisionFilterList@@UAAPAXI@Z (0x82D394B8).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkpCollisionFilter.h"
class hkpCollisionFilterList : public hkpCollisionFilter {
public:

};

extern "C" void *fn_82D394A8(hkpRayShapeCollectionFilter *self, unsigned int flags)
{
    hkpCollisionFilterList *obj = (hkpCollisionFilterList *)((char *)self - 0x10);
    return obj->hkpCollisionFilterList::__delDtor(flags);
}
