// hkpShapeInfo scalar deleting destructor: it calls the out-of-line destructor (??1hkpShapeInfo), defined below as in
// func_82D3ADD8.cpp, which also makes the compiler emit the vtable and this deleting destructor.
#include "havok/hkBase.h"
#include "havok/hkTransform.h"

class hkpShape : public hkReferencedObject {
};

class hkpShapeInfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpShapeInfo(hkFinishLoadedObjectFlag flag);
    virtual ~hkpShapeInfo();

    hkRefPtr<hkpShape> m_shape;               // +0x8
    hkBool m_isHierarchicalCompound;          // +0xC
    hkBool m_hkdShapesCollected;              // +0xD
    hkArray<hkStringPtr> m_childShapeNames;   // +0x10
    hkArray<hkTransform> m_childTransforms;   // +0x1C
    hkTransform m_transform;                  // +0x30
};

hkpShapeInfo::~hkpShapeInfo()
{
}
