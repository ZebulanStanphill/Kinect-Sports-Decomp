// hkpTransformShape::setTransform(const hkTransform &) (Physics/Collide/Shape/Misc/Transform/hkpTransformShape.cpp):
// copies the transform, then sets m_rotation from the copied member's rotation (hkQuaternion::set(const hkRotation &)
// is out of line, fn_82CE5990). Same class layout as the Matching constructor func_82D50C58.
// No unit references fn_82D50C18, so it is renamed.
#include "havok/hkpShape.h"
#include "havok/hkTransform.h"

class hkQuaternion {
public:
    hkVector4 m_vec;
};

// hkQuaternion::set(const hkRotation &) is out of line (fn_82CE5990).
extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

class hkpTransformShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    void setTransform(const hkTransform &transform);

    hkpSingleShapeContainer m_childShape;   // +0x10
    int m_childShapeSize;                   // +0x18
    hkQuaternion m_rotation;                // +0x20
    hkTransform m_transform;                // +0x30
};

void hkpTransformShape::setTransform(const hkTransform &transform)
{
    m_transform = transform;
    fn_82CE5990(&m_rotation, m_transform.getRotation());
}
