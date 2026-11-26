// Adjustor thunk in hkpConstraintCollisionFilter's hkpShapeCollectionFilter vtable (subobject at +0xC): adjusts
// this and tail-calls the scalar deleting destructor with the same flags. The compiler emits it with the vtable as
// ??_EhkpConstraintCollisionFilter@@W...@AAPAXI@Z, branching to the weak alias ??_EhkpConstraintCollisionFilter@@UAAPAXI@Z,
// while symbols.txt names that address after the scalar deleting destructor (??_G..., func_82DC3688.cpp). A qualified
// call of MSVC's scalar deleting destructor member __delDtor references ??_G directly; it stays a tail call because
// ??_G, with the destructor inlined into it, is too big to inline (with the destructor only declared, /O2 inlines it).
// The class declarations are those of func_82DC3688.cpp; the destructor is defined inline here so that this unit
// does not define ??1hkpConstraintCollisionFilter@@UAA@XZ a second time.
#include "havok/hkpConstraintListener.h"
#include "havok/hkpPairCollisionFilter.h"

// RTTI: hkpPairCollisionFilter at +0x0, hkpConstraintListener at +0x40.
class hkpConstraintCollisionFilter : public hkpPairCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

inline hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
{
}

extern "C" void *fn_82DC3678(char *self, unsigned int flags)
{
    return ((hkpConstraintCollisionFilter *)(self - 0xC))->hkpConstraintCollisionFilter::__delDtor(flags);
}
