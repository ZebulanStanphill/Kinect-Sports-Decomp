// finishLoadedObjecthkpConvexListShape: the finish function in hkpConvexListShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpConvexShape at +0, hkpShapeContainer at
// +0x14. hkpShape's finish constructor clears m_type when finishing; this class's then sets it.
#include "havok/hkpShape.h"

class hkpConvexListShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexListShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = hkpShapeType(0x17); }
    virtual const hkpShapeContainer *getContainer() const;
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

void HK_CALL finishLoadedObjecthkpConvexListShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexListShape(f);
}
