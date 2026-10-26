// cleanupLoadedObjecthkpMouseSpringAction: the cleanup function in hkpMouseSpringAction's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMouseSpringAction {
public:
    virtual ~hkpMouseSpringAction();
};

void HK_CALL cleanupLoadedObjecthkpMouseSpringAction(void *p)
{
    static_cast<hkpMouseSpringAction *>(p)->~hkpMouseSpringAction();
}
