// cleanupLoadedObjecthkpWheelConstraintData: the cleanup function in hkpWheelConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpWheelConstraintData {
public:
    virtual ~hkpWheelConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpWheelConstraintData(void *p)
{
    static_cast<hkpWheelConstraintData *>(p)->~hkpWheelConstraintData();
}
