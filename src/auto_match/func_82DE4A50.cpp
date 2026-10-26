// cleanupLoadedObjecthkpPoweredChainMapper: the cleanup function in hkpPoweredChainMapper's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpPoweredChainMapper {
public:
    virtual ~hkpPoweredChainMapper();
};

void HK_CALL cleanupLoadedObjecthkpPoweredChainMapper(void *p)
{
    static_cast<hkpPoweredChainMapper *>(p)->~hkpPoweredChainMapper();
}
