// cleanupLoadedObjecthkxEnum: the cleanup function in hkxEnum's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkxEnum.h"

void HK_CALL cleanupLoadedObjecthkxEnum(void *p)
{
    static_cast<hkxEnum *>(p)->~hkxEnum();
}
