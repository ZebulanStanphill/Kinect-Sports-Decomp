// hkpFastMeshShape::hkpFastMeshShape(hkFinishLoadedObjectFlag) (Physics/Collide/Shape/Deprecated/FastMesh/
// hkpFastMeshShape.h): hkpMeshShape's out-of-line finish constructor (82D4B0F8), the two vtables
// (hkpShape part at +0, hkpShapeContainer part at +0x10), and when finishing m_type = 0x18 (the triangle
// collection type hkpMeshShape also sets). It keeps its fn_ name (a Matching unit calls it), so the
// constructor is called explicitly.
#include "havok/hkpMeshShape.h"

class hkpFastMeshShape : public hkpMeshShape {
public:
    hkpFastMeshShape(hkFinishLoadedObjectFlag flag) : hkpMeshShape(flag)
    {
        if (flag.m_finishing) {
            m_type = HK_SHAPE_TRIANGLE_COLLECTION;
        }
    }
    virtual const hkClass *getClassType() const;
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

extern "C" hkpFastMeshShape *fn_82D3A3A0(hkpFastMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpFastMeshShape::hkpFastMeshShape(flag);
    return self;
}
