// cleanupLoadedObjecthkxCamera: the cleanup function in hkxCamera's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxCamera {
public:
    virtual ~hkxCamera();
};

void HK_CALL cleanupLoadedObjecthkxCamera(void *p)
{
    static_cast<hkxCamera *>(p)->~hkxCamera();
}
