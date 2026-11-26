// Adjustor thunk in hkpAabbTreeCollidableRaycaster's vtable for its hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector subobject (+0xC): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpAabbTreeCollidableRaycaster@@UAAPAXI@Z (0x83097030).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkpAabbTreeCollidableRaycaster.h"
extern "C" void *fn_83097020(hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector *self, unsigned int flags)
{
    hkpAabbTreeCollidableRaycaster *obj = (hkpAabbTreeCollidableRaycaster *)((char *)self - 0xc);
    return obj->hkpAabbTreeCollidableRaycaster::__delDtor(flags);
}
