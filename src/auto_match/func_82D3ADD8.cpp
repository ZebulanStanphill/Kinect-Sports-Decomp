// hkpShapeInfo::~hkpShapeInfo (Physics/Utilities/Serialize/ShapeInfo/hkpShapeInfo.cpp), user-written and empty
// (it stores the class vtable): the members are destroyed in reverse order: the child transforms and child shape
// names hkArrays, then the hkRefPtr to the shape.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


class hkTransform {
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

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
