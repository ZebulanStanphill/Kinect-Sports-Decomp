// cleanupLoadedObjecthkpBallGun: the cleanup function in hkpBallGun's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpBallGun {
public:
    virtual ~hkpBallGun();
};

void HK_CALL cleanupLoadedObjecthkpBallGun(void *p)
{
    static_cast<hkpBallGun *>(p)->~hkpBallGun();
}
