// hkpFastMeshShape (Physics/Collide/Shape/Deprecated/FastMesh/hkpFastMeshShape.h), 0x60 bytes: an hkpMeshShape
// with a faster getChildShape and no members of its own (hkClass initialiser 8312DA18: size 0x60, no members).
// Its vtables (??_7hkpFastMeshShape@@6BhkpShape@@@, 14 slots, and ...@@6BhkpShapeContainer@@@) are hkpMeshShape's
// except for getChildShape (82D4B240); the deleting destructor is hkpMeshShape's.
//
// - The constructor is out of line (??0hkpFastMeshShape@@QAA@MH@Z, 82D4B378): only hkpMeshShape's.
// - The finish constructor is out of line (82D3A3A0): hkpMeshShape's, then
//   HK_SHAPE_TRIANGLE_COLLECTION when finishing.
#ifndef HAVOK_HKPFASTMESHSHAPE_H
#define HAVOK_HKPFASTMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpMeshShape.h"

class hkpFastMeshShape : public hkpMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex);   // out of line (82D4B378)
    hkpFastMeshShape(hkFinishLoadedObjectFlag flag);               // out of line (82D3A3A0)

    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;   // 82D4B240
};

#endif
