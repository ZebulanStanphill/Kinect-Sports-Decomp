// finishLoadedObjecthkpConstrainedSystemFilter: the finish function in hkpConstrainedSystemFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpCollisionFilter (its four filter interfaces at
// +0x8..+0x14), then hkpConstraintListener at +0x30.
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpConstraintListener.h"

class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstrainedSystemFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpConstrainedSystemFilter();

    const hkpCollisionFilter *m_otherFilter;   // +0x34
};

void HK_CALL finishLoadedObjecthkpConstrainedSystemFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConstrainedSystemFilter(f);
}
