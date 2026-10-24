#include "havok/hkBase.h"
extern "C" float lbl_82134508, lbl_82134504;
struct Aabb { float data[8]; Aabb() {} };
class Shape { public: virtual void f0(); virtual void f1(); virtual void f2(); virtual Aabb getAabb() const; };
namespace hkgpMesh {
class CollideShapeTriangle {
public:
 virtual void collide();
 float tolerance;
 void *meshData;
 const Shape *shape;
 float value, distance, epsilon;
 unsigned char hasOutput, hit, flag, extra;
 CollideShapeTriangle(void *d,const Shape *s,float t,unsigned char f,bool o,unsigned char e) :
 meshData(d),shape(s) {
 distance=lbl_82134508; hit=0; epsilon=lbl_82134504; extra=e; value=0.0f; tolerance=t; flag=f; hasOutput=o;
 }
};
}
extern "C" void fn_82D38870(void *,const Aabb &,hkgpMesh::CollideShapeTriangle *);
extern "C" float fn_82D1F558(char *self,const Shape *shape,unsigned char extra) {
 hkgpMesh::CollideShapeTriangle c(*(void **)(self+0x38),shape,0.0f,1,true,extra);
 fn_82D38870(self+0x720,shape->getAabb(),&c);
 return -c.value;
}
