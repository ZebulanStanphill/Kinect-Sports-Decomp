// hkpMeshShape::getChildShape(hkpShapeKey, hkpShapeBuffer &) const
// (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.cpp), slot 5 of the hkpShapeContainer
// vtable (VFTABLE_for_hkpMeshShape@@_821D5FCC; hkpStorageMeshShape inherits it). Builds an
// hkpTriangleShape in the buffer (placement new, hence the null check) from the subpart's
// 16- or 32-bit indices, scaling the vertices by m_scaling.
// As an override of an hkpShapeContainer virtual it receives the container subobject (+0x10)
// as this, so the members are 0x10 lower than in the class. Built with /O2 /QVMXReserve
// (flag file). The flip term (triangleIndex & m_flipAlternateTriangles) must be computed once
// before the index-type branch; repeating it in each branch leaves the first index load as
// lhzx base+offset instead of lhz 0(triangle).
#include "havok/hkpTriangleShape.h"
#include "havok/hkpMeshShape.h"

template <typename T>
HK_FORCE_INLINE const T *hkAddByteOffsetConst(const T *base, hkUlong offset)
{
    return reinterpret_cast<const T *>(reinterpret_cast<const char *>(base) + offset);
}

const hkpShape *hkpMeshShape::getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const
{
    const hkUint32 triangleIndex = (key & (~0U >> m_numBitsForSubpartIndex));
    const hkUint32 subPartIndex = key >> (32 - m_numBitsForSubpartIndex);

    const Subpart &part = m_subparts[subPartIndex];

    const hkReal *vf0 = HK_NULL;
    const hkReal *vf1 = HK_NULL;
    const hkReal *vf2 = HK_NULL;
    const int flip = triangleIndex & part.m_flipAlternateTriangles;
    if (part.m_stridingType == INDICES_INT16)
    {
        const hkUint16 *triangle = hkAddByteOffsetConst<hkUint16>((const hkUint16 *)part.m_indexBase, part.m_indexStriding * triangleIndex);
        vf0 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[0]);
        vf1 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + flip]);
        vf2 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + (1 ^ flip)]);
    }
    else
    {
        const hkUint32 *triangle = hkAddByteOffsetConst<hkUint32>((const hkUint32 *)part.m_indexBase, part.m_indexStriding * triangleIndex);
        vf0 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[0]);
        vf1 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + flip]);
        vf2 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + (1 ^ flip)]);
    }

    hkVector4 vertex0; vertex0.set(vf0[0] * m_scaling(0), vf0[1] * m_scaling(1), vf0[2] * m_scaling(2), 0.0f);
    hkVector4 vertex1; vertex1.set(vf1[0] * m_scaling(0), vf1[1] * m_scaling(1), vf1[2] * m_scaling(2), 0.0f);
    hkVector4 vertex2; vertex2.set(vf2[0] * m_scaling(0), vf2[1] * m_scaling(1), vf2[2] * m_scaling(2), 0.0f);

    hkUint16 weldingInfo = (m_weldingInfo.getSize() == 0) ? 0 : m_weldingInfo[part.m_triangleOffset + triangleIndex];

    hkpTriangleShape *triangleShape = new (&buffer) hkpTriangleShape(m_radius, weldingInfo, m_weldingType);
    triangleShape->setVertex(0, vertex0);
    triangleShape->setVertex(1, vertex1);
    triangleShape->setVertex(2, vertex2);

    return triangleShape;
}
