// hkpStorageMeshShape::hkpStorageMeshShape(const hkpMeshShape *mesh)
// (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp): the
// hkpMeshShape(radius, numBits) base constructor (??0hkpMeshShape@@QAA@MH@Z),
// the two vtables and the empty m_storage array, then the mesh's scaling, user
// data and welding flag, every subpart through addSubpart (82D4F750, called directly) and the
// inlined hkArray<hkUint16>::operator= of the welding info.
// Built with /O2 /QVMXReserve (the m_scaling copy uses v0).
#include "havok/hkpStorageMeshShape.h"

// hkArray<T>::operator= for POD elements (hkArrayBase::_copyFromArray).
template <typename T>
HK_FORCE_INLINE void hkArrayCopy(hkArray<T> &dst, const hkArray<T> &src)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&dst);
    if (dst.getCapacity() < src.getSize()) {
        if ((dst.m_capacityAndFlags & hkArray<T>::DONT_DEALLOCATE_FLAG) == 0)
            alloc.bufFree(dst.m_data, dst.getCapacity(), sizeof(T));
        int n = src.getSize();
        dst.m_data = static_cast<T *>(alloc.bufAlloc(n, sizeof(T)));
        dst.m_capacityAndFlags = n;
    }
    dst.m_size = src.getSize();
    int n = dst.m_size;
    T *d = dst.m_data;
    const T *s = src.m_data;
    for (int i = 0; i < n; ++i)
        d[i] = s[i];
}

hkpStorageMeshShape::hkpStorageMeshShape(const hkpMeshShape *mesh)
    : hkpMeshShape(mesh->m_radius, mesh->m_numBitsForSubpartIndex)
{
    m_scaling = mesh->m_scaling;
    m_userData = mesh->m_userData;
    m_disableWelding = mesh->m_disableWelding;
    for (int i = 0; i < mesh->getNumSubparts(); ++i)
        addSubpart(mesh->getSubpartAt(i));
    hkArrayCopy(m_weldingInfo, mesh->m_weldingInfo);
    m_weldingType = mesh->m_weldingType;
}
