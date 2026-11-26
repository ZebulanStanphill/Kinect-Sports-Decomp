#include "havok/hkpTriangleShape.h"
struct MeshPart { const char *vertices; int vertexStride; int pad8; const char *indices; hkUint8 indexType; char pad11[3]; int triangleStride; unsigned flip; char pad1c[0x18]; int triangleOffset; };
struct Mesh { char head[0x10]; hkVector4 scale; unsigned bits; MeshPart *parts; char pad28[8]; hkUint16 *welding; int weldingCount; char pad38[4]; hkUint8 weldingType; char pad3d[3]; float radius; };
extern "C" hkpTriangleShape *fn_82D4B240(const Mesh *self,unsigned key,void *buffer) {
 const MeshPart &part=*self->parts;
 const hkUint16 *indices=(const hkUint16 *)(part.indices+part.triangleStride*key);
 unsigned flip=part.flip&key;
 const hkVector4 *a=(const hkVector4 *)(part.vertices+indices[0]*part.vertexStride);
 const hkVector4 *b=(const hkVector4 *)(part.vertices+indices[flip+1]*part.vertexStride);
 const hkVector4 *c=(const hkVector4 *)(part.vertices+indices[(flip^1)+1]*part.vertexStride);
 hkUint16 info=self->weldingCount==0?0:self->welding[part.triangleOffset+key];
 hkpTriangleShape *shape=new(buffer) hkpTriangleShape(self->radius,info,self->weldingType);
 shape->m_vertexA.m_quad=__vmulfp(a->m_quad,self->scale.m_quad);
 shape->m_vertexB.m_quad=__vmulfp(b->m_quad,self->scale.m_quad);
 shape->m_vertexC.m_quad=__vmulfp(c->m_quad,self->scale.m_quad);
 return shape;
}
