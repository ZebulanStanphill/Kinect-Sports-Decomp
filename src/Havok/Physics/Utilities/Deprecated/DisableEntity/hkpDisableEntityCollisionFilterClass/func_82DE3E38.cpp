// finishLoadedObjecthkpDisableEntityCollisionFilter: the finish function in hkpDisableEntityCollisionFilter's
// hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpCollisionFilter (its four filter interfaces
// at +0x8..+0x14), then hkpEntityListener at +0x30.
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpEntityListener.h"

class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpDisableEntityCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_disabledPairs(flag) {}
    virtual ~hkpDisableEntityCollisionFilter();

    hkArray<hkpEntity *> m_disabledPairs;   // +0x34
};

void HK_CALL finishLoadedObjecthkpDisableEntityCollisionFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDisableEntityCollisionFilter(f);
}
