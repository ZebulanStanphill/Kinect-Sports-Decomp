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
 tolerance(t),meshData(d),shape(s) {
 distance=lbl_82134508; hit=0; epsilon=lbl_82134504; extra=e; value=0.0f; hasOutput=o; flag=f;
 }
};
}
extern "C" void fn_82D38870(void *,const Aabb &,hkgpMesh::CollideShapeTriangle *);
extern "C" unsigned char fn_82D1F490(char *self,const Shape *shape,float tolerance,float *out,unsigned char flag) {
 hkgpMesh::CollideShapeTriangle c(*(void **)(self+0x38),shape,tolerance,flag,out!=0,0);
 fn_82D38870(self+0x720,shape->getAabb(),&c);
 if(out) *out=c.distance;
 return c.hit;
}
