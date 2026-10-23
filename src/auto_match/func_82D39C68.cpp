// hkpConvexPieceMeshShape scalar deleting destructor: it calls the out-of-line destructor
// (??1hkpConvexPieceMeshShape, matched in func_82D49610.cpp), so the destructor is only declared here; the
// finish constructor below only makes the compiler emit the vtable and this deleting destructor.
// RTTI: hkpShapeCollection (hkpShape at +0, hkpShapeContainer at +0x10).
#include "havok/hkpShape.h"

class hkpConvexPieceStreamData : public hkReferencedObject {
};

class hkpConvexPieceMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag) {}
    virtual ~hkpConvexPieceMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    const hkpConvexPieceStreamData *m_convexPieceStream;   // +0x18
    const hkpShapeCollection *m_displayMesh;               // +0x1C
    hkReal m_radius;                                       // +0x20
};

void emitVtable_82D39C68(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpConvexPieceMeshShape(f); }
