#include "stdext/xmemory.h"
inline void *operator new(unsigned,void*p) throw(){return p;}
struct E { unsigned char data[40]; };
extern "C" { __declspec(noreturn) void fn_82F622A8(const char*);void fn_8265CA20(void*); void fn_824BFEC0(E*,E*,E*); }
static __forceinline E* alloc(unsigned n) { void*p=0;if(n<=0)n=0;else if(n>0x6666666 || (p=fn_8265C9E0(n*40))==0)stdext::bad_alloc(0)._Raise();return(E*)p;}
static E* copy(E*first,E*last,E*dest) { for(;first!=last;++dest,++first) ::new((void*)dest) E(*first);return dest; }
static void destroy(E*first,E*last) { for(;first!=last;++first)first->~E(); }
static inline void rotate(E*first,E*mid,E*last) { if(first!=mid && mid!=last)fn_824BFEC0(first,mid,last); }
struct V { E *first,*last,*end;
 unsigned size() const { return last-first; }
 unsigned capacity() const { return end-first; }
 unsigned max_size() const { return 0x6666666; }
};
extern "C" void fn_824BFC80(V*v,E*where,E*f,E*l) {
 unsigned n=l-f;
 if(n==0) ;
 else if(v->max_size()-v->size() < n)fn_82F622A8("vector<T> too long");
 else if(v->capacity()<v->size()+n) {
 unsigned cap=v->max_size()-v->capacity()/2<v->capacity()?0:v->capacity()+v->capacity()/2;
 if(cap<v->size()+n)cap=v->size()+n;
 E*mem=alloc(cap);
 E*ptr=copy(v->first,where,mem);
 ptr=copy(f,l,ptr);
 copy(where,v->last,ptr);
 n+=v->size();
 if(v->first!=0) { destroy(v->first,v->last);fn_8265CA20(v->first); }
 v->end=mem+cap;v->last=mem+n;v->first=mem;
 } else {
 copy(f,l,v->last);
 rotate(where,v->last,v->last+n);
 E **plast=&v->last; *plast+=n;
 }
}
