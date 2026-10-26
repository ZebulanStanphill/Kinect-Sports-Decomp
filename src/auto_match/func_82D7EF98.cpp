// cleanupLoadedObjecthkpHingeConstraintData: the cleanup function in hkpHingeConstraintData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpHingeConstraintData {
public:
    virtual ~hkpHingeConstraintData();
};

void HK_CALL cleanupLoadedObjecthkpHingeConstraintData(void *p)
{
    static_cast<hkpHingeConstraintData *>(p)->~hkpHingeConstraintData();
}
