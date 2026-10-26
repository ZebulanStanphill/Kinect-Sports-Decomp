// cleanupLoadedObjecthkpMalleableConstraintData: the cleanup function in hkpMalleableConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMalleableConstraintData {
public:
    virtual ~hkpMalleableConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpMalleableConstraintData(void *p)
{
    static_cast<hkpMalleableConstraintData *>(p)->~hkpMalleableConstraintData();
}
