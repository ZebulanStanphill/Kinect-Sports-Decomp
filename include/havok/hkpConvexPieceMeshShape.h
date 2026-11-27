// hkpConvexPieceMeshShape (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/hkpConvexPieceMeshShape.h), 0x24
// bytes: a shape collection that returns convex pieces of a display mesh, read from an
// hkpConvexPieceStreamData. The members, offsets and pointer types are the game's hkClass (initialiser 8312D270:
// convexPieceStream points at an hkpConvexPieceStreamData, displayMesh at an hkpShapeCollection). RTTI
// ??_R3hkpConvexPieceMeshShape@@8; vtables ??_7hkpConvexPieceMeshShape@@6BhkpShape@@@ (13 slots) and
// ??_7hkpConvexPieceMeshShape@@6BhkpShapeContainer@@@.
//
// - The constructor is out of line (82D495A0). Its symbol gives both pointers as const hkReferencedObject *
//   (??0hkpConvexPieceMeshShape@@QAA@PBVhkReferencedObject@@0M@Z); the first is stored to m_displayMesh, the
//   second to m_convexPieceStream, and both get a reference.
// - The destructor is out of line (82D49610: releases both); the deleting destructor is 82D39C68.
// - The finish constructor is out of line (82D39BE8): when finishing it sets
//   HK_SHAPE_COLLECTION again after hkpShapeCollection's.
#ifndef HAVOK_HKPCONVEXPIECEMESHSHAPE_H
#define HAVOK_HKPCONVEXPIECEMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpConvexPieceStreamData;

class hkpConvexPieceMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexPieceMeshShape(const hkReferencedObject *displayMesh, const hkReferencedObject *convexPieceStream,
                            hkReal radius);   // out of line (82D495A0)
    hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag flag);   // out of line (82D39BE8)
    virtual ~hkpConvexPieceMeshShape();   // out of line (82D49610)

    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    const hkpConvexPieceStreamData *m_convexPieceStream;   // +0x18
    const hkpShapeCollection *m_displayMesh;               // +0x1C
    hkReal m_radius;                                       // +0x20
};

#endif
