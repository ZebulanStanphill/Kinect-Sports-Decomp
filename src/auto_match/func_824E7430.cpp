#include "stdext/xmemory.h"
inline void *operator new(unsigned int,void *p) throw() { return p; }
struct String { union { char buf[16]; char *ptr; }; unsigned int size,cap; int pad; };
struct Data { char data[104]; };
extern "C" { void *memset(void*,int,unsigned int); void fn_8223B688(String*,const String*); void fn_82230300(String*,int,int); int fn_8260D428(const String*,int,unsigned int,const char*,unsigned int); }
struct Pair { String key; Data value; Pair(const String &k,const Data &v) { fn_8223B688(&key,&k); value=v; } Pair(const Pair &o) { fn_8223B688(&key,&o.key); value=o.value; } };
struct Node { Node *left,*parent,*right; Pair value; unsigned char color,nil; };
struct Map { int pad; Node *head; };
struct It { Node *p; };
extern "C" void fn_824E7840(It*,Map*,It,Node*);
static unsigned char less(const String &a,const String &b) {
 unsigned int n=b.size;
 const char *p;
 if(b.cap>=16) p=b.ptr;else p=b.buf;
 return fn_8260D428(&a,0,a.size,p,n)<0;
}
extern "C" Data *fn_824E7430(Map *self,String *key) {
 Node *best=self->head, *cur=best->parent;
 while (!cur->nil) {
  if (less(cur->value.key,*key)) cur=cur->right;
  else { best=cur; cur=cur->left; }
 }
 Node *result=best;
 if (best==self->head || less(*key,best->value.key)) {
  Data zero; memset(&zero,0,sizeof(zero));
  Pair pair(*key,zero);
  Node *n=std::_Allocate(1,(Node*)0);
  n->left=self->head; n->parent=self->head; n->right=self->head; n->color=0; n->nil=0;
  new ((void *)&n->value) Pair(pair);
  It out;
  It pos={best}; fn_824E7840(&out,self,pos,n); result=out.p;
  fn_82230300(&pair.key,1,0);
 }
 return &result->value.value;
}
