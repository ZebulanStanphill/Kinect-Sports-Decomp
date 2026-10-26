// cleanupLoadedObjecthkpStiffSpringConstraintData: the cleanup function in hkpStiffSpringConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStiffSpringConstraintData {
public:
    virtual ~hkpStiffSpringConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpStiffSpringConstraintData(void *p)
{
    static_cast<hkpStiffSpringConstraintData *>(p)->~hkpStiffSpringConstraintData();
}
