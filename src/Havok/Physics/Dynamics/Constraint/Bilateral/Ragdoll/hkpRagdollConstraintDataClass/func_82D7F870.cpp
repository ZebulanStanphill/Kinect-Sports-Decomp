// cleanupLoadedObjecthkpRagdollConstraintData: the cleanup function in hkpRagdollConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpRagdollConstraintData {
public:
    virtual ~hkpRagdollConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpRagdollConstraintData(void *p)
{
    static_cast<hkpRagdollConstraintData *>(p)->~hkpRagdollConstraintData();
}
