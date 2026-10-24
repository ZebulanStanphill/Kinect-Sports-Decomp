#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } Vec;
class hkVector4 { public: Vec q; void operator=(const hkVector4& v) { q=v.q; } };
struct hkStridedVertices { const float *v; int num; int stride; };
struct Planes { hkVector4 *data; int size; int cap; };
class hkpConvexVerticesShape;
extern "C" void fn_82D3F450(hkpConvexVerticesShape*,const float*,int,int);
class hkpConvexVerticesShape : public hkpConvexShape { public:
 hkpConvexVerticesShape(const hkStridedVertices&,const hkArray<hkVector4>&,float);
 char pad[0x40-0x14]; hkArray<hkVector4> vertices; int padding,n; hkArray<hkVector4> planes; void *connectivity;
};
hkpConvexVerticesShape::hkpConvexVerticesShape(const hkStridedVertices& v,const hkArray<hkVector4>& p,float radius):hkpConvexShape(hkpShapeType(6),radius),n(0),connectivity(0) {
 hkArray<hkVector4> *dst=&planes;
 hkMemoryAllocator &a=hkMemoryRouter::getInstance().heap();
 if(dst->getCapacity()<p.m_size) {
  if((dst->m_capacityAndFlags & (int)0x80000000)==0) a.bufFree(dst->m_data,dst->getCapacity(),16);
  int count=p.m_size;dst->m_data=(hkVector4*)a.bufAlloc(count,16);dst->m_capacityAndFlags=count;
 }
 int count=p.m_size;dst->m_size=count;
 hkVector4 *d=dst->m_data; const hkVector4 *s=p.m_data;
 for(int i=0;i<count;++i) d[i]=s[i];
 fn_82D3F450(this,v.v,v.stride,v.num);
}
