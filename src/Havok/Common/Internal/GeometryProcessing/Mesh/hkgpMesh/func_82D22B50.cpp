#include "havok/hkBase.h"
#include "havok/hkAabbTreeQueryUtils.h"
typedef hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb,unsigned> Query;
class Shape { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual hkAabbTreeData::hkAabbTreeAabb getAabb() const; };
class hkgpMesh { public:
 class IConvexOverlap { public:
  class IConvexShape { public: static void operator delete(void *p) { fn_8265CA20(p); } virtual HK_FORCE_INLINE ~IConvexShape() {} };
  virtual void unused(); virtual float distance(const Shape *,const IConvexShape *,int);
 };
 class TriangleShape : public IConvexOverlap::IConvexShape { public:
  HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE,TriangleShape);
  HK_FORCE_INLINE TriangleShape(void *v) : value(v) {} void *value;
 };
 char data[0x38]; IConvexOverlap *overlap;
};
extern "C" void fn_82D38870(void *,const hkAabbTreeData::hkAabbTreeAabb &,Query::Collector *);
// hkArrayUtil::constructWithCopy for POD elements: a loop over n copies.
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
// hkArrayBase<T>::_pushBack: reserve through hkArrayUtil::_reserveMore, then construct in place.
class Output : public hkArrayBase<void *> { public: HK_FORCE_INLINE void push(void *const &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) hkArrayUtil::_reserveMore(alloc,this,sizeof(void *));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };

extern "C" void fn_82D22B50(hkgpMesh *self,const Shape *shape,hkArrayBase<void *> *out) {
 hkArray<const Query::Node *> hits;
 { Query::AllHitsNodeCollector collector(hits); fn_82D38870((char *)self+0x720,shape->getAabb(),&collector); }
 for (int i=0;i<hits.getSize();i++) {
  hkgpMesh::TriangleShape triangle((void *)hits[i]->m_indices[0]);
  if (self->overlap->distance(shape,&triangle,1)<=0.0f) ((Output*)out)->push(triangle.value);
 }
}
