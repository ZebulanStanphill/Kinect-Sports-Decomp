// cleanupLoadedObjecthkpRotationalConstraintData: the cleanup function in hkpRotationalConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpRotationalConstraintData {
public:
    virtual ~hkpRotationalConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpRotationalConstraintData(void *p)
{
    static_cast<hkpRotationalConstraintData *>(p)->~hkpRotationalConstraintData();
}
