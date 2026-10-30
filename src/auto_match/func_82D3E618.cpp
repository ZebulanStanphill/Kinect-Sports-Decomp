// Adjustor thunk in hkpListShape's vtable for its hkpShapeContainer subobject (+0x10): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpListShape@@UAAPAXI@Z (0x82D3E698).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkpShape.h"
class hkpListShape : public hkpShapeCollection {
public:

};

extern "C" void *fn_82D3E618(hkpShapeContainer *self, unsigned int flags)
{
    hkpListShape *obj = (hkpListShape *)((char *)self - 0x10);
    return obj->hkpListShape::__delDtor(flags);
}
