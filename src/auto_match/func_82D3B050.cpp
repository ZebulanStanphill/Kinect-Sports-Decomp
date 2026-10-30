// Adjustor thunk in hkpSimpleMeshShape's vtable for its hkpShapeContainer subobject (+0x10): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpSimpleMeshShape@@UAAPAXI@Z (0x82D3B160).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkpShape.h"
class hkpSimpleMeshShape : public hkpShapeCollection {
public:

};

extern "C" void *fn_82D3B050(hkpShapeContainer *self, unsigned int flags)
{
    hkpSimpleMeshShape *obj = (hkpSimpleMeshShape *)((char *)self - 0x10);
    return obj->hkpSimpleMeshShape::__delDtor(flags);
}
