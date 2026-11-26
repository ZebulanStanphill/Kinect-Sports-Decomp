// hkQuaternion::set(const hkRotation &) (Common/Base/Math/Quaternion/hkQuaternion.cpp): a branch to
// the conversion itself, 82CE57B0 (Havok's _set; setAndNormalize, 82CE5A90, calls it too).
#include "havok/hkQuaternion.h"

class hkRotation;
extern "C" void fn_82CE57B0(hkQuaternion *self, const hkRotation &r);

void hkQuaternion::set(const hkRotation &r)
{
    fn_82CE57B0(this, r);
}
