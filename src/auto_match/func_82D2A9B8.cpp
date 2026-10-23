#include "havok/hkBase.h"
struct Vertex { char pad[60]; float value; };
struct Face { int pad[2]; Vertex *v[3]; };
struct Item { char pad[32]; Face *face; };
class hkgpMesh { public: template<int N> class PrismShape { public: PrismShape(Face *f):face(f) {} virtual void unused(); Face *face; }; };
class Test { public: virtual void v0(); virtual void v1(); virtual unsigned char test(const hkgpMesh::PrismShape<1> &,const hkgpMesh::PrismShape<1> &, float); };
struct State { int pad,count,tests; Test *test; };
extern "C" int fn_82D2A9B8(State *s, Item *a, Item *b) {
 Face *f=a->face; Face *g=b->face;
 ++s->count;
 for(int i=0;i<3;++i) for(int j=0;j<3;++j) if(f->v[i]==g->v[j]) return 1;
 ++s->tests;
 hkgpMesh::PrismShape<1> p(f),q(g);
 float zero=0.0f;
 if(s->test->test(p,q,zero)) {
  Vertex *v0=f->v[0], *v1=g->v[0], *v2=f->v[1], *v3=g->v[1], *v4=f->v[2], *v5=g->v[2];
  v0->value=zero; v1->value=zero; v2->value=zero; v3->value=zero; v4->value=zero; v5->value=zero;
 }
 return 0;
}
