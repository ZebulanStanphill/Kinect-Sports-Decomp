// cleanupLoadedObjecthkpConstraintChainInstance: the cleanup function in hkpConstraintChainInstance's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConstraintChainInstance {
public:
    virtual ~hkpConstraintChainInstance();
};

void HK_CALL cleanupLoadedObjecthkpConstraintChainInstance(void *p)
{
    static_cast<hkpConstraintChainInstance *>(p)->~hkpConstraintChainInstance();
}
