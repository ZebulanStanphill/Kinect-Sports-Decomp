// cleanupLoadedObjecthkpAngularDashpotAction: the cleanup function in hkpAngularDashpotAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpAngularDashpotAction {
public:
    virtual ~hkpAngularDashpotAction();
};

void HK_CALL cleanupLoadedObjecthkpAngularDashpotAction(void *p)
{
    static_cast<hkpAngularDashpotAction *>(p)->~hkpAngularDashpotAction();
}
