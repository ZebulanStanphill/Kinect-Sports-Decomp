// cleanupLoadedObjecthkpGenericConstraintData: the cleanup function in hkpGenericConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpGenericConstraintData {
public:
    virtual ~hkpGenericConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpGenericConstraintData(void *p)
{
    static_cast<hkpGenericConstraintData *>(p)->~hkpGenericConstraintData();
}
