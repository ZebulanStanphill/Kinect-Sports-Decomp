// cleanupLoadedObjecthkpConvexVerticesConnectivity: the cleanup function in hkpConvexVerticesConnectivity's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConvexVerticesConnectivity {
public:
    virtual ~hkpConvexVerticesConnectivity();
};

void HK_CALL cleanupLoadedObjecthkpConvexVerticesConnectivity(void *p)
{
    static_cast<hkpConvexVerticesConnectivity *>(p)->~hkpConvexVerticesConnectivity();
}
