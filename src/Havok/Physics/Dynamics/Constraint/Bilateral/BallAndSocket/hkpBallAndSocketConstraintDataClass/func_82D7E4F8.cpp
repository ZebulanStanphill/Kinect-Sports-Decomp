// cleanupLoadedObjecthkpBallAndSocketConstraintData: the cleanup function in hkpBallAndSocketConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpBallAndSocketConstraintData {
public:
    virtual ~hkpBallAndSocketConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpBallAndSocketConstraintData(void *p)
{
    static_cast<hkpBallAndSocketConstraintData *>(p)->~hkpBallAndSocketConstraintData();
}
