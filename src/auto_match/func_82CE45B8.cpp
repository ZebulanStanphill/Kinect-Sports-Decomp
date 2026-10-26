// cleanupLoadedObjecthkSimpleLocalFrame: the cleanup function in hkSimpleLocalFrame's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkSimpleLocalFrame {
public:
    virtual ~hkSimpleLocalFrame();
};

void HK_CALL cleanupLoadedObjecthkSimpleLocalFrame(void *p)
{
    static_cast<hkSimpleLocalFrame *>(p)->~hkSimpleLocalFrame();
}
