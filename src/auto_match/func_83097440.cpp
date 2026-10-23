#include "havok/hkBase.h"
class Body { public: virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void getState(void*); };
struct Collidable { char p0[0x10];signed char offset;char p11[7];unsigned char type;char p19[7];unsigned a;char p24[12];unsigned b;Body *body(){return (Body*)((char*)this+offset);} };
struct Collidables { Collidable **data;int size; };
struct World {char p0[0x78];void *manager;};
extern "C" void fn_82DBA1E0(void*,Body**,int);extern "C" void fn_82D9A040(Body*,void*);
class hkpCollidableMediator:public hkReferencedObject { public: Collidables *list;HK_FORCE_INLINE hkpCollidableMediator(Collidables *l,World *w); };
HK_FORCE_INLINE hkpCollidableMediator::hkpCollidableMediator(Collidables *l,World *w):list(l) {
 if(w)for(int i=0;i<list->size;++i) {Collidable *c=list->data[i];if(c->a>c->b){if(c->type==1){Body *b=list->data[i]->body();fn_82DBA1E0(w->manager,&b,1);}else{char state[32];Body *b=c->body();b->getState(state);fn_82D9A040(b,state);}}}
}
extern "C" hkpCollidableMediator *fn_83097440(hkpCollidableMediator *self, Collidables *l, World *w) {
 self->hkpCollidableMediator::hkpCollidableMediator(l, w);
 return self;
}
