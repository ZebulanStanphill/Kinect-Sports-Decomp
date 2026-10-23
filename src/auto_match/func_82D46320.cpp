// hkpCompressedMeshShape scalar deleting destructor; it calls ~hkpCompressedMeshShape (fn_82D46000, out of line) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpCompressedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpCompressedMeshShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag) {}
    virtual ~hkpCompressedMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

void emitVtable_82D46320(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpCompressedMeshShape(f); }
