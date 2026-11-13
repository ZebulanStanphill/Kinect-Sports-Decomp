// cleanupLoadedObjecthkpSpringAction: the cleanup function in hkpSpringAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSpringAction {
public:
    virtual ~hkpSpringAction();
};

void HK_CALL cleanupLoadedObjecthkpSpringAction(void *p)
{
    static_cast<hkpSpringAction *>(p)->~hkpSpringAction();
}
