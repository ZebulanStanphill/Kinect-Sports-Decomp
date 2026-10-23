// hkpExtendedMeshShape::~hkpExtendedMeshShape (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/
// hkpExtendedMeshShape.cpp), user-written and empty: the welding info, shapes subpart and triangles subpart
// hkArrays are destroyed in reverse order, then the bases (hkpShapeCollection: hkpShapeContainer at +0x10).
// The shapes subparts have an out-of-line destructor (fn_82D43000, which keeps its fn_ name because a
// Matching unit calls it), run for each element first to last.
#include "havok/hkpShape.h"

extern "C" void fn_82D43000(void *self);   // hkpExtendedMeshShape::ShapesSubpart::~ShapesSubpart

class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct TrianglesSubpart {
        hkUint32 m_data[0x18];   // 0x60 bytes, nothing to destroy
    };
    struct ShapesSubpart {
        ~ShapesSubpart() { fn_82D43000(this); }
        hkUint32 m_data[0x10];   // 0x40 bytes: hkArray< hkRefPtr<hkpConvexShape> > m_childShapes at +0x14
    };
    hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag);
    virtual ~hkpExtendedMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkUint8 m_data[0xB4 - 0x18];                    // +0x18 (embedded subpart, AABB, ...)
    hkArray<TrianglesSubpart> m_trianglesSubparts;  // +0xB4
    hkArray<ShapesSubpart> m_shapesSubparts;        // +0xC0
    hkArray<hkUint16> m_weldingInfo;                // +0xCC
};

hkpExtendedMeshShape::~hkpExtendedMeshShape()
{
}
