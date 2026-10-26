// cleanupLoadedObjecthkpConstraintChainInstanceAction: the cleanup function in hkpConstraintChainInstanceAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConstraintChainInstanceAction {
public:
    virtual ~hkpConstraintChainInstanceAction();
};

void HK_CALL cleanupLoadedObjecthkpConstraintChainInstanceAction(void *p)
{
    static_cast<hkpConstraintChainInstanceAction *>(p)->~hkpConstraintChainInstanceAction();
}
