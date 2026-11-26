// hkpConstrainedSystemFilter scalar deleting destructor ??_GhkpConstrainedSystemFilter@@UAAPAXI@Z: calls the out-of-line ~hkpConstrainedSystemFilter below (fn_82DEFAE0, ??1hkpConstrainedSystemFilter@@UAA@XZ), then frees through the class allocator. The deleting destructor is emitted with the vtable.
// hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter (hkpConstrainedSystemFilter.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpCollisionFilter.h"

// Physics/Collide/Filter/ConstrainedSystem/hkpConstrainedSystemFilter.h. RTTI: hkpCollisionFilter (its four filter
// interfaces at +0x8..+0x14), then hkpConstraintListener at +0x30.
class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstrainedSystemFilter(const hkpCollisionFilter *otherFilter = HK_NULL);
    hkpConstrainedSystemFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpConstrainedSystemFilter();

    const hkpCollisionFilter *m_otherFilter;   // +0x34
};

hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter()
{
    if (m_otherFilter)
        m_otherFilter->removeReference();
}
