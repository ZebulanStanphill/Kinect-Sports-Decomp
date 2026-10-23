// hkpConvexPieceMeshShape::~hkpConvexPieceMeshShape (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/
// hkpConvexPieceMeshShape.cpp). RTTI: hkpShapeCollection (hkpShape at +0, hkpShapeContainer at +0x10).
#include "havok/hkpShape.h"

class hkpConvexPieceStreamData : public hkReferencedObject {
};

class hkpConvexPieceMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag flag);
    virtual ~hkpConvexPieceMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    const hkpConvexPieceStreamData *m_convexPieceStream;   // +0x18
    const hkpShapeCollection *m_displayMesh;               // +0x1C
    hkReal m_radius;                                       // +0x20
};

hkpConvexPieceMeshShape::~hkpConvexPieceMeshShape()
{
    m_displayMesh->removeReference();
    m_convexPieceStream->removeReference();
}
