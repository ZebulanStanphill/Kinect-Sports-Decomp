// cleanupLoadedObjecthkpStiffSpringChainData: the cleanup function in hkpStiffSpringChainData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStiffSpringChainData {
public:
    virtual ~hkpStiffSpringChainData();
};

void HK_CALL cleanupLoadedObjecthkpStiffSpringChainData(void *p)
{
    static_cast<hkpStiffSpringChainData *>(p)->~hkpStiffSpringChainData();
}
