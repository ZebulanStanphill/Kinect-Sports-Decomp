#include "stdext/xmemory.h"
template<class T> __forceinline T *Allocate(unsigned n,T*) {
void *p=0; if(n<=0)n=0;else if((unsigned)-1/sizeof(T)<n||(p=fn_8265C9E0(n*sizeof(T)))==0) stdext::bad_alloc(0)._Raise();return (T*)p;}
inline void *operator new(unsigned int,void *p) throw() {return p;}
struct E { unsigned char b[0xc4]; };
struct Vec { E *first,*last,*end;
__forceinline void insert(E*,E*,E*);
};
extern "C" { __declspec(noreturn) void fn_82F622A8(const char*); void fn_8265CA20(void*); void fn_82539060(E*,E*,E*); }
static E *move(E *a,E *b,E *d) { for(;a!=b;++d,++a) ::new((void*)d) E(*a); return d; }
static void rotate(E *f,E *m,E *l) { if(f!=m && m!=l) fn_82539060(f,m,l); }
static void destroy(E *a,E *b) {for(;a!=b;++a) a->~E();}
__forceinline void Vec::insert(E *where,E *first,E *last) {
 Vec *v=this;
 unsigned count=last-first;
 if(count!=0) {
  unsigned old=v->last-v->first;
  if(0x14e5e0a-old<count) fn_82F622A8("vector<T> too long");
  unsigned newsize=old+count;
  unsigned cap=v->end-v->first;
  if(cap<newsize) {
   unsigned newcap=0x14e5e0a-cap/2<cap?0:cap+cap/2;
   if(newcap<newsize)newcap=newsize;
   E *p=Allocate(newcap,(E*)0);
   E *d=move(v->first,where,p);
   d=move(first,last,d);
   move(where,v->last,d);
   unsigned total=(v->last-v->first)+count;
   if(v->first) {destroy(v->first,v->last); fn_8265CA20(v->first);}
   v->first=p;v->end=p+newcap;v->last=p+total;
  } else {
   move(first,last,v->last);
   { E *m=v->last; rotate(where,m,m+count); }
   v->last+=count;
  }
 }
}

extern "C" void fn_825386B0(Vec*v,E*w,E*f,E*l){v->insert(w,f,l);}
