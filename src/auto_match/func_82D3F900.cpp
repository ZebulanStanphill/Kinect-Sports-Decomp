// hkpConvexVerticesShape::hkpConvexVerticesShape(const hkStridedVertices &, const hkArray<hkVector4> &, hkReal)
// (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShape.cpp): copies the plane equations, then
// the vertices through fn_82D3F450 (which keeps its fn_ name).
#include "havok/hkpConvexVerticesShape.h"
struct hkStridedVertices { const float *v; int num; int stride; };
extern "C" void fn_82D3F450(hkpConvexVerticesShape*,const float*,int,int);
hkpConvexVerticesShape::hkpConvexVerticesShape(const hkStridedVertices& v,const hkArray<hkVector4>& p,float radius):hkpConvexShape(hkpShapeType(6),radius),m_convexPiece(0),m_connectivity(0) {
 hkArray<hkVector4> *dst=&m_planeEquations;
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
