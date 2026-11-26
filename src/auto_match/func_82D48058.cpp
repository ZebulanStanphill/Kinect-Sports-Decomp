// hkpCompressedSampledHeightFieldShape::hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &,
// const hkArray<hkUint16> &, hkReal, hkReal) (Physics/Collide/Shape/HeightField/CompressedSampledHeightField/
// hkpCompressedSampledHeightFieldShape.cpp): copies the samples. The third
// parameter is stored to m_offset (+0x70) and the fourth to m_scale (+0x74), m_scale first.
#include "havok/hkBase.h"
#include "havok/hkpCompressedSampledHeightFieldShape.h"
template <typename T>
static HK_FORCE_INLINE void _copyFromArray(hkArrayBase<T> *self, hkMemoryAllocator &alloc, const hkArrayBase<T> &a) {
 if (self->getCapacity() < a.getSize()) {
  if ((self->m_capacityAndFlags & hkArrayBase<T>::DONT_DEALLOCATE_FLAG) == 0)
   alloc.bufFree(self->m_data, self->getCapacity(), sizeof(T));
  int n = a.getSize();
  self->m_data = (T *)alloc.bufAlloc(n, sizeof(T));
  self->m_capacityAndFlags = n;
 }
 self->m_size = a.getSize();
 T *dst = self->m_data; const T *src = a.m_data; int cnt = self->m_size;
 for (int i = 0; i < cnt; ++i) dst[i] = src[i];
}
template <typename T>
static HK_FORCE_INLINE void assign(hkArray<T> &self, const hkArrayBase<T> &a) {
 _copyFromArray(&self, hkContainerHeapAllocator::get(&self), a);
}
hkpCompressedSampledHeightFieldShape::hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &ci,
                                                                           const hkArray<hkUint16> &samples,
                                                                           hkReal offset, hkReal scale)
    : hkpSampledHeightFieldShape(ci, HEIGHTFIELD_COMPRESSED), m_triangleFlip(false)
{
    hkpCompressedSampledHeightFieldShape *t = this;
    assign(t->m_storage, samples);
    t->m_scale = scale;
    t->m_offset = offset;
}
