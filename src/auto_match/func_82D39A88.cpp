// Adjustor thunk in hkpConvexListShape's vtable for its hkpShapeContainer subobject (+0x14): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpConvexListShape@@UAAPAXI@Z (0x82D39A90).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkpShape.h"
class hkpConvexListShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
};

extern "C" void *fn_82D39A88(hkpShapeContainer *self, unsigned int flags)
{
    hkpConvexListShape *obj = (hkpConvexListShape *)((char *)self - 0x14);
    return obj->hkpConvexListShape::__delDtor(flags);
}
