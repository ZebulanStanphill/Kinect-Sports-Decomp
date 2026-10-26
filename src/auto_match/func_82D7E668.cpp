// cleanupLoadedObjecthkpBreakableConstraintData: the cleanup function in hkpBreakableConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpBreakableConstraintData {
public:
    virtual ~hkpBreakableConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpBreakableConstraintData(void *p)
{
    static_cast<hkpBreakableConstraintData *>(p)->~hkpBreakableConstraintData();
}
