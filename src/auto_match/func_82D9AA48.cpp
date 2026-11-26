#include "havok/hkBase.h"
#include "havok/hkpCachingShapePhantom.h"

#pragma intrinsic(__vxor)

hkpPhantom::~hkpPhantom()
{
    firePhantomDeleted();
}
