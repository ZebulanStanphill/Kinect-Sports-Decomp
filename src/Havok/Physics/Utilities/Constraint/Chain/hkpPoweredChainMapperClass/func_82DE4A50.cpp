// cleanupLoadedObjecthkpPoweredChainMapper: the cleanup function in hkpPoweredChainMapper's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPoweredChainMapper.h"

void HK_CALL cleanupLoadedObjecthkpPoweredChainMapper(void *p)
{
    static_cast<hkpPoweredChainMapper *>(p)->~hkpPoweredChainMapper();
}
