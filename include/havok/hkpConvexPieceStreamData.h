// hkpConvexPieceStreamData (Physics/Internal/Collide/ConvexPieceMesh/hkpConvexPieceStreamData.h, the folder of
// its class units), 0x2C bytes: the convex pieces of an hkpConvexPieceMeshShape as streams of words. The
// layout comes from the destructor (82DCA028: three arrays of 4-byte elements at +0x20, +0x14 and +0x8). The
// member names follow Havok's header.
#ifndef HAVOK_HKPCONVEXPIECESTREAMDATA_H
#define HAVOK_HKPCONVEXPIECESTREAMDATA_H

#include "havok/hkBase.h"

// ??_7hkpConvexPieceStreamData@@6B@ has hkReferencedObject's three slots; slot 0 is the deleting destructor
// 82DCA120, which calls the destructor 82DCA028 (still under its fn_ name). The destructor is the implicit
// one.
class hkpConvexPieceStreamData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexPieceStreamData(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_convexPieceStream(flag), m_convexPieceOffsets(flag),
          m_convexPieceSingleTriangles(flag) {}

    hkArray<hkUint32> m_convexPieceStream;            // +0x8
    hkArray<hkUint32> m_convexPieceOffsets;           // +0x14
    hkArray<hkUint32> m_convexPieceSingleTriangles;   // +0x20
};

#endif
