// cleanupLoadedObjecthkpMountedBallGun: the cleanup function in hkpMountedBallGun's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMountedBallGun {
public:
    virtual ~hkpMountedBallGun();
};

void HK_CALL cleanupLoadedObjecthkpMountedBallGun(void *p)
{
    static_cast<hkpMountedBallGun *>(p)->~hkpMountedBallGun();
}
