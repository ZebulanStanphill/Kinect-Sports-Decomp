#include "havok/hkBase.h"
struct hkpSampledHeightFieldBaseCinfo;
class hkpSampledHeightFieldShape : public hkReferencedObject { public:
 char pad[0x58];
 hkpSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &,int);
};
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
class hkpCompressedSampledHeightFieldShape : public hkpSampledHeightFieldShape { public:
 hkArray<hkUint16> heights; hkBool triangle; float scale,offset;
 hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &,const hkArray<hkUint16> &,float,float);virtual ~hkpCompressedSampledHeightFieldShape();
};
hkpCompressedSampledHeightFieldShape::hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &c,const hkArray<hkUint16> &h,float s,float o):hkpSampledHeightFieldShape(c,1),triangle(false){hkpCompressedSampledHeightFieldShape *t=this;assign(t->heights,h);t->offset=o;t->scale=s;}
