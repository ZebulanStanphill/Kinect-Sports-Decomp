// hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(const hkpExtendedMeshShape &mesh)
// (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp): the
// hkpExtendedMeshShape(radius, numBits) base constructor and the two empty storage arrays, then the mesh's
// scaling, user data and welding flag, every triangles and shapes subpart through the two add functions
// (fn_82D4E4A8, fn_82D4DE48), the inlined hkArray<hkUint16>::operator= of the welding info, the welding
// type, and a last call on the base (fn_82D41D58, which recomputes the AABB by its place in Havok's code).
#include "havok/hkpStorageExtendedMeshShape.h"

extern "C" {
// hkpStorageExtendedMeshShape::addTrianglesSubpart and ::addShapesSubpart
void fn_82D4E4A8(hkpStorageExtendedMeshShape *self, const hkpExtendedMeshShape::TrianglesSubpart *part);
void fn_82D4DE48(hkpStorageExtendedMeshShape *self, const hkpExtendedMeshShape::ShapesSubpart *part);
void fn_82D41D58(hkpExtendedMeshShape *self);
}

// hkArray<hkUint16>::operator= (hkArrayBase::_copyFromArray for POD elements).
static HK_FORCE_INLINE void copyWelding(hkArray<hkUint16> &dst, const hkArray<hkUint16> &src)
{
    hkMemoryAllocator &a = hkMemoryRouter::getInstance().heap();
    if (dst.getCapacity() < src.getSize()) {
        if ((dst.m_capacityAndFlags & int(0x80000000)) == 0)
            a.bufFree(dst.m_data, dst.getCapacity(), 2);
        int n = src.getSize();
        dst.m_data = (hkUint16 *)a.bufAlloc(n, 2);
        dst.m_capacityAndFlags = n;
    }
    int n = src.getSize();
    hkUint16 *p = dst.m_data;
    dst.m_size = n;
    const hkUint16 *q = src.m_data;
    for (int i = 0; i < n; ++i)
        p[i] = q[i];
}

hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(const hkpExtendedMeshShape &mesh)
    : hkpExtendedMeshShape(mesh.m_triangleRadius, mesh.m_numBitsForSubpartIndex)
{
    m_scaling = mesh.m_scaling;
    m_userData = mesh.m_userData;
    m_disableWelding = mesh.m_disableWelding;
    for (int i = 0; i < mesh.m_trianglesSubparts.getSize(); ++i)
        fn_82D4E4A8(this, mesh.m_trianglesSubparts.m_data + i);
    for (int i = 0; i < mesh.m_shapesSubparts.getSize(); ++i)
        fn_82D4DE48(this, mesh.m_shapesSubparts.m_data + i);
    copyWelding(m_weldingInfo, mesh.m_weldingInfo);
    m_weldingType = mesh.m_weldingType;
    fn_82D41D58(this);
}
