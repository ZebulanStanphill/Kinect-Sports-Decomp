#include "havok/hkBase.h"
class hkgpConvexHullImpl { public: struct Edge; struct Vertex; struct Triangle; };
template<typename E,typename V,typename T,typename A> class hkgpAbstractMesh { public: virtual ~hkgpAbstractMesh(); };
typedef hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator> Mesh;
struct Bytes48 { int a[12]; };struct Bytes16 { int a[4]; };struct Bytes64 { int a[16]; };
struct Hull { char pad[0x48]; hkArray<Bytes64> a; hkArray<Bytes16> b; hkArray<Bytes48> c; };
extern "C" void fn_82D14080(Hull*,int);
extern "C" void fn_82D16300(Hull *self) {
 fn_82D14080(self,0); self->c.~hkArray(); self->b.~hkArray(); self->a.~hkArray(); ((Mesh*)((char*)self+0x10))->Mesh::~Mesh();
}
