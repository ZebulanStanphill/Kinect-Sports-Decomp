// hkpTransformShape::setTransform(const hkTransform &) (Physics/Collide/Shape/Misc/Transform/hkpTransformShape.cpp):
// copies the transform, then sets m_rotation from the copied member's rotation (hkQuaternion::set(const hkRotation &)
// is out of line, 82CE5990). Same class layout as the Matching constructor func_82D50C58.
// No unit references fn_82D50C18, so it is renamed.
#include "havok/hkpTransformShape.h"

void hkpTransformShape::setTransform(const hkTransform &transform)
{
    m_transform = transform;
    m_rotation.set(m_transform.getRotation());
}
