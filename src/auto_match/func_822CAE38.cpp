#include "stdext/xmemory.h"
struct D { int alloc; void **map; unsigned size,offset; };
extern "C" __declspec(noreturn) void fn_82F622A8(const char*);
extern "C" void *memmove(void*,const void*,unsigned);
extern "C" void fn_8265CA20(void*);
static void **copy(void **a,void **z,void **d) { unsigned n=(z-a)*sizeof(void*); return (void**)((char*)memmove(d,a,n)+n); }
static void fill(void **p,unsigned n) { for(;0<n;--n,++p) *p=0; }
static __forceinline void** allocate(unsigned count) { void *p=0; if(count<=0) count=0; else if(count>0x3fffffff || (p=fn_8265C9E0(count*4))==0) stdext::bad_alloc(0)._Raise(); return (void**)p; }
extern "C" void fn_822CAE38(D *self) {
 unsigned count=1;
 unsigned &sz=self->size;
 if(0xfffffff-sz < count) fn_82F622A8("deque<T> too long");
 unsigned grow=sz/2;
 if(grow<8)grow=8;
 if(count<grow && sz<=0xfffffff-grow)count=grow;
 unsigned newsize=sz+count;
 unsigned off=self->offset/2;
 void **map=allocate(newsize);
 void **last=copy(self->map+off,self->map+sz,map+off);
 if(off<=count) {
 last=copy(self->map,self->map+off,last);
 fill(last,count-off);fill(map,off);
 } else {
 last=copy(self->map,self->map+count,last);
 last=copy(self->map+count,self->map+off,map);
 fill(last,count);
 }
 if(self->map)fn_8265CA20(self->map);
 unsigned t=sz; self->map=map; sz=t+count;
}
