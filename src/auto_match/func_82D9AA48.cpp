#include "havok/hkBase.h"
#include "havok/hkpCachingShapePhantom.h"

#pragma intrinsic(__vxor)

extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

hkpPhantom::~hkpPhantom()
{
    firePhantomDeleted();
}
