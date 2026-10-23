#include "stdext/xmemory.h"
inline void *operator new(unsigned int,void*p) throw() { return p; }
struct E { unsigned char data[160]; };
struct Buf { E *first,*end,*begin,*last;unsigned count; };
struct It { Buf *b; E *p; };
extern "C" void fn_824A7938(It*,int);
extern "C" void fn_8265CA20(void*);
static void increment(E*&p, const Buf*b) { ++p; if(p==b->end)p=b->first; }
static bool neq(E*a,E*b) { return a!=b; }
static const unsigned& Min(const unsigned&a,const unsigned&b) {return a<b?a:b;}
static E *add(const Buf *b, E *p, int n) { return p + (n < (b->end - p) ? n : n - (unsigned)(b->end - b->first)); }
static void pluseq(It &it, int n) {
 if (n > 0) { it.p = add(it.b, it.p, n); if (it.p == it.b->last) it.p = 0; }
 else if (n < 0) { fn_824A7938(&it, -n); }
}
extern "C" void fn_824A7710(Buf *b) {
 const unsigned cap=200;
 if (b->end-b->first != 200) {
 E *mem=std::_Allocate(200,(E*)0);
 E *src=0; if(b->count) src=b->begin;
 unsigned count=b->count;
 const unsigned &n=Min(count,cap);
 It it={b,src}; 
 pluseq(it, n);
 E *stop=it.p;
 E *dst=mem;
 for(;src!=stop;++dst) {
 ::new ((void*)dst) E(*src);
 ++src; if(src==b->end) src=b->first;
 src=neq(src,b->last)?src:0;
 }
 for(unsigned i=0;i<b->count;++i,increment(b->begin,b));
 if(b->first) fn_8265CA20(b->first);
 b->count=dst-mem; b->begin=b->first=mem; b->end=b->first+200;
 b->last=dst==b->end?b->first:dst;
 }
}
