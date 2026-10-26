// cleanupLoadedObjecthkpPoweredChainData: the cleanup function in hkpPoweredChainData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpPoweredChainData {
public:
    virtual ~hkpPoweredChainData();
};

void HK_CALL cleanupLoadedObjecthkpPoweredChainData(void *p)
{
    static_cast<hkpPoweredChainData *>(p)->~hkpPoweredChainData();
}
