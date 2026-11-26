// hkpMeshShape::hkpMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.cpp). RTTI: hkpShape at +0,
// hkpShapeContainer at +0x10. Built with /O2 /QVMXReserve (flag file).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"
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
hkpMeshShape::hkpMeshShape(float radius,int bits):hkpShapeCollection(HK_SHAPE_TRIANGLE_COLLECTION,COLLECTION_MESH_SHAPE)
{m_scaling.setAll(1.0f);m_weldingType=6;m_numBitsForSubpartIndex=bits;m_radius=radius;}
