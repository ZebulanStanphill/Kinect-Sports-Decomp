// cleanupLoadedObjecthkpReorientAction: the cleanup function in hkpReorientAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpReorientAction {
public:
    virtual ~hkpReorientAction();
};

void HK_CALL cleanupLoadedObjecthkpReorientAction(void *p)
{
    static_cast<hkpReorientAction *>(p)->~hkpReorientAction();
}
