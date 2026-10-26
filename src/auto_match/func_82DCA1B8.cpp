// cleanupLoadedObjecthkpMoppCode: the cleanup function in hkpMoppCode's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMoppCode {
public:
    virtual ~hkpMoppCode();
};

void HK_CALL cleanupLoadedObjecthkpMoppCode(void *p)
{
    static_cast<hkpMoppCode *>(p)->~hkpMoppCode();
}
