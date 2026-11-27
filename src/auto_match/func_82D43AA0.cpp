// hkpExtendedMeshShape::ShapesSubpart's copy assignment, out of line (hkpExtendedMeshShape::addSubpart,
// 82D43170, and hkpStorageExtendedMeshShape's addShapesSubpart, 82D4DE48, call it): the Subpart part as plain words, the child
// shapes through hkArray's assignment (the references counted), then the rotation and the translation.
// Implicit in Havok; declared in the header so that this unit can define it (same code, same symbol).
#include "havok/hkpExtendedMeshShape.h"

inline void *operator new(unsigned int, void *where)
{
    return where;
}

template <typename T> static __forceinline void CopyElements(T *dst, const T *src, int count)
{
    for (int i = 0; i < count; i++)
        dst[i] = src[i];
}

template <typename T> static __forceinline void ConstructElements(T *dst, const T *src, int count)
{
    for (int i = 0; i < count; i++)
        new (&dst[i]) T(src[i]);
}

// hkArray<T>::operator= for elements with constructors (hkArrayBase::_copyFromArray).
template <typename T> static __forceinline void copyFromArray(hkArrayBase<T> &self, const hkArrayBase<T> &other)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&self);
    int oldSize = self.m_size;
    int newSize = other.m_size;
    int copied = newSize > oldSize ? oldSize : newSize;
    int capacity = self.getCapacity();

    if (capacity < newSize)
        hkArrayUtil::_reserve(alloc, &self, newSize < capacity * 2 ? capacity * 2 : newSize, sizeof(T));
    hkArrayUtil::destruct(self.m_data + newSize, oldSize - newSize);
    CopyElements(self.m_data, other.m_data, copied);
    ConstructElements(self.m_data + copied, other.m_data + copied, newSize - copied);
    self.m_size = newSize;
}

hkpExtendedMeshShape::ShapesSubpart &hkpExtendedMeshShape::ShapesSubpart::operator=(const ShapesSubpart &other)
{
    static_cast<Subpart &>(*this) = other;
    copyFromArray(m_childShapes, other.m_childShapes);
    m_rotation = other.m_rotation;
    m_translation = other.m_translation;
    return *this;
}
