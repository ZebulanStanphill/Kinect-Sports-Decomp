// hkpAabbPhantom::clone() const (Havok 2010, Physics/Dynamics/Phantom/hkpAabbPhantom.cpp; slot +0x2C of
// ??_7hkpAabbPhantom@@6B@): a new phantom over the same box and filter info, with copies of the two listener
// arrays and the world object's properties (hkpWorldObject::copyProperties, fn_82D8C858, keeps its fn_ name).
#include "havok/hkpAabbPhantom.h"

extern "C" void fn_82D8C858(hkpWorldObject *self, const hkpWorldObject *other);   // hkpWorldObject::copyProperties

// hkArray's assignment (hkArrayBase::_copyFromArray, inlined): the repository's hkArray declares none.
template <typename T>
static HK_FORCE_INLINE void copyArray_82D8D760(hkArray<T> &dst, const hkArray<T> &src)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&dst);
    if (dst.getCapacity() < src.m_size) {
        if ((dst.m_capacityAndFlags & hkArrayBase<T>::DONT_DEALLOCATE_FLAG) == 0)
            alloc.bufFree(dst.m_data, dst.getCapacity(), sizeof(T));
        int n = src.m_size;
        dst.m_data = (T *)alloc.bufAlloc(n, sizeof(T));
        dst.m_capacityAndFlags = n;
    }
    int size = src.m_size;
    T *d = dst.m_data;
    dst.m_size = size;
    const T *s = src.m_data;
    for (int i = 0; i < size; i++)
        d[i] = s[i];
}

hkpPhantom *hkpAabbPhantom::clone() const
{
    hkpAabbPhantom *aabbPhantom = new hkpAabbPhantom(m_aabb, m_collidable.m_broadPhaseHandle.m_collisionFilterInfo);
    copyArray_82D8D760(aabbPhantom->m_overlapListeners, m_overlapListeners);
    copyArray_82D8D760(aabbPhantom->m_phantomListeners, m_phantomListeners);
    fn_82D8C858(aabbPhantom, this);
    return aabbPhantom;
}
