// cleanupLoadedObjecthkxEnvironment: the cleanup function in hkxEnvironment's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxEnvironment {
public:
    virtual ~hkxEnvironment();
};

void HK_CALL cleanupLoadedObjecthkxEnvironment(void *p)
{
    static_cast<hkxEnvironment *>(p)->~hkxEnvironment();
}
