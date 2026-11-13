// cleanupLoadedObjecthkpPointToPlaneConstraintData: the cleanup function in hkpPointToPlaneConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpPointToPlaneConstraintData {
public:
    virtual ~hkpPointToPlaneConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpPointToPlaneConstraintData(void *p)
{
    static_cast<hkpPointToPlaneConstraintData *>(p)->~hkpPointToPlaneConstraintData();
}
