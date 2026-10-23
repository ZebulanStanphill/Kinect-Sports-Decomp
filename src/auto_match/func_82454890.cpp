#include "stdext/xmemory.h"
typedef union __declspec(intrin_type) __declspec(align(16)) __vector4 { float v[4]; } __vector4;

inline void*operator new(unsigned,void*p) throw(){return p;}
namespace N1 { extern "C" void*lbl_821B9BC8[]; }
namespace N2 { extern "C" void*lbl_821B9BC8[]; }
extern "C" {__declspec(noreturn)void fn_82F622A8(const char*);void fn_8265CA20(void*);}
struct B { void**vt; int a;
 B(const B&s) { vt=N1::lbl_821B9BC8; a=s.a; }
};
struct E : B { int b,c;__vector4 v;float f;unsigned char flag;char pad[11];
 E(const E&s) : B(s) {vt=N2::lbl_821B9BC8;b=s.b;c=s.c;v=s.v;f=s.f;flag=s.flag;}
};
struct V{E*first,*last,*end;};
static __forceinline E*alloc(unsigned n){void*p=0;if(n<=0)n=0;else if(n>0x5555555 || (p=fn_8265C9E0(n*sizeof(E)))==0)stdext::bad_alloc(0)._Raise();return(E*)p;}
extern "C" void fn_82454890(V*self,unsigned n){
 if(n>0x5555555)fn_82F622A8("vector<T> too long");
 if((unsigned)(self->end-self->first)<n){
 E*p=alloc(n);E*dst=p;E*last=self->last;
 for(E*src=self->first;src!=last;++src,++dst)::new((void*)dst)E(*src);
 E*first=self->first;last=self->last;int count=last-first;
 if(first){for(E*src=first;src!=last;++src)((void(*)(E*,unsigned))src->vt[0])(src,0);fn_8265CA20(self->first);}
 self->first=p;self->end=p+n;self->last=p+count;
 }
}
