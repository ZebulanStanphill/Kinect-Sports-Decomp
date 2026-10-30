// Adjustor thunk in hkpMeshShape's vtable for its hkpShapeContainer subobject (+0x10): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpMeshShape@@UAAPAXI@Z (0x82D3A410).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkpShape.h"
class hkpMeshShape : public hkpShapeCollection {
public:

};

extern "C" void *fn_82D3A408(hkpShapeContainer *self, unsigned int flags)
{
    hkpMeshShape *obj = (hkpMeshShape *)((char *)self - 0x10);
    return obj->hkpMeshShape::__delDtor(flags);
}
