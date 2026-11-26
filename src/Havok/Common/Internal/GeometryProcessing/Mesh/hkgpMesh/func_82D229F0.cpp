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
static HK_FORCE_INLINE void push(hkArrayBase<void *> &a,void *v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (a.m_size == a.getCapacity()) hkArrayUtil::_reserveMore(alloc,&a,4);
 a.m_data[a.m_size++]=v;
}

extern "C" unsigned char fn_82D229F0(hkgpMesh *self,const Shape *shape,void *tree,float tolerance) {
 hkArray<const Query::Node *> hits;
 { Query::AllHitsNodeCollector collector(hits); fn_82D38870(tree,shape->getAabb(),&collector); }
 for (int i=0;i<hits.getSize();i++) {
  if (self->overlap->distance(shape,(hkgpMesh::IConvexOverlap::IConvexShape *)hits[i]->m_indices[0],1)<tolerance) return 1;
 }
 return 0;
}
