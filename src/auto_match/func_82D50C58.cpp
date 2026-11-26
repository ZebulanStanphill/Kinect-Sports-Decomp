// hkpTransformShape::hkpTransformShape(const hkpShape *childShape, const hkTransform &transform)
// (Physics/Collide/Shape/Misc/Transform/hkpTransformShape.cpp), /O2 /QVMXReserve (flag file): the child
// container references the child, then setTransform() copies the transform and sets m_rotation from the
// copied member's rotation (hkQuaternion::set(const hkRotation &) is out of line, fn_82CE5990; its second
// argument is why the copy's destination is in r4). No unit references the constructor, so it is renamed.
#include "havok/hkpShape.h"
#include "havok/hkTransform.h"
#include "havok/hkQuaternion.h"

class hkpTransformShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTransformShape(const hkpShape *childShape, const hkTransform &transform);
    void setTransform(const hkTransform &transform)
    {
        m_transform = transform;
        m_rotation.set(m_transform.getRotation());
    }

    hkpSingleShapeContainer m_childShape;   // +0x10
    int m_childShapeSize;                   // +0x18
    hkQuaternion m_rotation;                // +0x20
    hkTransform m_transform;                // +0x30
};

hkpTransformShape::hkpTransformShape(const hkpShape *childShape, const hkTransform &transform)
    : hkpShape(hkpShapeType(15)), m_childShape(childShape)
{
    setTransform(transform);
}
