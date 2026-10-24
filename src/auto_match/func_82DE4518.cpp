// hkpGroupCollisionFilter's deleting destructor adjustor thunk for its hkpRayCollidableFilter subobject (+0x14):
// subtract the offset, then branch to the scalar deleting destructor ??_GhkpGroupCollisionFilter@@UAAPAXI@Z
// (0x82DE4520, func_82DE4520.cpp). The compiler's own thunk (??_EhkpGroupCollisionFilter@@WBE@AAPAXI@Z) branches to the
// vector deleting destructor ??_E..., a weak alias the linker resolved to ??_G, so it cannot name the
// original's target; a qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// does (its body is too big to be inlined here). The adjustment is plain arithmetic: a static_cast, even to
// a reference, adds a null check. The thunk keeps its fn_ name (no rename map).
#include "havok/hkpCollisionFilter.h"

class hkpGroupCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGroupCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}

    hkBool m_noGroupCollisionEnabled;     // +0x30
    hkUint32 m_collisionGroups[32];       // +0x34
};

extern "C" void *fn_82DE4518(hkpRayCollidableFilter *self, unsigned int flags)
{
    hkpGroupCollisionFilter *filter = (hkpGroupCollisionFilter *)((char *)self - 0x14);
    return filter->hkpGroupCollisionFilter::__delDtor(flags);
}
