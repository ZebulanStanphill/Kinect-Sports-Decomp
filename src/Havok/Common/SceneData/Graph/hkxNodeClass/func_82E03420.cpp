// cleanupLoadedObjecthkxNode: the cleanup function in hkxNode's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxNode {
public:
    virtual ~hkxNode();
};

void HK_CALL cleanupLoadedObjecthkxNode(void *p)
{
    static_cast<hkxNode *>(p)->~hkxNode();
}
