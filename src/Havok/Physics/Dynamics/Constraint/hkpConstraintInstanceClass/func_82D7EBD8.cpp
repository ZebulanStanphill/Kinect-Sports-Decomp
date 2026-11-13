// cleanupLoadedObjecthkpConstraintInstance: the cleanup function in hkpConstraintInstance's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConstraintInstance {
public:
    virtual ~hkpConstraintInstance();
};

void HK_CALL cleanupLoadedObjecthkpConstraintInstance(void *p)
{
    static_cast<hkpConstraintInstance *>(p)->~hkpConstraintInstance();
}
