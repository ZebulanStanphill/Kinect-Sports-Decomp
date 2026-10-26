// cleanupLoadedObjecthkpRagdollLimitsData: the cleanup function in hkpRagdollLimitsData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpRagdollLimitsData {
public:
    virtual ~hkpRagdollLimitsData();
};

void HK_CALL cleanupLoadedObjecthkpRagdollLimitsData(void *p)
{
    static_cast<hkpRagdollLimitsData *>(p)->~hkpRagdollLimitsData();
}
