#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned u[4]; } __vector4;
extern "C" {
 __vector4 __vxor(__vector4,__vector4);
 __vector4 __vspltw(__vector4,unsigned);
 __vector4 __vaddfp(__vector4,__vector4);
 __vector4 __vsubfp(__vector4,__vector4);
 __vector4 __vmulfp(__vector4,__vector4);
 __vector4 __lvlx(const void *,unsigned);
 extern const float lbl_82002AE0;
}
class hkVector4 { public:
 HK_FORCE_INLINE void operator=(const hkVector4 &v) { q=v.q; }
 HK_FORCE_INLINE void setZero() { q=__vxor(q,q); }
 HK_FORCE_INLINE void setAll(float v) { q.f[0]=v; q=__vspltw(q,0); }
 __vector4 q;
};
class hkRotation { public:
 HK_FORCE_INLINE void setIdentity() {
  hkVector4 zero; zero.setZero();
  col[0]=zero; col[1]=zero; col[2]=zero;
  col[0].q.f[0]=lbl_82002AE0; col[1].q.f[1]=lbl_82002AE0; col[2].q.f[2]=lbl_82002AE0;
 }
 hkVector4 col[3];
};
class hkTransform { public:
 HK_FORCE_INLINE void setIdentity() { rotation.setIdentity(); translation.setZero(); }
 hkRotation rotation; hkVector4 translation;
};

class hkpTriangleShape : public hkpConvexShape { public:
 HK_FORCE_INLINE hkpTriangleShape(float radius,hkUint16 info,hkUint8 kind):hkpConvexShape(HK_SHAPE_TRIANGLE,radius),weldingInfo(info),weldingType(kind) { extrusion.setZero(); isExtruded=0; }
 hkUint16 weldingInfo; hkUint8 weldingType,isExtruded;
 hkVector4 a,b,c,extrusion;
};
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
 shape->a.q=__vmulfp(a->q,self->scale.q); shape->b.q=__vmulfp(b->q,self->scale.q); shape->c.q=__vmulfp(c->q,self->scale.q);
 return shape;
}
