// hkpConvexPieceShape::hkpConvexPieceShape(hkReal radius).
// hkpConvexPieceShape (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/hkpConvexPieceShape.h): RTTI bases
// hkpConvexShape (+0) and hkpShapeContainer (+0x14); type HK_SHAPE_CONVEX_PIECE (0x15). Its vtables are named
// VFTABLE_for_hkpConvexPieceShape@@_821D7668 (+0) and _821D76E4 (+0x14) in the game's symbols. The destructor
// is implicit (only the bases' vtable stores remain).
#include "havok/hkpShape.h"

class hkVector4;

class hkpConvexPieceShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexPieceShape(hkReal radius);

    virtual const hkpShapeContainer *getContainer() const;
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    int m_numVertices;                  // +0x18
    const hkVector4 *m_vertices;        // +0x1C
    const hkpShape *m_displayMesh;      // +0x20
    int m_numDisplayShapeKeys;          // +0x24
    hkpShapeKey *m_displayShapeKeys;    // +0x28
};

hkpConvexPieceShape::hkpConvexPieceShape(hkReal radius) : hkpConvexShape(hkpShapeType(0x15), radius)
{
}
