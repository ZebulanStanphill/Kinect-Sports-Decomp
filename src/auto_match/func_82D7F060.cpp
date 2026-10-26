// cleanupLoadedObjecthkpKeyframedRigidMotion: the cleanup function in hkpKeyframedRigidMotion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpKeyframedRigidMotion {
public:
    virtual ~hkpKeyframedRigidMotion();
};

void HK_CALL cleanupLoadedObjecthkpKeyframedRigidMotion(void *p)
{
    static_cast<hkpKeyframedRigidMotion *>(p)->~hkpKeyframedRigidMotion();
}
