// hkpTriSampledHeightFieldCollection scalar deleting destructor; it calls ~hkpTriSampledHeightFieldCollection (fn_82D521B8, out of line) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpTriSampledHeightFieldCollection : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag) {}
    virtual ~hkpTriSampledHeightFieldCollection();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

void emitVtable_82D3B980(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpTriSampledHeightFieldCollection(f); }
