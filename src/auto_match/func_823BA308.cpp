#include "stdext/xmemory.h"
inline void *operator new(unsigned int,void *p) throw() {return p;}
extern "C" { void fn_82365BD8(void *,const void *); void fn_8235A028(void *,const void *); }
struct Inner { unsigned __int64 sp; unsigned __int64 o;
 __forceinline Inner(const Inner &r) { fn_82365BD8(&sp,&r.sp); fn_8235A028(&o,&r.o); } };
struct Item { unsigned __int64 a; Inner b;
 __forceinline Item(const Item &v):a(v.a),b(v.b) {} };
struct Deque;
struct Proxy { const Deque *cont; void *firstiter; };
struct Deque {
 Proxy *proxy; Item **map; unsigned int mapsize,off,size;
 void Growmap();
};
struct IterBase {
 Proxy *proxy; IterBase *next;
 IterBase():proxy(0),next(0) {}
 __forceinline IterBase(const IterBase &r):proxy(0),next(0) { *this=r; }
 IterBase &operator=(const IterBase &r) { if (proxy!=r.proxy) { if (r.proxy!=0) Adopt(r.proxy->cont); } return *this; }
 void Adopt(const Deque *p) { if (p!=0) proxy=p->proxy; }
 const Deque *Getcont() const { return proxy==0?0:proxy->cont; }
};
struct UIter { const Deque *cont; unsigned int off; };
extern "C" { void fn_823915C8(Deque *); void fn_823BADB0(UIter,UIter); }
struct ConstIter : IterBase {
 unsigned int off;
 __forceinline ConstIter(unsigned int o,const Deque *d) { Adopt(d); off=o; }
 __forceinline ConstIter &operator+=(int n) { off+=n; return *this; }
 __forceinline ConstIter operator+(int n) const { ConstIter tmp=*this; return tmp+=n; }
 ConstIter &operator++() { ++off; return *this; }
 bool operator!=(const ConstIter &r) const { return off!=r.off; }
 int operator-(const ConstIter &r) const { return r.off<off?(int)(off-r.off):-(int)(r.off-off); }
 const Item &operator*() const {
  const Deque *d=Getcont(); unsigned int block=off; if (d->mapsize<=block) block-=d->mapsize; return *d->map[block];
 }
};
extern "C" { ConstIter fn_823BAC60(ConstIter,ConstIter,ConstIter); }
static __forceinline void push_front(Deque *self,const Item &v) {
 if (self->mapsize<=self->size+1) fn_823915C8(self);
 unsigned int newoff=self->off!=0?self->off-1:self->mapsize-1;
 unsigned int block=newoff;
 if (self->map[block]==0) self->map[block]=std::_Allocate(1,(Item *)0);
 ::new ((void *)self->map[block]) Item(v);
 self->off=newoff; ++self->size;
}
static __forceinline void push_back(Deque *self,const Item &v) {
 if (self->mapsize<=self->size+1) fn_823915C8(self);
 unsigned int newoff=self->off+self->size;
 unsigned int block=newoff;
 if (self->mapsize<=block) block-=self->mapsize;
 if (self->map[block]==0) self->map[block]=std::_Allocate(1,(Item *)0);
 ::new ((void *)self->map[block]) Item(v);
 ++self->size;
}
__forceinline UIter Unchecked(ConstIter it) { const Deque *c=it.Getcont(); UIter u; u.cont=c; u.off=it.off; return u; }
__forceinline void Reverse(UIter first,UIter last) {
 for (;first.off!=last.off && first.off!=--last.off;++first.off) fn_823BADB0(first,last);
}
__forceinline void reverse(ConstIter first,ConstIter last) { Reverse(Unchecked(first),Unchecked(last)); }
extern "C" void fn_823BA308(Deque *self,ConstIter where,ConstIter first,ConstIter last) {
 unsigned int off=where-ConstIter(self->off,self);
 unsigned int old=self->size;
 if (first!=last) {
  if (off<=old/2) {
   for (;first!=last;++first) push_front(self,*first);
   unsigned int num=self->size-old;
   reverse(ConstIter(self->off,self),ConstIter(self->off,self)+num);
   fn_823BAC60(ConstIter(self->off,self),ConstIter(self->off,self)+num,ConstIter(self->off,self)+num+off);
  } else {
   for (;first!=last;++first) push_back(self,*first);
   fn_823BAC60(ConstIter(self->off,self)+off,ConstIter(self->off,self)+old,ConstIter(self->off+self->size,self));
  }
 }
}
