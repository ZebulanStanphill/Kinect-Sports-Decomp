// hkpMeshShape::hkpMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.cpp). RTTI: hkpShape at +0,
// hkpShapeContainer at +0x10. Built with /O2 /QVMXReserve (flag file).
#include "havok/hkBase.h"
enum hkpShapeType { HK_SHAPE_MESH=24 };
class hkpShape : public hkReferencedObject { public: unsigned m_userData, m_type; };
class hkpShapeContainer { public: virtual ~hkpShapeContainer() {} };
class hkpShapeCollection : public hkpShape, public hkpShapeContainer { public: enum CollectionType { COLLECTION_MESH=5 }; hkpShapeCollection(hkpShapeType,CollectionType); hkBool m_disableWelding; hkUint8 m_collectionType; };
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float vector4_f32[4]; unsigned int vector4_u32[4]; } __vector4;
extern "C" __vector4 __vspltw(__vector4, unsigned int);
class hkVector4 { public: __vector4 m_quad; __forceinline void setAll(float v) { m_quad.vector4_f32[0]=v; m_quad=__vspltw(m_quad,0); } };
// The source's literal 1.0f (__real@3f800000), folded by the linker into the
// game's copy at lbl_82002AE0. Defined here so the compiler knows the value is
// read-only and schedules its load like a literal's (an extern declaration
// keeps the load below the member stores).
extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;
class hkpMeshShape : public hkpShapeCollection {
public:
    hkpMeshShape(float radius, int bits);
    hkVector4 m_scaling;
    int m_numBitsForSubpartIndex;
    hkArray<int> m_subparts;
    hkArray<hkUint16> m_weldingInfo;
    hkUint8 m_weldingType;
    float m_radius;
};
hkpMeshShape::hkpMeshShape(float radius,int bits):hkpShapeCollection(HK_SHAPE_MESH,COLLECTION_MESH) {m_scaling.setAll(lbl_82002AE0);m_weldingType=6;m_numBitsForSubpartIndex=bits;m_radius=radius;}
