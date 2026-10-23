#include "stdext/xmemory.h"
extern "C" void fn_82359C18(void*);
struct Member { char d[0x18]; ~Member() { fn_82359C18(this); } };
struct Item { char data[0x400]; Member a; Member b; char rest[0x10]; };
struct Vec { Item *first,*last,*end; };
extern "C" __declspec(noreturn) void fn_82F622A8(const char*);
extern "C" void fn_82285290(Item*, const Item*);
extern "C" void fn_8265CA20(void*);
static __forceinline Item *allocate(unsigned count) { void*p=0; if(count<=0)count=0; else if(count>0x3c3c3c || (p=fn_8265C9E0(count*sizeof(Item)))==0) stdext::bad_alloc(0)._Raise(); return (Item*)p; }
static inline void destroy(Item *first, Item *last) { for (; first != last; ++first) first->~Item(); }
extern "C" void fn_82285168(Vec *v, unsigned n) {
 if (n > 0x3c3c3c) fn_82F622A8("vector<T> too long");
 if ((unsigned)(v->end-v->first) < n) {
 Item *p=allocate(n);
 Item *dst=p;
 Item *last=v->last;
 for(Item *src=v->first;src!=last;++src,++dst) if(dst) fn_82285290(dst,src);
 int count=v->last-v->first;
 if(v->first) {
 destroy(v->first, v->last);
 fn_8265CA20(v->first);
 }
 v->first=p;v->end=p+n;v->last=p+count;
 }
}
