// cleanupLoadedObjecthkpConvexVerticesConnectivity: the cleanup function in hkpConvexVerticesConnectivity's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpConvexVerticesConnectivity.h"

void HK_CALL cleanupLoadedObjecthkpConvexVerticesConnectivity(void *p)
{
    static_cast<hkpConvexVerticesConnectivity *>(p)->~hkpConvexVerticesConnectivity();
}
