#include "havok/hkBase.h"
extern "C" void fn_8265CA20(void *);
struct hkAabbTreeData { struct __declspec(align(16)) hkAabbTreeAabb { float data[8]; hkAabbTreeAabb() {} }; };
struct Node { char prefix[0x20]; void *value; };
template<typename BOUNDING_VOLUME,typename IDX> class hkAabbTreeQueryUtils { public:
 class Collector { public:
 static void operator delete(void *p) { fn_8265CA20(p); }
 virtual ~Collector() {}
 virtual void addLeaf(IDX);
 };
 class AllHitsNodeCollector : public Collector { public:
 HK_FORCE_INLINE AllHitsNodeCollector(hkArray<Node *> &a) : hits(a) {}
 virtual void addLeaf(IDX);
 hkArray<Node *> &hits;
 };
};
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
extern "C" void fn_82CE63B0(hkMemoryAllocator *,void *,int);
static HK_FORCE_INLINE void push(hkArrayBase<void *> &a,void *v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (a.m_size == a.getCapacity()) fn_82CE63B0(&alloc,&a,4);
 a.m_data[a.m_size++]=v;
}

extern "C" unsigned char fn_82D229F0(hkgpMesh *self,const Shape *shape,void *tree,float tolerance) {
 hkArray<Node *> hits;
 { Query::AllHitsNodeCollector collector(hits); fn_82D38870(tree,shape->getAabb(),&collector); }
 for (int i=0;i<hits.getSize();i++) {
  if (self->overlap->distance(shape,(hkgpMesh::IConvexOverlap::IConvexShape *)hits[i]->value,1)<tolerance) return 1;
 }
 return 0;
}
