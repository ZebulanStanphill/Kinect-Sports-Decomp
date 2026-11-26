// hkpTransformShape::hkpTransformShape(const hkpShape *childShape, const hkTransform &transform)
// (Physics/Collide/Shape/Misc/Transform/hkpTransformShape.cpp), /O2 /QVMXReserve (flag file): the child
// container references the child, then setTransform()'s body (out of line in the game, 82D50C18, inlined
// here) copies the transform and sets m_rotation from the copied member's rotation (hkQuaternion::set(const hkRotation &) is out of line, 82CE5990; its second
// argument is why the copy's destination is in r4). No unit references the constructor, so it is renamed.
#include "havok/hkpTransformShape.h"

hkpTransformShape::hkpTransformShape(const hkpShape *childShape, const hkTransform &transform)
    : hkpShape(hkpShapeType(15)), m_childShape(childShape)
{
    m_transform = transform;
    m_rotation.set(m_transform.getRotation());
}
