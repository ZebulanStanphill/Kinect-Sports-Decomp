// hkpSimpleMeshShape scalar deleting destructor; it calls ~hkpSimpleMeshShape (fn_82D3B058, out of line) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpSimpleMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpSimpleMeshShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag) {}
    virtual ~hkpSimpleMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

void emitVtable_82D3B160(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSimpleMeshShape(f); }
