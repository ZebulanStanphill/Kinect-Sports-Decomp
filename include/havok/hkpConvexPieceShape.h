// hkpConvexPieceShape (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/hkpConvexPieceShape.h): the convex shape
// that hkpConvexPieceMeshShape builds for one piece, over vertices it does not own, with the display shape keys
// of the triangles it covers. It has no hkClass; the bases are the RTTI's (hkpConvexShape at +0,
// hkpShapeContainer at +0x14) and the members are those its units name (82D6F7E0, 82D6FD20); the size is not
// known. The names follow Havok's header.
//
// - The constructor is out of line (??0hkpConvexPieceShape@@QAA@M@Z, 82D6F7E0) and stores
//   HK_SHAPE_CONVEX_PIECE; the members are left uninitialised.
// - The destructor is implicit (only the bases' vtable stores remain); the deleting destructor is 82D6FD20.
// The vtables are named VFTABLE_for_hkpConvexPieceShape@@_821D7668 (+0, 18 slots) and _821D76E4 (+0x14) in the
// game's symbols (??_7hkpConvexPieceShape@@6BhkpConvexShape@@@, ??_7hkpConvexPieceShape@@6BhkpShapeContainer@@@).
#ifndef HAVOK_HKPCONVEXPIECESHAPE_H
#define HAVOK_HKPCONVEXPIECESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpConvexPieceShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexPieceShape(hkReal radius);   // out of line (82D6F7E0)

    virtual const hkpShapeContainer *getContainer() const;
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    int m_numVertices;                 // +0x18
    const hkVector4 *m_vertices;       // +0x1C
    const hkpShape *m_displayMesh;     // +0x20
    int m_numDisplayShapeKeys;         // +0x24
    hkpShapeKey *m_displayShapeKeys;   // +0x28
};

#endif
