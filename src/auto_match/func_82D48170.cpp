
// hkpCompressedSampledHeightFieldShape::hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldShape *)
// (Physics/Collide/Shape/HeightField/CompressedSampledHeightField/hkpCompressedSampledHeightFieldShape.cpp), /O2 /QVMXReserve.
// HK_REAL_MAX and -HK_REAL_MAX are literals (__real@7f7fffee, __real@ff7fffee); 1.0f / 65535.0f is a
// literal too (__real@37800080).
// The array is reached through a local reference, which places the address computation as in the original.
#include "havok/hkpCompressedSampledHeightFieldShape.h"
#include "havok/hkMath.h"

template <typename T>
static HK_FORCE_INLINE void _reserve(hkArrayBase<T> &self, hkMemoryAllocator &alloc, int n)
{
    const int capacity = self.getCapacity();
    if (capacity < n) {
        int cap2 = 2 * capacity;
        int newSize = (n < cap2) ? cap2 : n;
        hkArrayUtil::_reserve(alloc, &self, newSize, sizeof(T));
    }
}

template <typename T>
static HK_FORCE_INLINE void setSize(hkArray<T> &self, int n)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&self);
    _reserve(self, alloc, n);
    self.m_size = n;
}

hkpCompressedSampledHeightFieldShape::hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldShape *hf)
{
    m_heightfieldType = HEIGHTFIELD_COMPRESSED;
    m_xRes = hf->m_xRes;
    m_zRes = hf->m_zRes;
    m_triangleFlip = hf->getTriangleFlip();
    m_heightCenter = hf->m_heightCenter;
    m_intToFloatScale = hf->m_intToFloatScale;
    m_floatToIntScale = hf->m_floatToIntScale;
    m_floatToIntOffsetFloorCorrected = hf->m_floatToIntOffsetFloorCorrected;
    m_extents = hf->m_extents;

    hkArray<hkUint16> &storage = m_storage;
    setSize(storage, m_xRes * m_zRes);

    hkReal minv = 3.40282e+38f;
    hkReal maxv = -3.40282e+38f;
    for (int z = 0; z < m_zRes; z++) {
        for (int x = 0; x < m_xRes; x++) {
            hkReal h = hf->getHeightAt(x, z);
            minv = hkMath::min2(h, minv);
            maxv = hkMath::max2(h, maxv);
        }
    }
    m_offset = minv;
    m_scale = (maxv - minv) * (1.0f / 65535.0f);

    for (int z = 0; z < m_zRes; z++) {
        for (int x = 0; x < m_xRes; x++) {
            hkReal h = hf->getHeightAt(x, z);
            storage[z * m_xRes + x] = hkUint16((h - m_offset) / m_scale);
        }
    }
}
