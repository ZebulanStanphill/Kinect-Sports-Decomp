// Adjustor thunk in hkpDisableEntityCollisionFilter's vtable for its hkpCollidableCollidableFilter subobject (+0x8): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpDisableEntityCollisionFilter@@UAAPAXI@Z (0x82DE3ED8).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkpCollisionFilter.h"
class hkpEntityListener {
public:
    virtual ~hkpEntityListener();
};
class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:

};

extern "C" void *fn_82DE3F40(hkpCollidableCollidableFilter *self, unsigned int flags)
{
    hkpDisableEntityCollisionFilter *obj = (hkpDisableEntityCollisionFilter *)((char *)self - 0x8);
    return obj->hkpDisableEntityCollisionFilter::__delDtor(flags);
}
