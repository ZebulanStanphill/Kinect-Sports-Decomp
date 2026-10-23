#include "stdext/xmemory.h"
extern "C" void *memcpy(void *,const void *,unsigned int);
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" { void fn_823CCBA8(); extern void* lbl_821B7924[]; void fn_8227CB30(void*,void*); void fn_82359C18(void*); char* fn_823F05B8(void*,void*); void fn_823831D8(void*); }
struct Mfp { void(*f)(); int adjust; };
struct Key { void *a; int b; };
struct S48 { __int64 v[6]; };
struct S76 { unsigned char d[76]; };
struct __declspec(align(16)) Bind { Mfp m; void *self; int pad; __vector4 v; S48 a; unsigned char b; char pb[15]; unsigned char c; char pc[15]; S76 d; int pad4; int e; int pad2[3]; };
struct Impl { void*vt; Bind f; };
struct Function { char buffer[16];Impl*p;int pad; };
struct Owner { char *a,*b; };
extern "C" void fn_823EC050(Owner*self, const S48 *a, unsigned char b, unsigned char c, __vector4 v, const S76 *d, int e) {
 Mfp m={fn_823CCBA8,0}; Bind bd; bd.m=m;bd.self=self->b; bd.v=v; for(int i=0;i<6;i++) bd.a.v[i]=a->v[i]; bd.b=b; bd.c=c; bd.d=*d; bd.e=e;
 Impl *p=std::_Allocate(1,(Impl*)0);
 p->vt=lbl_821B7924;p->f=bd;
 Function fun;fun.p=p;
 Key key; key.a=((const Key*)a)->a; key.b=((const Key*)a)->b; char *entry=fn_823F05B8(self->b+0xa68,&key);fn_8227CB30(entry+0x18,&fun);
 fn_82359C18(&fun);
 fn_823831D8(self->a+0x710);
}
