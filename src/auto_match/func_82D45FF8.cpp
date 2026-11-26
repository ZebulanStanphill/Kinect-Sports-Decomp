// Adjustor thunk in hkpCompressedMeshShape's vtable for its hkpShapeContainer subobject (+0x10): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpCompressedMeshShape@@UAAPAXI@Z (0x82D46320).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The thunk keeps its fn_ name.
#include "havok/hkpCompressedMeshShape.h"

extern "C" void *fn_82D45FF8(hkpShapeContainer *self, unsigned int flags)
{
    hkpCompressedMeshShape *obj = (hkpCompressedMeshShape *)((char *)self - 0x10);
    return obj->hkpCompressedMeshShape::__delDtor(flags);
}
